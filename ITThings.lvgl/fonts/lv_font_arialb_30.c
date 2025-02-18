#include "lvgl.h"

/*******************************************************************************
 * Size: 30 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/

#ifndef LV_FONT_ARIALB_30
#define LV_FONT_ARIALB_30 1
#endif

#if LV_FONT_ARIALB_30

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t gylph_bitmap[] = {
    /* U+2A "*" */
    0x0, 0x7, 0xf8, 0x0, 0x0, 0x0, 0x7f, 0x80,
    0x0, 0xc, 0x3, 0xf0, 0x0, 0x1, 0xff, 0x7f,
    0x1f, 0xf0, 0x3f, 0xff, 0xff, 0xff, 0x80, 0x7,
    0xff, 0xfc, 0x0, 0x0, 0x3f, 0xff, 0x0, 0x0,
    0x1f, 0xf3, 0xfe, 0x0, 0x7, 0xfc, 0xf, 0xf8,
    0x0, 0xf, 0x0, 0x3c, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0,

    /* U+2B "+" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xff, 0xe0, 0x0, 0x0, 0x0, 0x0, 0x1f,
    0xfc, 0x0, 0x0, 0x0, 0x0, 0x3, 0xff, 0x80,
    0x0, 0x0, 0x0, 0x0, 0x7f, 0xf0, 0x0, 0x0,
    0x0, 0x0, 0xf, 0xfe, 0x0, 0x0, 0x3, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xe0, 0x7f, 0xff, 0xff,
    0xff, 0xff, 0xfc, 0xf, 0xff, 0xff, 0xff, 0xff,
    0xff, 0x81, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0,
    0x0, 0x0, 0x1f, 0xfc, 0x0, 0x0, 0x0, 0x0,
    0x3, 0xff, 0x80, 0x0, 0x0, 0x0, 0x0, 0x7f,
    0xf0, 0x0, 0x0, 0x0, 0x0, 0xf, 0xfe, 0x0,
    0x0, 0x0, 0x0, 0x1, 0xff, 0xc0, 0x0, 0x0,
    0x0, 0x0, 0x3f, 0xf8, 0x0, 0x0,

    /* U+2C "," */
    0x0, 0x0, 0x7, 0xff, 0xc1, 0xff, 0xf0, 0x7f,
    0xf8, 0x1f, 0xfe, 0x0, 0x1f, 0x80, 0xf, 0xe0,
    0xf, 0xe0, 0x1f, 0xe0, 0x1, 0x80, 0x0,

    /* U+2D "-" */
    0x0, 0x0, 0x0, 0x0, 0xff, 0xff, 0xff, 0x3,
    0xff, 0xff, 0xfc, 0xf, 0xff, 0xff, 0xf0, 0x3f,
    0xff, 0xff, 0xc0,

    /* U+2E "." */
    0x0, 0x0, 0x7, 0xff, 0xc1, 0xff, 0xf0, 0x7f,
    0xfc, 0x1f, 0xff, 0x0,

    /* U+2F "/" */
    0x0, 0x0, 0x3f, 0xf0, 0x0, 0x0, 0xff, 0x80,
    0x0, 0x7, 0xfc, 0x0, 0x0, 0x3f, 0xf0, 0x0,
    0x0, 0xff, 0x80, 0x0, 0x7, 0xfc, 0x0, 0x0,
    0x3f, 0xe0, 0x0, 0x1, 0xff, 0x80, 0x0, 0x7,
    0xfc, 0x0, 0x0, 0x3f, 0xe0, 0x0, 0x1, 0xff,
    0x0, 0x0, 0xf, 0xfc, 0x0, 0x0, 0x3f, 0xe0,
    0x0, 0x1, 0xff, 0x0, 0x0, 0xf, 0xf8, 0x0,
    0x0, 0x3f, 0xe0, 0x0, 0x1, 0xff, 0x0, 0x0,
    0xf, 0xf8, 0x0, 0x0, 0x7f, 0xe0, 0x0, 0x1,
    0xff, 0x0, 0x0, 0xf, 0xf8, 0x0, 0x0, 0x7f,
    0xc0, 0x0, 0x0,

    /* U+30 "0" */
    0x0, 0x0, 0x7f, 0xff, 0x0, 0x0, 0x0, 0xf,
    0xff, 0xff, 0xf8, 0x0, 0x0, 0x3f, 0xff, 0xff,
    0xff, 0x0, 0x0, 0xff, 0xff, 0x3f, 0xff, 0xc0,
    0x1, 0xff, 0xe0, 0x3, 0xff, 0xe0, 0x3, 0xff,
    0xc0, 0x1, 0xff, 0xf0, 0x7, 0xff, 0x80, 0x0,
    0xff, 0xf0, 0xf, 0xff, 0x80, 0x0, 0xff, 0xf8,
    0xf, 0xff, 0x80, 0x0, 0x7f, 0xf8, 0xf, 0xff,
    0x80, 0x0, 0x7f, 0xf8, 0xf, 0xff, 0x80, 0x0,
    0x7f, 0xfc, 0xf, 0xff, 0x80, 0x0, 0x7f, 0xfc,
    0xf, 0xff, 0x80, 0x0, 0x7f, 0xf8, 0xf, 0xff,
    0x80, 0x0, 0x7f, 0xf8, 0xf, 0xff, 0x80, 0x0,
    0xff, 0xf8, 0x7, 0xff, 0x80, 0x0, 0xff, 0xf0,
    0x3, 0xff, 0xc0, 0x1, 0xff, 0xf0, 0x3, 0xff,
    0xe0, 0x3, 0xff, 0xe0, 0x0, 0xff, 0xff, 0x3f,
    0xff, 0xc0, 0x0, 0x7f, 0xff, 0xff, 0xff, 0x0,
    0x0, 0xf, 0xff, 0xff, 0xf8, 0x0, 0x0, 0x0,
    0x7f, 0xff, 0x0, 0x0,

    /* U+31 "1" */
    0x0, 0x0, 0x1f, 0xf8, 0x0, 0x0, 0x3f, 0xfc,
    0x0, 0x0, 0x7f, 0xfe, 0x0, 0x1, 0xff, 0xff,
    0x0, 0x1f, 0xff, 0xff, 0x81, 0xff, 0xff, 0xff,
    0xc1, 0xff, 0xff, 0xff, 0xe0, 0xff, 0xe0, 0xff,
    0xf0, 0x7e, 0x0, 0x7f, 0xf8, 0x0, 0x0, 0x3f,
    0xfc, 0x0, 0x0, 0x1f, 0xfe, 0x0, 0x0, 0xf,
    0xff, 0x0, 0x0, 0x7, 0xff, 0x80, 0x0, 0x3,
    0xff, 0xc0, 0x0, 0x1, 0xff, 0xe0, 0x0, 0x0,
    0xff, 0xf0, 0x0, 0x0, 0x7f, 0xf8, 0x0, 0x0,
    0x3f, 0xfc, 0x0, 0x0, 0x1f, 0xfe, 0x0, 0x0,
    0xf, 0xff, 0x0, 0x0, 0x7, 0xff, 0x80, 0x0,
    0x3, 0xff, 0xc0,

    /* U+32 "2" */
    0x0, 0x0, 0xff, 0xff, 0xc0, 0x0, 0x0, 0x1f,
    0xff, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xff, 0xff,
    0xff, 0xc0, 0x3, 0xff, 0xff, 0x3f, 0xff, 0xf0,
    0x7, 0xff, 0xc0, 0x1, 0xff, 0xf8, 0xf, 0xff,
    0x80, 0x0, 0x7f, 0xf8, 0x7, 0xff, 0x0, 0x0,
    0x7f, 0xf8, 0x0, 0x0, 0x0, 0x0, 0x7f, 0xf8,
    0x0, 0x0, 0x0, 0x1, 0xff, 0xf0, 0x0, 0x0,
    0x0, 0x7, 0xff, 0xe0, 0x0, 0x0, 0x0, 0x1f,
    0xff, 0xc0, 0x0, 0x0, 0x0, 0xff, 0xff, 0x0,
    0x0, 0x0, 0xf, 0xff, 0xf8, 0x0, 0x0, 0x0,
    0x7f, 0xff, 0xc0, 0x0, 0x0, 0x3, 0xff, 0xfe,
    0x0, 0x0, 0x0, 0xf, 0xff, 0xf0, 0x0, 0x0,
    0x0, 0x7f, 0xff, 0x80, 0x0, 0x0, 0x1, 0xff,
    0xfc, 0x0, 0x0, 0x0, 0x3, 0xff, 0xff, 0xff,
    0xff, 0xf8, 0xf, 0xff, 0xff, 0xff, 0xff, 0xfc,
    0x1f, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x1f, 0xff,
    0xff, 0xff, 0xff, 0xfc,

    /* U+33 "3" */
    0x0, 0x0, 0xff, 0xff, 0x0, 0x0, 0x0, 0x1f,
    0xff, 0xff, 0xf8, 0x0, 0x0, 0xff, 0xff, 0xff,
    0xff, 0x0, 0x1, 0xff, 0xfc, 0x7f, 0xff, 0xc0,
    0x7, 0xff, 0xc0, 0x3, 0xff, 0xe0, 0x7, 0xff,
    0x0, 0x1, 0xff, 0xe0, 0x0, 0x0, 0x0, 0x1,
    0xff, 0xe0, 0x0, 0x0, 0x0, 0x3, 0xff, 0xc0,
    0x0, 0x0, 0x0, 0x3f, 0xff, 0x80, 0x0, 0x0,
    0xf, 0xff, 0xfc, 0x0, 0x0, 0x0, 0xf, 0xff,
    0xf0, 0x0, 0x0, 0x0, 0xf, 0xff, 0xff, 0x80,
    0x0, 0x0, 0x0, 0x7, 0xff, 0xf0, 0x0, 0x0,
    0x0, 0x0, 0xff, 0xf8, 0x0, 0x0, 0x0, 0x0,
    0x7f, 0xfc, 0x0, 0x0, 0x0, 0x0, 0x7f, 0xfc,
    0xf, 0xff, 0x0, 0x0, 0x7f, 0xfc, 0xf, 0xff,
    0xc0, 0x1, 0xff, 0xf8, 0x3, 0xff, 0xfe, 0x7f,
    0xff, 0xf0, 0x0, 0xff, 0xff, 0xff, 0xff, 0x80,
    0x0, 0x1f, 0xff, 0xff, 0xfc, 0x0, 0x0, 0x0,
    0xff, 0xff, 0x80, 0x0,

    /* U+34 "4" */
    0x0, 0x0, 0x0, 0x7, 0xff, 0x0, 0x0, 0x0,
    0x0, 0x3, 0xff, 0xe0, 0x0, 0x0, 0x0, 0x1,
    0xff, 0xfc, 0x0, 0x0, 0x0, 0x0, 0xff, 0xff,
    0x80, 0x0, 0x0, 0x0, 0x7f, 0xff, 0xf0, 0x0,
    0x0, 0x0, 0x3f, 0xff, 0xfe, 0x0, 0x0, 0x0,
    0x1f, 0xff, 0xff, 0xc0, 0x0, 0x0, 0xf, 0xfe,
    0x7f, 0xf8, 0x0, 0x0, 0x7, 0xff, 0xf, 0xff,
    0x0, 0x0, 0x3, 0xff, 0x81, 0xff, 0xe0, 0x0,
    0x1, 0xff, 0xc0, 0x3f, 0xfc, 0x0, 0x0, 0xff,
    0xe0, 0x7, 0xff, 0x80, 0x0, 0x7f, 0xf0, 0x0,
    0xff, 0xf0, 0x0, 0x3f, 0xf8, 0x0, 0x1f, 0xfe,
    0x0, 0xf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc1,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x3f, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x3, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xc0, 0x0, 0x0, 0x0, 0x3f, 0xfc,
    0x0, 0x0, 0x0, 0x0, 0x7, 0xff, 0x80, 0x0,
    0x0, 0x0, 0x0, 0xff, 0xf0, 0x0, 0x0, 0x0,
    0x0, 0x1f, 0xfe, 0x0, 0x0,

    /* U+35 "5" */
    0x0, 0x7f, 0xff, 0xff, 0xff, 0xc0, 0x0, 0xff,
    0xff, 0xff, 0xff, 0xc0, 0x1, 0xff, 0xff, 0xff,
    0xff, 0xc0, 0x1, 0xff, 0xff, 0xff, 0xff, 0x80,
    0x3, 0xff, 0xc0, 0x0, 0x0, 0x0, 0x3, 0xff,
    0x80, 0x0, 0x0, 0x0, 0x7, 0xff, 0x80, 0x0,
    0x0, 0x0, 0x7, 0xff, 0xff, 0xff, 0x0, 0x0,
    0xf, 0xff, 0xff, 0xff, 0xf8, 0x0, 0xf, 0xff,
    0xff, 0xff, 0xff, 0x0, 0x1f, 0xff, 0xe0, 0x7f,
    0xff, 0xc0, 0xf, 0xfc, 0x0, 0x7, 0xff, 0xe0,
    0x0, 0x0, 0x0, 0x1, 0xff, 0xf0, 0x0, 0x0,
    0x0, 0x1, 0xff, 0xf0, 0x0, 0x0, 0x0, 0x0,
    0xff, 0xf0, 0x0, 0x0, 0x0, 0x1, 0xff, 0xf0,
    0x7f, 0xfc, 0x0, 0x1, 0xff, 0xe0, 0x3f, 0xff,
    0x0, 0x7, 0xff, 0xc0, 0x1f, 0xff, 0xf0, 0x7f,
    0xff, 0x80, 0x7, 0xff, 0xff, 0xff, 0xfe, 0x0,
    0x0, 0xff, 0xff, 0xff, 0xf0, 0x0, 0x0, 0x3,
    0xff, 0xfc, 0x0, 0x0,

    /* U+36 "6" */
    0x0, 0x0, 0x1f, 0xff, 0xe0, 0x0, 0x0, 0x3,
    0xff, 0xff, 0xff, 0x0, 0x0, 0x1f, 0xff, 0xff,
    0xff, 0xc0, 0x0, 0x7f, 0xff, 0x8f, 0xff, 0xf0,
    0x1, 0xff, 0xf0, 0x0, 0xff, 0xf8, 0x3, 0xff,
    0xe0, 0x0, 0x7f, 0xf0, 0x7, 0xff, 0xc0, 0x0,
    0x0, 0x0, 0x7, 0xff, 0x80, 0x0, 0x0, 0x0,
    0xf, 0xff, 0x87, 0xff, 0xe0, 0x0, 0xf, 0xff,
    0xff, 0xff, 0xff, 0x0, 0xf, 0xff, 0xff, 0xff,
    0xff, 0xe0, 0xf, 0xff, 0xfc, 0x1, 0xff, 0xf8,
    0xf, 0xff, 0xe0, 0x0, 0x7f, 0xfc, 0xf, 0xff,
    0xc0, 0x0, 0x3f, 0xfc, 0x7, 0xff, 0xc0, 0x0,
    0x1f, 0xfe, 0x7, 0xff, 0xc0, 0x0, 0x1f, 0xfe,
    0x3, 0xff, 0xe0, 0x0, 0x3f, 0xfc, 0x1, 0xff,
    0xf8, 0x0, 0x7f, 0xfc, 0x0, 0xff, 0xff, 0x8f,
    0xff, 0xf0, 0x0, 0x3f, 0xff, 0xff, 0xff, 0xc0,
    0x0, 0x7, 0xff, 0xff, 0xfe, 0x0, 0x0, 0x0,
    0x3f, 0xff, 0xc0, 0x0,

    /* U+37 "7" */
    0xf, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xf, 0xff,
    0xff, 0xff, 0xff, 0xfc, 0xf, 0xff, 0xff, 0xff,
    0xff, 0xfc, 0xf, 0xff, 0xff, 0xff, 0xff, 0xf8,
    0x0, 0x0, 0x0, 0x1, 0xff, 0xc0, 0x0, 0x0,
    0x0, 0xf, 0xff, 0x0, 0x0, 0x0, 0x0, 0x1f,
    0xfc, 0x0, 0x0, 0x0, 0x0, 0x7f, 0xf0, 0x0,
    0x0, 0x0, 0x1, 0xff, 0xe0, 0x0, 0x0, 0x0,
    0x3, 0xff, 0xc0, 0x0, 0x0, 0x0, 0xf, 0xff,
    0x0, 0x0, 0x0, 0x0, 0x1f, 0xfe, 0x0, 0x0,
    0x0, 0x0, 0x3f, 0xfc, 0x0, 0x0, 0x0, 0x0,
    0x7f, 0xf8, 0x0, 0x0, 0x0, 0x0, 0xff, 0xf0,
    0x0, 0x0, 0x0, 0x1, 0xff, 0xe0, 0x0, 0x0,
    0x0, 0x1, 0xff, 0xc0, 0x0, 0x0, 0x0, 0x3,
    0xff, 0xc0, 0x0, 0x0, 0x0, 0x7, 0xff, 0x80,
    0x0, 0x0, 0x0, 0x7, 0xff, 0x80, 0x0, 0x0,
    0x0, 0x7, 0xff, 0x80, 0x0, 0x0, 0x0, 0x7,
    0xff, 0x0, 0x0, 0x0,

    /* U+38 "8" */
    0x0, 0x0, 0xff, 0xff, 0x80, 0x0, 0x0, 0x1f,
    0xff, 0xff, 0xfc, 0x0, 0x0, 0xff, 0xff, 0xff,
    0xff, 0x80, 0x3, 0xff, 0xfc, 0xf, 0xff, 0xe0,
    0x3, 0xff, 0xc0, 0x1, 0xff, 0xf0, 0x7, 0xff,
    0x80, 0x0, 0xff, 0xf0, 0x3, 0xff, 0x80, 0x0,
    0xff, 0xf0, 0x1, 0xff, 0xc0, 0x1, 0xff, 0xe0,
    0x0, 0xff, 0xfc, 0x1f, 0xff, 0x80, 0x0, 0xf,
    0xff, 0xff, 0xfc, 0x0, 0x0, 0xf, 0xff, 0xff,
    0xf8, 0x0, 0x0, 0xff, 0xff, 0xff, 0xff, 0x80,
    0x3, 0xff, 0xf0, 0x3, 0xff, 0xe0, 0x7, 0xff,
    0x80, 0x0, 0xff, 0xf8, 0xf, 0xff, 0x0, 0x0,
    0x7f, 0xfc, 0xf, 0xff, 0x0, 0x0, 0x3f, 0xfc,
    0xf, 0xff, 0x80, 0x0, 0x7f, 0xfc, 0x7, 0xff,
    0xc0, 0x0, 0xff, 0xf8, 0x3, 0xff, 0xfe, 0x1f,
    0xff, 0xf0, 0x0, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0x0, 0x1f, 0xff, 0xff, 0xfe, 0x0, 0x0, 0x0,
    0xff, 0xff, 0xc0, 0x0,

    /* U+39 "9" */
    0x0, 0x1, 0xff, 0xfe, 0x0, 0x0, 0x0, 0x3f,
    0xff, 0xff, 0xf0, 0x0, 0x1, 0xff, 0xff, 0xff,
    0xfe, 0x0, 0x7, 0xff, 0xfc, 0xff, 0xff, 0x80,
    0xf, 0xff, 0x80, 0x7, 0xff, 0xe0, 0x1f, 0xff,
    0x0, 0x1, 0xff, 0xf0, 0x1f, 0xfe, 0x0, 0x0,
    0xff, 0xf8, 0x1f, 0xfe, 0x0, 0x0, 0xff, 0xf8,
    0x1f, 0xfe, 0x0, 0x0, 0xff, 0xfc, 0xf, 0xff,
    0x0, 0x1, 0xff, 0xfc, 0x7, 0xff, 0xe0, 0xf,
    0xff, 0xfc, 0x1, 0xff, 0xff, 0xff, 0xff, 0xfc,
    0x0, 0x3f, 0xff, 0xff, 0xff, 0xfc, 0x0, 0x3,
    0xff, 0xf0, 0x7f, 0xf8, 0x0, 0x0, 0x0, 0x0,
    0xff, 0xf8, 0x0, 0x0, 0x0, 0x0, 0xff, 0xf0,
    0x7, 0xff, 0x0, 0x1, 0xff, 0xf0, 0x7, 0xff,
    0xc0, 0x7, 0xff, 0xe0, 0x3, 0xff, 0xfc, 0x7f,
    0xff, 0x80, 0x1, 0xff, 0xff, 0xff, 0xfe, 0x0,
    0x0, 0x3f, 0xff, 0xff, 0xf0, 0x0, 0x0, 0x3,
    0xff, 0xfc, 0x0, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 187, .box_w = 36, .box_h = 11, .ofs_x = 0, .ofs_y = 11},
    {.bitmap_index = 50, .adv_w = 280, .box_w = 51, .box_h = 16, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 152, .adv_w = 133, .box_w = 18, .box_h = 10, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 175, .adv_w = 160, .box_w = 30, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 194, .adv_w = 133, .box_w = 18, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 206, .adv_w = 133, .box_w = 30, .box_h = 22, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 289, .adv_w = 267, .box_w = 48, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 421, .adv_w = 267, .box_w = 33, .box_h = 22, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 512, .adv_w = 267, .box_w = 48, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 644, .adv_w = 267, .box_w = 48, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 776, .adv_w = 267, .box_w = 51, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 917, .adv_w = 267, .box_w = 48, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1049, .adv_w = 267, .box_w = 48, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1181, .adv_w = 267, .box_w = 48, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1313, .adv_w = 267, .box_w = 48, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1445, .adv_w = 267, .box_w = 48, .box_h = 22, .ofs_x = 0, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 42, .range_length = 16, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

/*Store all the custom data of the font*/
static lv_font_fmt_txt_dsc_t font_dsc = {
    .glyph_bitmap = gylph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
lv_font_t lv_font_arialb_30 = {
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 27,          /*The maximum line height required by the font*/
    .base_line = 5,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_HOR,
#endif
#if LV_VERSION_CHECK(7, 4, 0)
    .underline_position = -3,
    .underline_thickness = 3,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if LV_FONT_ARIALB_30*/

