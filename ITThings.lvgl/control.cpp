#include "lv_conf.h"
//#include "images\lv_image_gas.c"
//#include "images\lv_image_clouds.c"
#include <lvgl.h>

//#include <TFT_eSPI.h>
#include "control.h"
static void controls_create(lv_obj_t *parent);
static void visuals_create(lv_obj_t *parent);
static void selectors_create(lv_obj_t *parent);
static void slider_event_cb(lv_obj_t *slider, lv_event_t e);
static void ta_event_cb(lv_obj_t *ta, lv_event_t e);
static void kb_event_cb(lv_obj_t *ta, lv_event_t e);
static void bar_anim(lv_task_t *t);
static void arc_anim(lv_obj_t *arc, lv_anim_value_t value);
static void linemeter_anim(lv_obj_t *linemeter, lv_anim_value_t value);
static void gauge_anim(lv_obj_t *gauge, lv_anim_value_t value);
static void table_event_cb(lv_obj_t *table, lv_event_t e);
#if LV_USE_THEME_MATERIAL
static void color_chg_event_cb(lv_obj_t *sw, lv_event_t e);
#endif

static lv_obj_t *tv;
static lv_obj_t *t1;
static lv_obj_t *t2;
static lv_obj_t *t3;
static lv_obj_t *kb;

static lv_style_t style_box;
void ppp(void)
{
    lv_obj_t* label;

    lv_obj_t* btn1 = lv_btn_create(lv_scr_act(), NULL);
 
    lv_obj_align(btn1, NULL, LV_ALIGN_CENTER, 0, -40);

    label = lv_label_create(btn1, NULL);
    lv_label_set_text(label, "Button");

    lv_obj_t* btn2 = lv_btn_create(lv_scr_act(), NULL);

    lv_obj_align(btn2, NULL, LV_ALIGN_CENTER, 0, 40);
    lv_btn_set_checkable(btn2, true);
    lv_btn_toggle(btn2);
    lv_btn_set_fit2(btn2, LV_FIT_NONE, LV_FIT_TIGHT);

    label = lv_label_create(btn2, NULL);
    lv_label_set_text(label, "Toggled");
}

static void slider_event_cb(lv_obj_t *slider, lv_event_t e)
{
    if (e == LV_EVENT_VALUE_CHANGED)
    {
        if (lv_slider_get_type(slider) == LV_SLIDER_TYPE_NORMAL)
        {
            static char buf[16];
            lv_snprintf(buf, sizeof(buf), "%d", lv_slider_get_value(slider));
            lv_obj_set_style_local_value_str(slider, LV_SLIDER_PART_KNOB, LV_STATE_DEFAULT, buf);
        }
        else
        {
            static char buf[32];
            lv_snprintf(buf, sizeof(buf), "%d-%d", lv_slider_get_left_value(slider), lv_slider_get_value(slider));
            lv_obj_set_style_local_value_str(slider, LV_SLIDER_PART_INDIC, LV_STATE_DEFAULT, buf);
        }
    }
}

static void ta_event_cb(lv_obj_t *ta, lv_event_t e)
{
    if (e == LV_EVENT_RELEASED)
    {
        if (kb == NULL)
        {
            lv_coord_t kb_height = LV_MATH_MIN(LV_VER_RES / 2, LV_DPI * 4 / 3);
            lv_obj_set_height(tv, LV_VER_RES - kb_height);
            kb = lv_keyboard_create(lv_scr_act(), NULL);
            lv_obj_set_height(kb, kb_height);
            lv_obj_align(kb, NULL, LV_ALIGN_IN_BOTTOM_MID, 0, 0);
            lv_obj_set_event_cb(kb, kb_event_cb);

            lv_indev_wait_release(lv_indev_get_act());
        }
        lv_textarea_set_cursor_hidden(ta, false);
        lv_page_focus(t1, lv_textarea_get_label(ta), LV_ANIM_ON);
        lv_keyboard_set_textarea(kb, ta);
    }
    else if (e == LV_EVENT_DEFOCUSED)
    {
        lv_textarea_set_cursor_hidden(ta, true);
    }
}

static void kb_event_cb(lv_obj_t *_kb, lv_event_t e)
{
    lv_keyboard_def_event_cb(kb, e);

    if (e == LV_EVENT_CANCEL)
    {
        if (kb)
        {
            lv_obj_set_height(tv, LV_VER_RES);
            lv_obj_del(kb);
            kb = NULL;
        }
    }
}

static void bar_anim(lv_task_t *t)
{
    static uint32_t x = 0;
    lv_obj_t *bar = (lv_obj_t *)t->user_data;
    //lv_obj_set_style_local_value_str
    static char buf[64];
    lv_snprintf(buf, sizeof(buf), "Copying %d/%d", x, lv_bar_get_max_value(bar));
    lv_obj_set_style_local_value_str(bar, LV_BAR_PART_BG, LV_STATE_DEFAULT, buf);

    lv_bar_set_value(bar, x, LV_ANIM_OFF);
    x++;
    if (x > lv_bar_get_max_value(bar))
        x = 0;
}

static void arc_anim(lv_obj_t *arc, lv_anim_value_t value)
{
    lv_arc_set_end_angle(arc, value);

    static char buf[64];
    lv_snprintf(buf, sizeof(buf), "%d", value);
    lv_obj_t *label = lv_obj_get_child(arc, NULL);
    lv_label_set_text(label, buf);
    lv_obj_align(label, arc, LV_ALIGN_CENTER, 0, 0);
}

static void linemeter_anim(lv_obj_t *linemeter, lv_anim_value_t value)
{
    lv_linemeter_set_value(linemeter, value);

    static char buf[64];
    lv_snprintf(buf, sizeof(buf), "%d", value);
    lv_obj_t *label = lv_obj_get_child(linemeter, NULL);
    lv_label_set_text(label, buf);
    lv_obj_align(label, linemeter, LV_ALIGN_CENTER, 0, 0);
}

static void gauge_anim(lv_obj_t *gauge, lv_anim_value_t value)
{
    lv_gauge_set_value(gauge, 0, value);

    static char buf[64];
    lv_snprintf(buf, sizeof(buf), "%d", value);
    lv_obj_t *label = lv_obj_get_child(gauge, NULL);
    lv_label_set_text(label, buf);
    lv_obj_align(label, gauge, LV_ALIGN_IN_TOP_MID, 0, lv_obj_get_y(label));
}

static void table_event_cb(lv_obj_t *table, lv_event_t e)
{
    if (e == LV_EVENT_CLICKED)
    {
        uint16_t row;
        uint16_t col;
        lv_res_t r = lv_table_get_pressed_cell(table, &row, &col);
        if (r == LV_RES_OK && col && row)
        { /*Skip the first row and col*/
            if (lv_table_get_cell_type(table, row, col) == 1)
            {
                lv_table_set_cell_type(table, row, col, 4);
            }
            else
            {
                lv_table_set_cell_type(table, row, col, 1);
            }
        }
    }
}

#if LV_USE_THEME_MATERIAL
static void color_chg_event_cb(lv_obj_t *sw, lv_event_t e)
{
    if (LV_THEME_DEFAULT_INIT != lv_theme_material_init)
        return;
    if (e == LV_EVENT_VALUE_CHANGED)
    {
        uint32_t flag = LV_THEME_MATERIAL_FLAG_LIGHT;
        if (lv_switch_get_state(sw))
            flag = LV_THEME_MATERIAL_FLAG_DARK;

        LV_THEME_DEFAULT_INIT(lv_theme_get_color_primary(), lv_theme_get_color_secondary(),
                              flag,
                              lv_theme_get_font_small(), lv_theme_get_font_normal(), lv_theme_get_font_subtitle(), lv_theme_get_font_title());
    }
}
#endif
/*
static void ta_event_cb(lv_obj_t * ta, lv_event_t e)
{
    if(e == LV_EVENT_RELEASED) {
        if(kb == NULL) {
            lv_coord_t kb_height = LV_MATH_MIN(LV_VER_RES / 2, LV_DPI * 4 / 3);
            lv_obj_set_height(tv, LV_VER_RES - kb_height);
            kb = lv_keyboard_create(lv_scr_act(), NULL);
            lv_obj_set_height(kb, kb_height);
            lv_obj_align(kb, NULL, LV_ALIGN_IN_BOTTOM_MID, 0, 0);
            lv_obj_set_event_cb(kb, kb_event_cb);

            lv_indev_wait_release(lv_indev_get_act());
        }
        lv_textarea_set_cursor_hidden(ta, false);
        lv_page_focus(t1, lv_textarea_get_label(ta), LV_ANIM_ON);
        lv_keyboard_set_textarea(kb, ta);
    } else if(e == LV_EVENT_DEFOCUSED) {
        lv_textarea_set_cursor_hidden(ta, true);
    }
}
*/
/*
static void kb_event_cb(lv_obj_t * _kb, lv_event_t e)
{
    lv_keyboard_def_event_cb(kb, e);

    if(e == LV_EVENT_CANCEL) {
        if(kb) {
            lv_obj_set_height(tv, LV_VER_RES);
            lv_obj_del(kb);
            kb = NULL;
        }
    }
}
*/

 void createUI()
{

    tv = lv_tabview_create(lv_scr_act(), NULL);


    t1 = lv_tabview_add_tab(tv, "Control");
    t2 = lv_tabview_add_tab(tv, "Usage");
    t3 = lv_tabview_add_tab(tv, "Settings");

    lv_style_init(&style_box);
    lv_style_set_value_align(&style_box, LV_STATE_DEFAULT, LV_ALIGN_OUT_TOP_LEFT);
    lv_style_set_value_ofs_y(&style_box, LV_STATE_DEFAULT, -LV_DPX(10));
    lv_style_set_margin_top(&style_box, LV_STATE_DEFAULT, LV_DPX(30));

    controls_create(t1);
    visuals_create(t2);
    selectors_create(t3);
}

static void controls_create(lv_obj_t *parent)
{

    lv_obj_set_style_local_pad_top(parent, LV_PAGE_PART_BG, LV_STATE_DEFAULT, -LV_DPX(15));
    lv_obj_set_style_local_pad_bottom(parent, LV_PAGE_PART_BG, LV_STATE_DEFAULT, -LV_DPX(15));
    lv_obj_set_style_local_pad_left(parent, LV_PAGE_PART_BG, LV_STATE_DEFAULT, -LV_DPX(15));
    lv_obj_set_style_local_pad_right(parent, LV_PAGE_PART_BG, LV_STATE_DEFAULT, -LV_DPX(15));

    lv_page_set_scrollbar_mode(parent, LV_SCROLLBAR_MODE_OFF);

    lv_page_set_scrl_layout(parent, LV_LAYOUT_GRID);

    lv_disp_size_t disp_size = lv_disp_get_size_category(NULL);

    lv_coord_t grid_h = lv_page_get_height_grid(parent, 1, 1);
    lv_coord_t grid_w = lv_page_get_width_grid(parent, 3, 1);

    lv_coord_t fit_w = lv_obj_get_width_fit(parent);
    lv_coord_t fit_h = lv_obj_get_height_margin(parent);

    static lv_anim_path_t path_overshoot;
    lv_anim_path_init(&path_overshoot);
    lv_anim_path_set_cb(&path_overshoot, lv_anim_path_overshoot);

    static lv_anim_path_t path_ease_out;
    lv_anim_path_init(&path_ease_out);
    lv_anim_path_set_cb(&path_ease_out, lv_anim_path_ease_out);

    static lv_anim_path_t path_ease_in_out;
    lv_anim_path_init(&path_ease_in_out);
    lv_anim_path_set_cb(&path_ease_in_out, lv_anim_path_ease_in_out);
    
    static lv_style_t style_btn_1;
    lv_style_init(&style_btn_1);
    // lv_style_set_radius(&style_btn_1, )
    lv_style_set_transition_time(&style_btn_1, LV_STATE_PRESSED, 400);
    lv_style_set_transition_time(&style_btn_1, LV_STATE_DEFAULT, 0);
    lv_style_set_transition_delay(&style_btn_1, LV_STATE_DEFAULT, 200);
    lv_style_set_outline_width(&style_btn_1, LV_STATE_DEFAULT, 0);
    lv_style_set_outline_width(&style_btn_1, LV_STATE_PRESSED, 5);
    lv_style_set_outline_opa(&style_btn_1, LV_STATE_DEFAULT, LV_OPA_COVER);
    lv_style_set_outline_opa(&style_btn_1, LV_STATE_FOCUSED, LV_OPA_COVER); /*Just to be sure, the theme might use it*/
    lv_style_set_outline_opa(&style_btn_1, LV_STATE_PRESSED, LV_OPA_TRANSP);
    lv_style_set_transition_prop_1(&style_btn_1, LV_STATE_DEFAULT, LV_STYLE_OUTLINE_OPA);
    lv_style_set_transition_prop_2(&style_btn_1, LV_STATE_DEFAULT, LV_STYLE_OUTLINE_WIDTH);
    lv_style_set_radius(&style_btn_1, LV_STATE_DEFAULT, 6);
    lv_style_set_margin_top(&style_btn_1, LV_STATE_DEFAULT, LV_DPX(6));

    lv_style_set_pad_all(&style_btn_1, LV_STATE_DEFAULT, LV_DPX(3));
    // lv_style_set_margin_right(&style_btn_1, LV_STATE_DEFAULT, LV_DPX(10));
    //lv_style_set_pad_inner(&style_btn_1, LV_STATE_DEFAULT, LV_DPX(5));

    static lv_style_t style_transcontL;
    lv_style_init(&style_transcontL);
    lv_style_set_border_width(&style_transcontL, LV_CONT_PART_MAIN, 0);
    //lv_style_set_margin_top(&style_transcontL, LV_STATE_DEFAULT, -LV_DPX(10));
    lv_style_set_margin_top(&style_transcontL, LV_STATE_DEFAULT, -LV_DPX(5));
    lv_style_set_margin_bottom(&style_transcontL, LV_STATE_DEFAULT, -LV_DPX(15));
    lv_style_set_margin_left(&style_transcontL, LV_STATE_DEFAULT, -LV_DPX(15));
    // lv_style_set_margin_right(&style_transcontL, LV_STATE_DEFAULT, -LV_DPX(22));
    //lv_style_set_margin_right(&style_transcontL, LV_STATE_DEFAULT, -LV_DPX(12));
    lv_style_set_pad_inner(&style_transcontL, LV_STATE_DEFAULT, LV_DPX(1));
    lv_style_set_pad_right(&style_transcontL, LV_STATE_DEFAULT, LV_DPX(5));
    lv_style_set_pad_top(&style_transcontL, LV_STATE_DEFAULT, LV_DPX(2));
    lv_style_set_pad_bottom(&style_transcontL, LV_STATE_DEFAULT, LV_DPX(5));
    lv_style_set_pad_left(&style_transcontL, LV_STATE_DEFAULT, LV_DPX(5));
    lv_style_set_bg_opa(&style_transcontL, LV_STATE_DEFAULT, 0);

    static lv_style_t style_transcontM;
    lv_style_init(&style_transcontM);
    lv_style_set_margin_left(&style_transcontL, LV_STATE_DEFAULT, -LV_DPX(18));
   // lv_style_set_bg_opa(&style_transcontM, LV_STATE_DEFAULT, 0);
    //lv_style_set_border_opa(&style_transcontM, LV_STATE_DEFAULT, 0);

    static lv_style_t style_transcontR;
    lv_style_init(&style_transcontR);
    lv_style_set_bg_opa(&style_transcontR, LV_STATE_DEFAULT, 0);
    lv_style_set_border_opa(&style_transcontR, LV_STATE_DEFAULT, 0);
    //lv_style_set_value_ofs_x(&style_transcontR, LV_STATE_DEFAULT, LV_DPX(1262));
    //lv_style_set_margin_right(&style_transcontR, LV_STATE_DEFAULT, LV_DPX(-220));

    lv_obj_t *contLeft = lv_cont_create(parent, NULL);
    lv_cont_set_layout(contLeft, LV_LAYOUT_PRETTY_TOP);
    lv_cont_set_fit2(contLeft, LV_FIT_TIGHT, LV_FIT_PARENT);
    lv_obj_add_style(contLeft, LV_CONT_PART_MAIN, &style_transcontL);
    lv_obj_set_width_fit(contLeft, grid_w);

    lv_obj_t *btnAuto = lv_btn_create(contLeft, NULL);
    lv_obj_set_size(btnAuto, grid_w - 20, 53);
    lv_btn_set_checkable(btnAuto, true);
    lv_obj_add_style(btnAuto, LV_BTN_PART_MAIN, &style_btn_1);

    lv_obj_t *labelAuto = lv_label_create(btnAuto, NULL);
    lv_label_set_text(labelAuto, "Auto");

    lv_obj_t *btnOn = lv_btn_create(contLeft, NULL);
    lv_obj_set_size(btnOn, grid_w - 20, 53);
    lv_btn_set_checkable(btnOn, true);
    lv_obj_add_style(btnOn, LV_BTN_PART_MAIN, &style_btn_1);
    lv_obj_t *labelOn = lv_label_create(btnOn, NULL);
    lv_label_set_text(labelOn, "On");

    lv_obj_t *btnOff = lv_btn_create(contLeft, NULL);
    lv_obj_set_size(btnOff, grid_w - 20, 53);
    lv_btn_set_checkable(btnOff, true);
    lv_obj_add_style(btnOff, LV_BTN_PART_MAIN, &style_btn_1);
    lv_obj_t *labelOff = lv_label_create(btnOff, NULL);
    lv_label_set_text(labelOff, "Off");

    lv_obj_t *contMid = lv_cont_create(parent, NULL);
    lv_cont_set_layout(contMid, LV_LAYOUT_OFF);
    lv_cont_set_fit2(parent, LV_FIT_TIGHT, LV_FIT_TIGHT);
    lv_obj_add_style(contMid, LV_CONT_PART_MAIN, &style_transcontL);
    lv_obj_set_height(contMid, grid_h);
    lv_obj_set_width(contMid, grid_w + 20);
    //  lv_cont_set_fit2(contMid, LV_FIT_NONE, LV_FIT_NONE  );
    //lv_obj_set_drag_parent(contMid, true);
    //lv_obj_add_style(contMid, LV_CONT_PART_MAIN, &style_transcontM);

    static lv_style_t style_temp_actual;
    lv_style_init(&style_temp_actual);
    lv_style_set_text_color(&style_temp_actual, LV_STATE_DEFAULT, LV_COLOR_CYAN);
    // lv_style_set_bg_opa(&style_temp_actual, LV_STATE_DEFAULT, LV_COLOR_CYAN);
    lv_style_set_text_font(&style_temp_actual, LV_STATE_DEFAULT, &lv_font_roboto_bold_40);
   // lv_style_set_margin_left(&style_temp_actual, LV_STATE_DEFAULT, LV_DPX(15));

    static lv_style_t style_temp_degrees;
    lv_style_init(&style_temp_degrees);
    lv_style_set_text_color(&style_temp_degrees, LV_STATE_DEFAULT, LV_COLOR_CYAN);
    lv_style_set_pad_right(&style_temp_degrees, LV_STATE_DEFAULT, LV_DPX(3));
    lv_style_set_pad_top(&style_temp_degrees, LV_STATE_DEFAULT, LV_DPX(5));
    // lv_style_set_bg_opa(&style_temp_actual, LV_STATE_DEFAULT, LV_COLOR_CYAN);
    //lv_style_set_text_font(&style_temp_degrees, LV_STATE_DEFAULT, &lv_font_roboto_black_50);

    static lv_style_t style_temp_outside;
    lv_style_init(&style_temp_outside);
    lv_style_set_text_color(&style_temp_outside, LV_STATE_DEFAULT, LV_COLOR_SILVER);
    // lv_style_set_bg_opa(&style_temp_actual, LV_STATE_DEFAULT, LV_COLOR_CYAN);
    lv_style_set_text_font(&style_temp_outside, LV_STATE_DEFAULT, &lv_font_roboto_reg_16);

    static lv_style_t style_font_credit;
    lv_style_init(&style_font_credit);
    lv_style_set_text_color(&style_font_credit, LV_STATE_DEFAULT, LV_COLOR_SILVER);
    lv_style_set_text_font(&style_font_credit, LV_STATE_DEFAULT, &lv_font_roboto_reg_10);

    static lv_style_t style_font_humidity;
    lv_style_init(&style_font_humidity);
    lv_style_set_text_color(&style_font_humidity, LV_STATE_DEFAULT, LV_COLOR_WHITE);
    lv_style_set_text_font(&style_font_humidity, LV_STATE_DEFAULT, &lv_font_roboto_reg_12);

    lv_obj_t *labelActualTitle = lv_label_create(contMid, NULL);
    lv_obj_add_style(labelActualTitle, LV_LABEL_PART_MAIN, &style_box);
    lv_label_set_align(labelActualTitle, LV_LABEL_ALIGN_CENTER);
    //lv_obj_set_style_local_text_font(labelActualTitle, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_roboto_reg_16);
    lv_obj_set_style_local_pad_top(labelActualTitle, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, 5);
    lv_label_set_text(labelActualTitle, "Inside");
    lv_obj_set_pos(labelActualTitle, 40, 3);
    /*,,,,,,,,,,,,,,,,*/
    lv_obj_t *labelActual = lv_label_create(contMid, NULL);
    lv_obj_add_style(labelActual, LV_LABEL_PART_MAIN, &style_temp_actual);
    lv_label_set_align(labelActual, LV_LABEL_ALIGN_CENTER);
    lv_label_set_text(labelActual, "18.9");
    lv_obj_set_pos(labelActual, 15, 28);

    lv_obj_t *labelTmpPostfixLabel;
    labelTmpPostfixLabel = lv_label_create(contMid, NULL);
    lv_obj_add_style(labelTmpPostfixLabel, LV_LABEL_PART_MAIN, &style_temp_degrees);
    lv_label_set_text(labelTmpPostfixLabel, "°C");
    lv_obj_set_pos(labelTmpPostfixLabel, 100, 26);

    lv_obj_t *labelActualHumidity = lv_label_create(contMid, NULL);
    lv_obj_add_style(labelActualHumidity, LV_LABEL_PART_MAIN, &style_font_humidity);
    lv_label_set_align(labelActualHumidity, LV_LABEL_ALIGN_RIGHT);
    lv_label_set_recolor(labelActualHumidity, true);
    lv_label_set_text(labelActualHumidity, "#00ffff 35%# Humidity");
    lv_obj_set_pos(labelActualHumidity, 16, 72);

    //  lv_obj_t * bar1 = lv_bar_create(contMid, NULL);
    // lv_obj_set_size(bar1, 200, 2);
    // lv_obj_align(bar1, NULL, LV_ALIGN_CENTER, 0, 0);
    //lv_bar_set_anim_time(bar1, 2000);
    //lv_bar_set_value(bar1, 100, LV_ANIM_OFF);
    // lv_obj_set_style_local_line_color(bar1, LV_BAR_PART_BG , LV_STATE_DEFAULT, LV_COLOR_GRAY);
    //lv_obj_set_pos(bar1,10,90);

    static lv_style_t style_weather;
    lv_style_init(&style_weather);
    lv_style_set_border_width(&style_weather, LV_CONT_PART_MAIN, 1);
    //lv_style_set_margin_top(&style_weather, LV_STATE_DEFAULT, -LV_DPX(10));
    lv_style_set_margin_top(&style_weather, LV_STATE_DEFAULT, LV_DPX(5));
    lv_style_set_margin_bottom(&style_weather, LV_STATE_DEFAULT, -LV_DPX(15));
    lv_style_set_margin_left(&style_weather, LV_STATE_DEFAULT, -LV_DPX(20));
    // lv_style_set_margin_right(&style_weather, LV_STATE_DEFAULT, -LV_DPX(22));
    //lv_style_set_margin_right(&style_weather, LV_STATE_DEFAULT, -LV_DPX(12));
    lv_style_set_pad_inner(&style_weather, LV_STATE_DEFAULT, LV_DPX(1));
    lv_style_set_pad_right(&style_weather, LV_STATE_DEFAULT, LV_DPX(5));
    lv_style_set_pad_top(&style_weather, LV_STATE_DEFAULT, LV_DPX(5));
    lv_style_set_pad_bottom(&style_weather, LV_STATE_DEFAULT, LV_DPX(5));
    lv_style_set_pad_left(&style_weather, LV_STATE_DEFAULT, LV_DPX(5));
    lv_style_set_bg_opa(&style_weather, LV_STATE_DEFAULT, 0);

    lv_obj_t *labelOutTitle = lv_label_create(contMid, NULL);
    lv_obj_add_style(labelOutTitle, LV_LABEL_PART_MAIN, &style_box);
    lv_label_set_align(labelOutTitle, LV_LABEL_ALIGN_CENTER);
    //lv_obj_set_style_local_text_font(labelOutTitle, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_roboto_reg_16);
    // lv_obj_set_style_local_pad_all(labelOutTitle, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, 5);
    //lv_obj_set_style_local_margin_left(labelOutTitle, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, 18);
    lv_label_set_text(labelOutTitle, "Outside");
    lv_obj_set_pos(labelOutTitle, 30, 95);

    lv_obj_t *labelOutside = lv_label_create(contMid, NULL);
    // lv_obj_add_style(labelOutside, LV_LABEL_PART_MAIN, &style_box);
    // lv_label_set_align(labelOutside, LV_LABEL_ALIGN_AUTO);
    //lv_obj_set_style_local_pad_all(labelOutside, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, 5);
   // lv_obj_set_style_local_text_font(labelOutside, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_roboto_bold_16);
    //l//v_obj_set_style_local_margin_top(labelOutside, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, 28);
    //lv_obj_set_style_local_margin_left(labelOutside, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, -50);
    lv_obj_set_style_local_text_color(labelOutside, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, LV_COLOR_CYAN);
    lv_label_set_text(labelOutside, "17.5°");
    lv_obj_set_pos(labelOutside, 55, 115);

    lv_obj_t *labelOutsideDegrees = lv_label_create(contMid, NULL);
    lv_obj_add_style(labelOutsideDegrees, LV_LABEL_PART_MAIN, &style_temp_degrees);
    //lv_label_set_align(labelOutsideDegrees,LV_ALIGN_OUT_RIGHT_TOP);
    lv_label_set_align(labelOutsideDegrees, LV_LABEL_ALIGN_LEFT);
    lv_label_set_text(labelOutsideDegrees, "°C");
    //l//v_obj_set_style_local_margin_top(labelOutsideDegrees, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, 21);
    //lv_obj_set_style_local_margin_left(labelOutsideDegrees, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, 0);
    //lv_obj_set_style_local_text_color(labelOutsideDegrees, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, LV_COLOR_CYAN);
    lv_obj_set_pos(labelOutsideDegrees, 95, 110);
    
    lv_obj_t *imgClouds = lv_img_create(contMid, NULL);
    lv_img_set_src(imgClouds, &lv_image_clouds);
    //lv_obj_set_pos(imgClouds, 207, -20);
    lv_img_set_zoom(imgClouds, 120);
    //lv_obj_set_style_local_margin_top(imgClouds, LV_IMG_PART_MAIN, LV_STATE_DEFAULT, -40);
    //lv_obj_set_style_local_margin_left(imgClouds, LV_IMG_PART_MAIN, LV_STATE_DEFAULT, -30);
    //lv_obj_set_style_local_pad_left(imgClouds, LV_IMG_PART_MAIN, LV_STATE_DEFAULT, -30);
    lv_obj_set_pos(imgClouds, -5, 100);

    lv_obj_t *labelOutsideHumidity = lv_label_create(contMid, NULL);
    lv_obj_add_style(labelOutsideHumidity, LV_LABEL_PART_MAIN, &style_font_humidity);
    lv_label_set_align(labelOutsideHumidity, LV_LABEL_ALIGN_RIGHT);
    lv_label_set_recolor(labelOutsideHumidity, true);
    lv_label_set_text(labelOutsideHumidity, "#00ffff 77%# Humidity");
    lv_obj_set_pos(labelOutsideHumidity, 16, 135);

    /*Create an array for the points of the line*/
    static lv_point_t line_points[] = {{0, 0}, {120, 0}};

    /*Create style*/
    static lv_style_t style_line;
    lv_style_init(&style_line);
    lv_style_set_line_width(&style_line, LV_STATE_DEFAULT, 2);
    lv_style_set_line_color(&style_line, LV_STATE_DEFAULT, LV_COLOR_GRAY);
    lv_style_set_line_rounded(&style_line, LV_STATE_DEFAULT, true);

    /*Create a line and apply the new style*/
    lv_obj_t *line1;
    line1 = lv_line_create(lv_scr_act(), NULL);
    lv_line_set_points(line1, line_points, 2);               /*Set the points*/
    lv_obj_add_style(line1, LV_LINE_PART_MAIN, &style_line); /*Set the points*/
    lv_obj_align(line1, NULL, LV_ALIGN_CENTER, -3, 26);

    lv_obj_t *line2;
    line2 = lv_line_create(lv_scr_act(), line1);
    lv_line_set_points(line2, line_points, 2);               /*Set the points*/
    lv_obj_add_style(line2, LV_LINE_PART_MAIN, &style_line); /*Set the points*/
    lv_obj_align(line2, NULL, LV_ALIGN_CENTER, -3, 91);

    lv_obj_t *labelTmpPostfixLabel4;
    labelTmpPostfixLabel4 = lv_label_create(contMid, NULL);
    lv_obj_add_style(labelTmpPostfixLabel4, LV_LABEL_PART_MAIN, &style_font_credit);
    lv_label_set_align(labelTmpPostfixLabel4, LV_LABEL_ALIGN_LEFT);
    lv_label_set_text(labelTmpPostfixLabel4, "£12.88");
    //lv_obj_align(labelTmpPostfixLabel4, labelTmpTargetLabel, LV_ALIGN_CENTER, 50, 55);
    lv_obj_set_pos(labelTmpPostfixLabel4, 30, 160);

    lv_obj_t *contIcon = lv_cont_create(contMid, NULL);
    lv_cont_set_layout(contIcon, LV_LAYOUT_PRETTY_TOP);
    //  lv_cont_set_fit2(h, LV_FIT_NONE, LV_FIT_TIGHT);
    lv_obj_add_style(contIcon, LV_CONT_PART_MAIN, &style_transcontL);
    // lv_obj_set_height_fit(contIcon, 50);
    lv_obj_set_width(contIcon, grid_w - 11);
    //lv_obj_add_style(contIcon, LV_CONT_PART_MAIN, &style_transcontR);
    lv_obj_set_pos(contIcon, 30, 120);

    

      //  extern const lv_img_dsc_t lv_image_gas;


    lv_obj_t *img3 = lv_img_create(contMid, NULL);
    lv_img_set_src(img3, &lv_image_gas);
    lv_img_set_zoom(img3, 110);

    lv_obj_set_pos(img3, 0, 2);

    lv_obj_t *labelTime;
    labelTime = lv_label_create(contMid, NULL);
    lv_obj_add_style(labelTime, LV_LABEL_PART_MAIN, &style_font_credit);
    lv_label_set_text(labelTime, "6:22 PM");
    //lv_obj_align(labelTime, labelTmpTargetLabel, LV_ALIGN_CENTER, 50, 55);
    lv_obj_set_pos(labelTime, 80, 160);

    lv_obj_t *contRight = lv_cont_create(parent, NULL);
    lv_cont_set_layout(contRight, LV_LAYOUT_COLUMN_RIGHT);
    lv_cont_set_fit2(contRight, LV_FIT_NONE, LV_FIT_TIGHT);
    lv_obj_add_style(contRight, LV_CONT_PART_MAIN, &style_transcontL);
    //lv_obj_set_height_fit(contRight, GR);
    lv_obj_set_width_fit(contRight, grid_w);
    //lv_obj_add_style(contRight, LV_CONT_PART_MAIN, &style_transcontR);

    lv_obj_t *btnUp = lv_btn_create(contRight, NULL);
    lv_obj_set_size(btnUp, 85, 85);
    lv_btn_set_checkable(btnUp, true);

    lv_obj_add_style(btnUp, LV_BTN_PART_MAIN, &style_btn_1);
    lv_obj_t *labelUp = lv_label_create(btnUp, NULL);
    lv_label_set_text(labelUp, LV_SYMBOL_UP);

    lv_obj_t *btnDown = lv_btn_create(contRight, NULL);
    lv_obj_set_size(btnDown, 85, 85);
    lv_btn_set_checkable(btnDown, true);
    lv_obj_add_style(btnDown, LV_BTN_PART_MAIN, &style_btn_1);
    lv_obj_t *labelDown = lv_label_create(btnDown, NULL);
    lv_label_set_text(labelDown, LV_SYMBOL_DOWN);
}

static void visuals_create(lv_obj_t *parent)
{
    lv_page_set_scrl_layout(parent, LV_LAYOUT_PRETTY_TOP);

    lv_disp_size_t disp_size = lv_disp_get_size_category(NULL);

    lv_coord_t grid_h_chart = lv_page_get_height_grid(parent, 1, 1);
    lv_coord_t grid_w_chart = lv_page_get_width_grid(parent, disp_size <= LV_DISP_SIZE_LARGE ? 1 : 2, 1);

    lv_obj_t *chart = lv_chart_create(parent, NULL);
    lv_obj_add_style(chart, LV_CHART_PART_BG, &style_box);
    if (disp_size <= LV_DISP_SIZE_SMALL)
    {
        lv_obj_set_style_local_text_font(chart, LV_CHART_PART_SERIES_BG, LV_STATE_DEFAULT, lv_theme_get_font_small());
    }

    lv_obj_set_drag_parent(chart, true);
    lv_obj_set_style_local_value_str(chart, LV_CONT_PART_MAIN, LV_STATE_DEFAULT, "Line chart");
    lv_obj_set_width_margin(chart, grid_w_chart);
    lv_obj_set_height_margin(chart, grid_h_chart);
    lv_chart_set_div_line_count(chart, 3, 0);
    lv_chart_set_point_count(chart, 8);
    lv_chart_set_type(chart, LV_CHART_TYPE_LINE);
    if (disp_size > LV_DISP_SIZE_SMALL)
    {
        lv_obj_set_style_local_pad_left(chart, LV_CHART_PART_BG, LV_STATE_DEFAULT, 4 * (LV_DPI / 10));
        lv_obj_set_style_local_pad_bottom(chart, LV_CHART_PART_BG, LV_STATE_DEFAULT, 3 * (LV_DPI / 10));
        lv_obj_set_style_local_pad_right(chart, LV_CHART_PART_BG, LV_STATE_DEFAULT, 2 * (LV_DPI / 10));
        lv_obj_set_style_local_pad_top(chart, LV_CHART_PART_BG, LV_STATE_DEFAULT, 2 * (LV_DPI / 10));
        lv_chart_set_y_tick_length(chart, 0, 0);
        lv_chart_set_x_tick_length(chart, 0, 0);
        lv_chart_set_y_tick_texts(chart, "600\n500\n400\n300\n200", 0, LV_CHART_AXIS_DRAW_LAST_TICK);
        lv_chart_set_x_tick_texts(chart, "Jan\nFeb\nMar\nApr\nMay\nJun\nJul\nAug", 0, LV_CHART_AXIS_DRAW_LAST_TICK);
    }
    lv_chart_series_t *s1 = lv_chart_add_series(chart, LV_THEME_DEFAULT_COLOR_PRIMARY);
    lv_chart_series_t *s2 = lv_chart_add_series(chart, LV_THEME_DEFAULT_COLOR_SECONDARY);

    lv_chart_set_next(chart, s1, 10);
    lv_chart_set_next(chart, s1, 90);
    lv_chart_set_next(chart, s1, 30);
    lv_chart_set_next(chart, s1, 60);
    lv_chart_set_next(chart, s1, 10);
    lv_chart_set_next(chart, s1, 90);
    lv_chart_set_next(chart, s1, 30);
    lv_chart_set_next(chart, s1, 60);
    lv_chart_set_next(chart, s1, 10);
    lv_chart_set_next(chart, s1, 90);

    lv_chart_set_next(chart, s2, 32);
    lv_chart_set_next(chart, s2, 66);
    lv_chart_set_next(chart, s2, 5);
    lv_chart_set_next(chart, s2, 47);
    lv_chart_set_next(chart, s2, 32);
    lv_chart_set_next(chart, s2, 32);
    lv_chart_set_next(chart, s2, 66);
    lv_chart_set_next(chart, s2, 5);
    lv_chart_set_next(chart, s2, 47);
    lv_chart_set_next(chart, s2, 66);
    lv_chart_set_next(chart, s2, 5);
    lv_chart_set_next(chart, s2, 47);

    lv_obj_t *chart2 = lv_chart_create(parent, chart);
    lv_chart_set_type(chart2, LV_CHART_TYPE_COLUMN);
    lv_obj_set_style_local_value_str(chart2, LV_CONT_PART_MAIN, LV_STATE_DEFAULT, "Column chart");

    s1 = lv_chart_add_series(chart2, LV_THEME_DEFAULT_COLOR_PRIMARY);
    s2 = lv_chart_add_series(chart2, LV_THEME_DEFAULT_COLOR_SECONDARY);

    lv_chart_set_next(chart2, s1, 10);
    lv_chart_set_next(chart2, s1, 90);
    lv_chart_set_next(chart2, s1, 30);
    lv_chart_set_next(chart2, s1, 60);
    lv_chart_set_next(chart2, s1, 10);
    lv_chart_set_next(chart2, s1, 90);
    lv_chart_set_next(chart2, s1, 30);
    lv_chart_set_next(chart2, s1, 60);
    lv_chart_set_next(chart2, s1, 10);
    lv_chart_set_next(chart2, s1, 90);

    lv_chart_set_next(chart2, s2, 32);
    lv_chart_set_next(chart2, s2, 66);
    lv_chart_set_next(chart2, s2, 5);
    lv_chart_set_next(chart2, s2, 47);
    lv_chart_set_next(chart2, s2, 32);
    lv_chart_set_next(chart2, s2, 32);
    lv_chart_set_next(chart2, s2, 66);
    lv_chart_set_next(chart2, s2, 5);
    lv_chart_set_next(chart2, s2, 47);
    lv_chart_set_next(chart2, s2, 66);
    lv_chart_set_next(chart2, s2, 5);
    lv_chart_set_next(chart2, s2, 47);

    lv_coord_t grid_w_meter;
    if (disp_size <= LV_DISP_SIZE_SMALL)
        grid_w_meter = lv_page_get_width_grid(parent, 1, 1);
    else if (disp_size <= LV_DISP_SIZE_MEDIUM)
        grid_w_meter = lv_page_get_width_grid(parent, 2, 1);
    else
        grid_w_meter = lv_page_get_width_grid(parent, 3, 1);

    lv_coord_t meter_h = lv_page_get_height_fit(parent);
    lv_coord_t meter_size = LV_MATH_MIN(grid_w_meter, meter_h);

    lv_obj_t *lmeter = lv_linemeter_create(parent, NULL);
    lv_obj_set_drag_parent(lmeter, true);
    lv_linemeter_set_value(lmeter, 50);
    lv_obj_set_size(lmeter, meter_size, meter_size);
    lv_obj_add_style(lmeter, LV_LINEMETER_PART_MAIN, &style_box);
    lv_obj_set_style_local_value_str(lmeter, LV_LINEMETER_PART_MAIN, LV_STATE_DEFAULT, "Line meter");

    lv_obj_t *label = lv_label_create(lmeter, NULL);
    lv_obj_align(label, lmeter, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_local_text_font(label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_theme_get_font_title());

    lv_anim_t a;
    lv_anim_init(&a);
    lv_anim_set_var(&a, lmeter);
    lv_anim_set_exec_cb(&a, (lv_anim_exec_xcb_t)linemeter_anim);
    lv_anim_set_values(&a, 0, 100);
    lv_anim_set_time(&a, 4000);
    lv_anim_set_playback_time(&a, 1000);
    lv_anim_set_repeat_count(&a, LV_ANIM_REPEAT_INFINITE);
    lv_anim_start(&a);

    lv_obj_t *gauge = lv_gauge_create(parent, NULL);
    lv_obj_set_drag_parent(gauge, true);
    lv_obj_set_size(gauge, meter_size, meter_size);
    lv_obj_add_style(gauge, LV_GAUGE_PART_MAIN, &style_box);
    lv_obj_set_style_local_value_str(gauge, LV_GAUGE_PART_MAIN, LV_STATE_DEFAULT, "Gauge");

    label = lv_label_create(gauge, label);
    lv_obj_align(label, gauge, LV_ALIGN_CENTER, 0, grid_w_meter / 3);

    lv_anim_set_var(&a, gauge);
    lv_anim_set_exec_cb(&a, (lv_anim_exec_xcb_t)gauge_anim);
    lv_anim_start(&a);

    lv_obj_t *arc = lv_arc_create(parent, NULL);
    lv_obj_set_drag_parent(arc, true);
    lv_arc_set_bg_angles(arc, 0, 360);
    lv_arc_set_rotation(arc, 270);
    lv_arc_set_angles(arc, 0, 0);
    lv_obj_set_size(arc, meter_size, meter_size);
    lv_obj_add_style(arc, LV_ARC_PART_BG, &style_box);
    lv_obj_set_style_local_value_str(arc, LV_ARC_PART_BG, LV_STATE_DEFAULT, "Arc");

    label = lv_label_create(arc, label);
    lv_obj_align(label, arc, LV_ALIGN_CENTER, 0, 0);

    lv_anim_set_var(&a, arc);
    lv_anim_set_exec_cb(&a, (lv_anim_exec_xcb_t)arc_anim);
    lv_anim_set_values(&a, 0, 360);
    lv_anim_set_repeat_count(&a, LV_ANIM_REPEAT_INFINITE);
    lv_anim_start(&a);

    /*Create a bar and use the backgrounds value style property to display the current value*/
    lv_obj_t *bar_h = lv_cont_create(parent, NULL);
    lv_cont_set_fit2(bar_h, LV_FIT_NONE, LV_FIT_TIGHT);
    lv_obj_add_style(bar_h, LV_CONT_PART_MAIN, &style_box);
    lv_obj_set_style_local_value_str(bar_h, LV_CONT_PART_MAIN, LV_STATE_DEFAULT, "Bar");

    if (disp_size <= LV_DISP_SIZE_SMALL)
        lv_obj_set_width(bar_h, lv_page_get_width_grid(parent, 1, 1));
    else if (disp_size <= LV_DISP_SIZE_MEDIUM)
        lv_obj_set_width(bar_h, lv_page_get_width_grid(parent, 2, 1));
    else
        lv_obj_set_width(bar_h, lv_page_get_width_grid(parent, 3, 2));

    lv_obj_t *bar = lv_bar_create(bar_h, NULL);
    lv_obj_set_width(bar, lv_obj_get_width_fit(bar_h));
    lv_obj_set_style_local_value_font(bar, LV_BAR_PART_BG, LV_STATE_DEFAULT, lv_theme_get_font_small());
    lv_obj_set_style_local_value_align(bar, LV_BAR_PART_BG, LV_STATE_DEFAULT, LV_ALIGN_OUT_BOTTOM_MID);
    lv_obj_set_style_local_value_ofs_y(bar, LV_BAR_PART_BG, LV_STATE_DEFAULT, LV_DPI / 20);
    lv_obj_set_style_local_margin_bottom(bar, LV_BAR_PART_BG, LV_STATE_DEFAULT, LV_DPI / 7);
    lv_obj_align(bar, NULL, LV_ALIGN_CENTER, 0, 0);

    lv_obj_t *led_h = lv_cont_create(parent, NULL);
    lv_cont_set_layout(led_h, LV_LAYOUT_PRETTY_MID);
    if (disp_size <= LV_DISP_SIZE_SMALL)
        lv_obj_set_width(led_h, lv_page_get_width_grid(parent, 1, 1));
    else if (disp_size <= LV_DISP_SIZE_MEDIUM)
        lv_obj_set_width(led_h, lv_page_get_width_grid(parent, 2, 1));
    else
        lv_obj_set_width(led_h, lv_page_get_width_grid(parent, 3, 1));

    lv_obj_set_height(led_h, lv_obj_get_height(bar_h));
    lv_obj_add_style(led_h, LV_CONT_PART_MAIN, &style_box);
    lv_obj_set_drag_parent(led_h, true);
    lv_obj_set_style_local_value_str(led_h, LV_CONT_PART_MAIN, LV_STATE_DEFAULT, "LEDs");

    lv_obj_t *led = lv_led_create(led_h, NULL);
    lv_coord_t led_size = lv_obj_get_height_fit(led_h);
    lv_obj_set_size(led, led_size, led_size);
    lv_led_off(led);

    led = lv_led_create(led_h, led);
    lv_led_set_bright(led, (LV_LED_BRIGHT_MAX - LV_LED_BRIGHT_MIN) / 2 + LV_LED_BRIGHT_MIN);

    led = lv_led_create(led_h, led);
    lv_led_on(led);

    if (disp_size == LV_DISP_SIZE_MEDIUM)
    {
        lv_obj_add_protect(led_h, LV_PROTECT_POS);
        lv_obj_align(led_h, bar_h, LV_ALIGN_OUT_BOTTOM_MID, 0, lv_obj_get_style_margin_top(led_h, LV_OBJ_PART_MAIN) + lv_obj_get_style_pad_inner(parent, LV_PAGE_PART_SCROLLABLE));
    }

    lv_task_create(bar_anim, 100, LV_TASK_PRIO_LOW, bar);
}

static void selectors_create(lv_obj_t *parent)
{
    lv_page_set_scrl_layout(parent, LV_LAYOUT_PRETTY_MID);

    lv_disp_size_t disp_size = lv_disp_get_size_category(NULL);
    lv_coord_t grid_h = lv_page_get_height_grid(parent, 1, 1);
    lv_coord_t grid_w;
    if (disp_size <= LV_DISP_SIZE_SMALL)
        grid_w = lv_page_get_width_grid(parent, 1, 1);
    else
        grid_w = lv_page_get_width_grid(parent, 2, 1);

    lv_obj_t *cal = lv_calendar_create(parent, NULL);
    lv_obj_set_drag_parent(cal, true);
    if (disp_size > LV_DISP_SIZE_MEDIUM)
    {
        lv_obj_set_size(cal, LV_MATH_MIN(grid_h, grid_w), LV_MATH_MIN(grid_h, grid_w));
    }
    else
    {
        lv_obj_set_size(cal, grid_w, grid_w);
        if (disp_size <= LV_DISP_SIZE_SMALL)
        {
            lv_obj_set_style_local_text_font(cal, LV_CALENDAR_PART_BG, LV_STATE_DEFAULT, lv_theme_get_font_small());
        }
    }

    //static lv_calendar_date_t hl[] = {
    //    {.year = 2020, .month = 1, .day = 5},
    //    {.year = 2020, .month = 1, .day = 9},
    //};

    lv_obj_t *btn;
    lv_obj_t *h = lv_cont_create(parent, NULL);
    lv_obj_set_drag_parent(h, true);
    if (disp_size <= LV_DISP_SIZE_SMALL)
    {
        lv_cont_set_fit2(h, LV_FIT_NONE, LV_FIT_TIGHT);
        lv_obj_set_width(h, lv_page_get_width_fit(parent));
        lv_cont_set_layout(h, LV_LAYOUT_COLUMN_MID);
    }
    else if (disp_size <= LV_DISP_SIZE_MEDIUM)
    {
        lv_obj_set_size(h, lv_obj_get_width(cal), lv_obj_get_height(cal));
        lv_cont_set_layout(h, LV_LAYOUT_PRETTY_TOP);
    }
    else
    {

        lv_obj_set_click(h, false);
        lv_obj_set_style_local_bg_opa(h, LV_CONT_PART_MAIN, LV_STATE_DEFAULT, LV_OPA_TRANSP);
        lv_obj_set_style_local_border_opa(h, LV_CONT_PART_MAIN, LV_STATE_DEFAULT, LV_OPA_TRANSP);
        lv_obj_set_style_local_pad_left(h, LV_CONT_PART_MAIN, LV_STATE_DEFAULT, 0);
        lv_obj_set_style_local_pad_right(h, LV_CONT_PART_MAIN, LV_STATE_DEFAULT, 0);
        lv_obj_set_style_local_pad_top(h, LV_CONT_PART_MAIN, LV_STATE_DEFAULT, 0);
        lv_obj_set_size(h, LV_MATH_MIN(grid_h, grid_w), LV_MATH_MIN(grid_h, grid_w));
        lv_cont_set_layout(h, LV_LAYOUT_PRETTY_TOP);
    }

    lv_obj_t *roller = lv_roller_create(h, NULL);
    lv_obj_add_style(roller, LV_CONT_PART_MAIN, &style_box);
    lv_obj_set_style_local_value_str(roller, LV_CONT_PART_MAIN, LV_STATE_DEFAULT, "Roller");
    lv_roller_set_auto_fit(roller, false);
    lv_roller_set_align(roller, LV_LABEL_ALIGN_CENTER);
    lv_roller_set_visible_row_count(roller, 4);
    lv_obj_set_width(roller, lv_obj_get_width_grid(h, disp_size <= LV_DISP_SIZE_SMALL ? 1 : 2, 1));

    lv_obj_t *dd = lv_dropdown_create(h, NULL);
    lv_obj_add_style(dd, LV_CONT_PART_MAIN, &style_box);
    lv_obj_set_style_local_value_str(dd, LV_CONT_PART_MAIN, LV_STATE_DEFAULT, "Dropdown");
    lv_obj_set_width(dd, lv_obj_get_width_grid(h, disp_size <= LV_DISP_SIZE_SMALL ? 1 : 2, 1));
    lv_dropdown_set_options(dd, "Alpha\nBravo\nCharlie\nDelta\nEcho\nFoxtrot\nGolf\nHotel\nIndia\nJuliette\nKilo\nLima\nMike\nNovember\n"
                                "Oscar\nPapa\nQuebec\nRomeo\nSierra\nTango\nUniform\nVictor\nWhiskey\nXray\nYankee\nZulu");

    lv_obj_t *list = lv_list_create(parent, NULL);
    lv_list_set_scroll_propagation(list, true);
    lv_obj_set_size(list, grid_w, grid_h);

    const char *txts[] = {LV_SYMBOL_SAVE, "Save", LV_SYMBOL_CUT, "Cut", LV_SYMBOL_COPY, "Copy",
                          LV_SYMBOL_OK, "This is a substantially long text to scroll on the list", LV_SYMBOL_EDIT, "Edit", LV_SYMBOL_WIFI, "Wifi",
                          LV_SYMBOL_BLUETOOTH, "Bluetooth", LV_SYMBOL_GPS, "GPS", LV_SYMBOL_USB, "USB",
                          LV_SYMBOL_SD_CARD, "SD card", LV_SYMBOL_CLOSE, "Close", NULL};

    uint32_t i;
    for (i = 0; txts[i] != NULL; i += 2)
    {
        btn = lv_list_add_btn(list, txts[i], txts[i + 1]);
        lv_btn_set_checkable(btn, true);

        /*Make a button disabled*/
        if (i == 4)
        {
            lv_btn_set_state(btn, LV_BTN_STATE_DISABLED);
        }
    }

   // lv_calendar_set_highlighted_dates(cal, hl, 2);

    static lv_style_t style_cell4;
    lv_style_init(&style_cell4);
    lv_style_set_bg_opa(&style_cell4, LV_STATE_DEFAULT, LV_OPA_50);
    lv_style_set_bg_color(&style_cell4, LV_STATE_DEFAULT, LV_COLOR_GRAY);

    lv_obj_t *page = lv_page_create(parent, NULL);
    lv_obj_set_size(page, grid_w, grid_h);
    lv_coord_t table_w_max = lv_page_get_width_fit(page);
    lv_page_set_scroll_propagation(page, true);

    lv_obj_t *table1 = lv_table_create(page, NULL);
    lv_obj_add_style(table1, LV_TABLE_PART_CELL4, &style_cell4);
    /*Clean the background style of the table because it is placed on a page*/
    lv_obj_clean_style_list(table1, LV_TABLE_PART_BG);
    lv_obj_set_drag_parent(table1, true);
    lv_obj_set_event_cb(table1, table_event_cb);
    lv_table_set_col_cnt(table1, disp_size > LV_DISP_SIZE_SMALL ? 3 : 2);
    if (disp_size > LV_DISP_SIZE_SMALL)
    {
        lv_table_set_col_width(table1, 0, LV_MATH_MAX(30, 1 * table_w_max / 5));
        lv_table_set_col_width(table1, 1, LV_MATH_MAX(60, 2 * table_w_max / 5));
        lv_table_set_col_width(table1, 2, LV_MATH_MAX(60, 2 * table_w_max / 5));
    }
    else
    {
        lv_table_set_col_width(table1, 0, LV_MATH_MAX(30, 1 * table_w_max / 4 - 1));
        lv_table_set_col_width(table1, 1, LV_MATH_MAX(60, 3 * table_w_max / 4 - 1));
    }

    lv_table_set_cell_value(table1, 0, 0, "#");
    lv_table_set_cell_value(table1, 1, 0, "1");
    lv_table_set_cell_value(table1, 2, 0, "2");
    lv_table_set_cell_value(table1, 3, 0, "3");
    lv_table_set_cell_value(table1, 4, 0, "4");
    lv_table_set_cell_value(table1, 5, 0, "5");
    lv_table_set_cell_value(table1, 6, 0, "6");

    lv_table_set_cell_value(table1, 0, 1, "NAME");
    lv_table_set_cell_value(table1, 1, 1, "Mark");
    lv_table_set_cell_value(table1, 2, 1, "Jacob");
    lv_table_set_cell_value(table1, 3, 1, "John");
    lv_table_set_cell_value(table1, 4, 1, "Emily");
    lv_table_set_cell_value(table1, 5, 1, "Ivan");
    lv_table_set_cell_value(table1, 6, 1, "George");

    if (disp_size > LV_DISP_SIZE_SMALL)
    {
        lv_table_set_cell_value(table1, 0, 2, "CITY");
        lv_table_set_cell_value(table1, 1, 2, "Moscow");
        lv_table_set_cell_value(table1, 2, 2, "New York");
        lv_table_set_cell_value(table1, 3, 2, "Oslo");
        lv_table_set_cell_value(table1, 4, 2, "London");
        lv_table_set_cell_value(table1, 5, 2, "Texas");
        lv_table_set_cell_value(table1, 6, 2, "Athen");
    }
}

 void start()
{

   // tv = lv_tabview_create(lv_scr_act(), NULL);

    //createUI(); 
}
