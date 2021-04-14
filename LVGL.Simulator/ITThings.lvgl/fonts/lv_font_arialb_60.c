#include "lvgl.h"

/*******************************************************************************
 * Size: 60 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/

#ifndef LV_FONT_ARIALB_60
#define LV_FONT_ARIALB_60 1
#endif

#if LV_FONT_ARIALB_60

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t gylph_bitmap[] = {
    /* U+2A "*" */
    0x0, 0x0, 0x0, 0x3f, 0xff, 0xc0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x1, 0xff, 0xfe, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xf, 0xff, 0xe0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x3f, 0xff, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0xff, 0xf8,
    0x0, 0x0, 0x0, 0x0, 0xff, 0x0, 0xf, 0xff,
    0x80, 0x0, 0xfe, 0x0, 0xf, 0xff, 0xe0, 0x3f,
    0xfc, 0x1, 0xff, 0xf8, 0x0, 0xff, 0xff, 0xfb,
    0xff, 0xe7, 0xff, 0xff, 0xe0, 0xf, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x0, 0x3,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x0, 0x0,
    0x0, 0x3, 0xff, 0xff, 0xf0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x3f, 0xff, 0xff, 0xc0, 0x0, 0x0,
    0x0, 0x0, 0xf, 0xff, 0xff, 0xff, 0xc0, 0x0,
    0x0, 0x0, 0x3, 0xff, 0xfe, 0x7f, 0xff, 0xc0,
    0x0, 0x0, 0x0, 0xff, 0xff, 0xc0, 0xff, 0xff,
    0x80, 0x0, 0x0, 0x3f, 0xff, 0xf8, 0x1, 0xff,
    0xff, 0x80, 0x0, 0x1, 0xff, 0xff, 0x0, 0x7,
    0xff, 0xfe, 0x0, 0x0, 0x1, 0xff, 0xe0, 0x0,
    0xf, 0xff, 0x0, 0x0, 0x0, 0x0, 0xfe, 0x0,
    0x0, 0x1f, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+2B "+" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xff, 0xff, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x7, 0xff, 0xff, 0xf0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3f,
    0xff, 0xff, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x1, 0xff, 0xff, 0xfc, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0xff,
    0xff, 0xe0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x7f, 0xff, 0xff, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x3, 0xff, 0xff,
    0xf8, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x1f, 0xff, 0xff, 0xc0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xff, 0xff, 0xfe,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x7, 0xff, 0xff, 0xf0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x3f, 0xff, 0xff, 0x80,
    0x0, 0x0, 0x0, 0x7, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xf9, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xcf, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xfe, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xfc, 0x7f, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xc0, 0x0, 0x0, 0x0, 0x1, 0xff, 0xff, 0xfc,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xf, 0xff, 0xff, 0xe0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x7f, 0xff, 0xff, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3,
    0xff, 0xff, 0xf8, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x1f, 0xff, 0xff, 0xc0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xff,
    0xff, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x7, 0xff, 0xff, 0xf0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3f, 0xff,
    0xff, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x1, 0xff, 0xff, 0xfc, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0xff, 0xff,
    0xe0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x7f, 0xff, 0xff, 0x0, 0x0, 0x0, 0x0,
    0x0,

    /* U+2C "," */
    0x0, 0x0, 0x0, 0x0, 0x7f, 0xff, 0xff, 0xc1,
    0xff, 0xff, 0xff, 0x7, 0xff, 0xff, 0xfc, 0x1f,
    0xff, 0xff, 0xf0, 0x7f, 0xff, 0xff, 0xc1, 0xff,
    0xff, 0xff, 0x7, 0xff, 0xff, 0xfc, 0x1f, 0xff,
    0xff, 0xf0, 0x0, 0x7, 0xff, 0xc0, 0x0, 0x1f,
    0xfe, 0x0, 0x0, 0xff, 0xf8, 0x0, 0x7, 0xff,
    0xc0, 0x0, 0xff, 0xfe, 0x0, 0x3f, 0xff, 0xe0,
    0xf, 0xff, 0xfe, 0x0, 0x1f, 0xff, 0x80, 0x0,
    0x1f, 0xe0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+2D "-" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xf9, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x3f, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x9f, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xf3, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xfe, 0x7f, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xc0,

    /* U+2E "." */
    0x0, 0x0, 0x0, 0x0, 0x3f, 0xff, 0xff, 0xe0,
    0xff, 0xff, 0xff, 0x83, 0xff, 0xff, 0xfe, 0xf,
    0xff, 0xff, 0xf8, 0x3f, 0xff, 0xff, 0xe0, 0xff,
    0xff, 0xff, 0x83, 0xff, 0xff, 0xfe, 0xf, 0xff,
    0xff, 0xf8,

    /* U+2F "/" */
    0x0, 0x0, 0x0, 0x0, 0xf, 0xff, 0xe0, 0x0,
    0x0, 0x0, 0x0, 0x1f, 0xff, 0xf8, 0x0, 0x0,
    0x0, 0x0, 0x1f, 0xff, 0xfc, 0x0, 0x0, 0x0,
    0x0, 0x1f, 0xff, 0xfc, 0x0, 0x0, 0x0, 0x0,
    0xf, 0xff, 0xfc, 0x0, 0x0, 0x0, 0x0, 0xf,
    0xff, 0xfe, 0x0, 0x0, 0x0, 0x0, 0xf, 0xff,
    0xfe, 0x0, 0x0, 0x0, 0x0, 0x7, 0xff, 0xfe,
    0x0, 0x0, 0x0, 0x0, 0x7, 0xff, 0xfe, 0x0,
    0x0, 0x0, 0x0, 0x7, 0xff, 0xff, 0x0, 0x0,
    0x0, 0x0, 0x7, 0xff, 0xff, 0x0, 0x0, 0x0,
    0x0, 0x3, 0xff, 0xff, 0x0, 0x0, 0x0, 0x0,
    0x3, 0xff, 0xff, 0x80, 0x0, 0x0, 0x0, 0x3,
    0xff, 0xff, 0x80, 0x0, 0x0, 0x0, 0x1, 0xff,
    0xff, 0x80, 0x0, 0x0, 0x0, 0x1, 0xff, 0xff,
    0x80, 0x0, 0x0, 0x0, 0x1, 0xff, 0xff, 0xc0,
    0x0, 0x0, 0x0, 0x1, 0xff, 0xff, 0xc0, 0x0,
    0x0, 0x0, 0x0, 0xff, 0xff, 0xc0, 0x0, 0x0,
    0x0, 0x0, 0xff, 0xff, 0xc0, 0x0, 0x0, 0x0,
    0x0, 0xff, 0xff, 0xe0, 0x0, 0x0, 0x0, 0x0,
    0x7f, 0xff, 0xe0, 0x0, 0x0, 0x0, 0x0, 0x7f,
    0xff, 0xe0, 0x0, 0x0, 0x0, 0x0, 0x7f, 0xff,
    0xf0, 0x0, 0x0, 0x0, 0x0, 0x7f, 0xff, 0xf0,
    0x0, 0x0, 0x0, 0x0, 0x3f, 0xff, 0xf0, 0x0,
    0x0, 0x0, 0x0, 0x3f, 0xff, 0xf0, 0x0, 0x0,
    0x0, 0x0, 0x3f, 0xff, 0xf8, 0x0, 0x0, 0x0,
    0x0, 0x1f, 0xff, 0xf8, 0x0, 0x0, 0x0, 0x0,
    0x1f, 0xff, 0xf8, 0x0, 0x0, 0x0, 0x0, 0x1f,
    0xff, 0xf8, 0x0, 0x0, 0x0, 0x0, 0x1f, 0xff,
    0xfc, 0x0, 0x0, 0x0, 0x0, 0xf, 0xff, 0xfc,
    0x0, 0x0, 0x0, 0x0, 0xf, 0xff, 0xfc, 0x0,
    0x0, 0x0, 0x0, 0xf, 0xff, 0xfe, 0x0, 0x0,
    0x0, 0x0, 0x7, 0xff, 0xfe, 0x0, 0x0, 0x0,
    0x0, 0x7, 0xff, 0xfe, 0x0, 0x0, 0x0, 0x0,
    0x7, 0xff, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x7,
    0xff, 0xff, 0x0, 0x0, 0x0, 0x0, 0x3, 0xff,
    0xff, 0x0, 0x0, 0x0, 0x0, 0x3, 0xff, 0xff,
    0x0, 0x0, 0x0, 0x0, 0x3, 0xff, 0xff, 0x80,
    0x0, 0x0, 0x0, 0x1, 0xff, 0xff, 0x80, 0x0,
    0x0, 0x0, 0x1, 0xff, 0xff, 0x80, 0x0, 0x0,
    0x0, 0x1, 0xff, 0xff, 0x80, 0x0, 0x0, 0x0,
    0x0,

    /* U+30 "0" */
    0x0, 0x0, 0x0, 0x0, 0xff, 0xff, 0xfe, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0xff, 0xff,
    0xff, 0xff, 0xf8, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x0,
    0x0, 0x0, 0x3, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xe0, 0x0, 0x0, 0x0, 0x3f, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xf8, 0x0, 0x0, 0x1,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc,
    0x0, 0x0, 0xf, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xfe, 0x0, 0x0, 0x3f, 0xff, 0xff,
    0xfc, 0x0, 0x1f, 0xff, 0xff, 0xfe, 0x0, 0x1,
    0xff, 0xff, 0xff, 0xc0, 0x0, 0x7, 0xff, 0xff,
    0xfe, 0x0, 0x7, 0xff, 0xff, 0xfe, 0x0, 0x0,
    0x3, 0xff, 0xff, 0xfe, 0x0, 0x1f, 0xff, 0xff,
    0xf8, 0x0, 0x0, 0x3, 0xff, 0xff, 0xfe, 0x0,
    0x3f, 0xff, 0xff, 0xe0, 0x0, 0x0, 0x3, 0xff,
    0xff, 0xfe, 0x0, 0xff, 0xff, 0xff, 0x80, 0x0,
    0x0, 0x3, 0xff, 0xff, 0xfe, 0x3, 0xff, 0xff,
    0xff, 0x0, 0x0, 0x0, 0x7, 0xff, 0xff, 0xfc,
    0x7, 0xff, 0xff, 0xfc, 0x0, 0x0, 0x0, 0x7,
    0xff, 0xff, 0xfc, 0xf, 0xff, 0xff, 0xf8, 0x0,
    0x0, 0x0, 0xf, 0xff, 0xff, 0xf8, 0x3f, 0xff,
    0xff, 0xf0, 0x0, 0x0, 0x0, 0x1f, 0xff, 0xff,
    0xf0, 0x7f, 0xff, 0xff, 0xe0, 0x0, 0x0, 0x0,
    0x3f, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xc0,
    0x0, 0x0, 0x0, 0x7f, 0xff, 0xff, 0xe1, 0xff,
    0xff, 0xff, 0x0, 0x0, 0x0, 0x0, 0xff, 0xff,
    0xff, 0xc3, 0xff, 0xff, 0xfe, 0x0, 0x0, 0x0,
    0x1, 0xff, 0xff, 0xff, 0x87, 0xff, 0xff, 0xfc,
    0x0, 0x0, 0x0, 0x3, 0xff, 0xff, 0xff, 0xf,
    0xff, 0xff, 0xf8, 0x0, 0x0, 0x0, 0x7, 0xff,
    0xff, 0xfe, 0x1f, 0xff, 0xff, 0xf0, 0x0, 0x0,
    0x0, 0xf, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xff,
    0xe0, 0x0, 0x0, 0x0, 0x1f, 0xff, 0xff, 0xf8,
    0x7f, 0xff, 0xff, 0xe0, 0x0, 0x0, 0x0, 0x3f,
    0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xc0, 0x0,
    0x0, 0x0, 0x7f, 0xff, 0xff, 0xe1, 0xff, 0xff,
    0xff, 0x80, 0x0, 0x0, 0x0, 0xff, 0xff, 0xff,
    0x81, 0xff, 0xff, 0xff, 0x0, 0x0, 0x0, 0x1,
    0xff, 0xff, 0xff, 0x3, 0xff, 0xff, 0xfe, 0x0,
    0x0, 0x0, 0x7, 0xff, 0xff, 0xfe, 0x3, 0xff,
    0xff, 0xfe, 0x0, 0x0, 0x0, 0xf, 0xff, 0xff,
    0xf8, 0x7, 0xff, 0xff, 0xfc, 0x0, 0x0, 0x0,
    0x3f, 0xff, 0xff, 0xe0, 0x7, 0xff, 0xff, 0xfc,
    0x0, 0x0, 0x0, 0x7f, 0xff, 0xff, 0xc0, 0x7,
    0xff, 0xff, 0xfc, 0x0, 0x0, 0x1, 0xff, 0xff,
    0xff, 0x0, 0xf, 0xff, 0xff, 0xfe, 0x0, 0x0,
    0xf, 0xff, 0xff, 0xfc, 0x0, 0x7, 0xff, 0xff,
    0xff, 0x0, 0x0, 0x7f, 0xff, 0xff, 0xf0, 0x0,
    0x7, 0xff, 0xff, 0xff, 0xf8, 0x3f, 0xff, 0xff,
    0xff, 0x80, 0x0, 0x3, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xfe, 0x0, 0x0, 0x1, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x0,
    0x0, 0x0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0x80, 0x0, 0x0, 0x0, 0x3f, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xf8, 0x0, 0x0, 0x0, 0x0,
    0x7, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x3f, 0xff, 0xff, 0xff,
    0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+31 "1" */
    0x0, 0x0, 0x0, 0x0, 0x3, 0xff, 0xff, 0xe0,
    0x0, 0x0, 0x0, 0x0, 0x7f, 0xff, 0xfe, 0x0,
    0x0, 0x0, 0x0, 0x1f, 0xff, 0xff, 0xe0, 0x0,
    0x0, 0x0, 0x7, 0xff, 0xff, 0xfe, 0x0, 0x0,
    0x0, 0x1, 0xff, 0xff, 0xff, 0xe0, 0x0, 0x0,
    0x0, 0xff, 0xff, 0xff, 0xfe, 0x0, 0x0, 0x0,
    0xff, 0xff, 0xff, 0xff, 0xe0, 0x0, 0x0, 0x7f,
    0xff, 0xff, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xe0, 0x1, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xfe, 0x7, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xe3, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xfe, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xe3, 0xff, 0xff, 0xff, 0x83, 0xff, 0xff,
    0xfe, 0x3f, 0xff, 0xff, 0x80, 0x3f, 0xff, 0xff,
    0xe3, 0xff, 0xff, 0x0, 0x3, 0xff, 0xff, 0xfe,
    0x3f, 0xfe, 0x0, 0x0, 0x3f, 0xff, 0xff, 0xe3,
    0xf0, 0x0, 0x0, 0x3, 0xff, 0xff, 0xfe, 0x0,
    0x0, 0x0, 0x0, 0x3f, 0xff, 0xff, 0xe0, 0x0,
    0x0, 0x0, 0x3, 0xff, 0xff, 0xfe, 0x0, 0x0,
    0x0, 0x0, 0x3f, 0xff, 0xff, 0xe0, 0x0, 0x0,
    0x0, 0x3, 0xff, 0xff, 0xfe, 0x0, 0x0, 0x0,
    0x0, 0x3f, 0xff, 0xff, 0xe0, 0x0, 0x0, 0x0,
    0x3, 0xff, 0xff, 0xfe, 0x0, 0x0, 0x0, 0x0,
    0x3f, 0xff, 0xff, 0xe0, 0x0, 0x0, 0x0, 0x3,
    0xff, 0xff, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x3f,
    0xff, 0xff, 0xe0, 0x0, 0x0, 0x0, 0x3, 0xff,
    0xff, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x3f, 0xff,
    0xff, 0xe0, 0x0, 0x0, 0x0, 0x3, 0xff, 0xff,
    0xfe, 0x0, 0x0, 0x0, 0x0, 0x3f, 0xff, 0xff,
    0xe0, 0x0, 0x0, 0x0, 0x3, 0xff, 0xff, 0xfe,
    0x0, 0x0, 0x0, 0x0, 0x3f, 0xff, 0xff, 0xe0,
    0x0, 0x0, 0x0, 0x3, 0xff, 0xff, 0xfe, 0x0,
    0x0, 0x0, 0x0, 0x3f, 0xff, 0xff, 0xe0, 0x0,
    0x0, 0x0, 0x3, 0xff, 0xff, 0xfe, 0x0, 0x0,
    0x0, 0x0, 0x3f, 0xff, 0xff, 0xe0, 0x0, 0x0,
    0x0, 0x3, 0xff, 0xff, 0xfe, 0x0, 0x0, 0x0,
    0x0, 0x3f, 0xff, 0xff, 0xe0, 0x0, 0x0, 0x0,
    0x3, 0xff, 0xff, 0xfe, 0x0, 0x0, 0x0, 0x0,
    0x3f, 0xff, 0xff, 0xe0, 0x0, 0x0, 0x0, 0x3,
    0xff, 0xff, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x3f,
    0xff, 0xff, 0xe0,

    /* U+32 "2" */
    0x0, 0x0, 0x0, 0x0, 0x1f, 0xff, 0xff, 0xf0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0xff,
    0xff, 0xff, 0xff, 0xfc, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc,
    0x0, 0x0, 0x0, 0x1, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xe0, 0x0, 0x0, 0x3, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0,
    0x0, 0x7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xf0, 0x0, 0x3, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0, 0x3,
    0xff, 0xff, 0xff, 0xf0, 0x0, 0x7, 0xff, 0xff,
    0xff, 0xf0, 0x1, 0xff, 0xff, 0xff, 0xc0, 0x0,
    0x0, 0x1f, 0xff, 0xff, 0xfe, 0x0, 0xff, 0xff,
    0xff, 0xc0, 0x0, 0x0, 0x1, 0xff, 0xff, 0xff,
    0x80, 0x3f, 0xff, 0xff, 0xe0, 0x0, 0x0, 0x0,
    0x3f, 0xff, 0xff, 0xf0, 0x1f, 0xff, 0xff, 0xf0,
    0x0, 0x0, 0x0, 0x7, 0xff, 0xff, 0xfc, 0x7,
    0xff, 0xff, 0xf8, 0x0, 0x0, 0x0, 0x1, 0xff,
    0xff, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x7f, 0xff, 0xff, 0xc0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x3f, 0xff, 0xff,
    0xe0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x1f, 0xff, 0xff, 0xf8, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xf, 0xff, 0xff, 0xfc, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0xff,
    0xff, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xf, 0xff, 0xff, 0xfe, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x1f, 0xff, 0xff, 0xff,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3f,
    0xff, 0xff, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x7f, 0xff, 0xff, 0xff, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xff, 0xff, 0xff,
    0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1,
    0xff, 0xff, 0xff, 0xfe, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x3, 0xff, 0xff, 0xff, 0xfe, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x7, 0xff, 0xff,
    0xff, 0xfc, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xf, 0xff, 0xff, 0xff, 0xf8, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x1f, 0xff, 0xff, 0xff, 0xe0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3f, 0xff,
    0xff, 0xff, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x7f, 0xff, 0xff, 0xff, 0x80, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xff, 0xff, 0xff, 0xff,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0xff,
    0xff, 0xff, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x1, 0xff, 0xff, 0xff, 0xfc, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x1, 0xff, 0xff, 0xff,
    0xf8, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1,
    0xff, 0xff, 0xff, 0xf8, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x1, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xf8, 0x1, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0x0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xc0, 0x7f, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x3f,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xfc, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xc3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xf0,

    /* U+33 "3" */
    0x0, 0x0, 0x0, 0x0, 0x7f, 0xff, 0xff, 0x80,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3, 0xff,
    0xff, 0xff, 0xff, 0xfc, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x0, 0x0, 0x0, 0x0,
    0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0x0, 0x0, 0x0, 0x7, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xfe, 0x0, 0x0, 0x0, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc,
    0x0, 0x0, 0xf, 0xff, 0xff, 0xff, 0x0, 0x0,
    0xff, 0xff, 0xff, 0xf8, 0x0, 0x0, 0xff, 0xff,
    0xff, 0x80, 0x0, 0x0, 0xff, 0xff, 0xff, 0xe0,
    0x0, 0xf, 0xff, 0xff, 0xf0, 0x0, 0x0, 0x1,
    0xff, 0xff, 0xff, 0x0, 0x0, 0xff, 0xff, 0xff,
    0x0, 0x0, 0x0, 0xf, 0xff, 0xff, 0xf8, 0x0,
    0x0, 0x1f, 0xff, 0xf0, 0x0, 0x0, 0x0, 0x3f,
    0xff, 0xff, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x3, 0xff, 0xff, 0xfe, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1f, 0xff,
    0xff, 0xe0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x3, 0xff, 0xff, 0xfe, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xff, 0xff, 0xff,
    0xe0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1,
    0xff, 0xff, 0xff, 0xfc, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x1f, 0xff, 0xff, 0xff, 0xff, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xff, 0xff,
    0xff, 0xff, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xf, 0xff, 0xff, 0xff, 0xc0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x7f, 0xff, 0xff,
    0xff, 0xe0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x7, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x3f, 0xff, 0xff, 0xff,
    0xff, 0xfc, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x7f, 0xff, 0xff, 0xfc, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3f, 0xff,
    0xff, 0xf8, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x3f, 0xff, 0xff, 0xf0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xff, 0xff,
    0xff, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x3, 0xff, 0xff, 0xff, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0xff, 0xff,
    0xf8, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x7f, 0xff, 0xff, 0xc0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x3, 0xff, 0xff, 0xfe,
    0x0, 0xff, 0xff, 0xfe, 0x0, 0x0, 0x0, 0x0,
    0x3f, 0xff, 0xff, 0xf0, 0xf, 0xff, 0xff, 0xf8,
    0x0, 0x0, 0x0, 0x1, 0xff, 0xff, 0xff, 0x80,
    0x3f, 0xff, 0xff, 0xe0, 0x0, 0x0, 0x0, 0x3f,
    0xff, 0xff, 0xf8, 0x0, 0xff, 0xff, 0xff, 0xc0,
    0x0, 0x0, 0x7, 0xff, 0xff, 0xff, 0x80, 0x3,
    0xff, 0xff, 0xff, 0xe0, 0x0, 0x1, 0xff, 0xff,
    0xff, 0xf8, 0x0, 0xf, 0xff, 0xff, 0xff, 0xfc,
    0x3, 0xff, 0xff, 0xff, 0xff, 0x0, 0x0, 0x1f,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xe0, 0x0, 0x0, 0x3f, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xfc, 0x0, 0x0, 0x0, 0x3f,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0,
    0x0, 0x0, 0x0, 0x3f, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0x80, 0x0, 0x0, 0x0, 0x0, 0xf,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x1, 0xff, 0xff, 0xff, 0xff,
    0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+34 "4" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3f,
    0xff, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x1f, 0xff, 0xff, 0xe0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf,
    0xff, 0xff, 0xfc, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x7, 0xff, 0xff, 0xff, 0x80,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3,
    0xff, 0xff, 0xff, 0xf0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x1, 0xff, 0xff, 0xff, 0xfe,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xff, 0xff, 0xff, 0xff, 0xc0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x7f, 0xff, 0xff, 0xff,
    0xf8, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x3f, 0xff, 0xff, 0xff, 0xff, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x1f, 0xff, 0xff, 0xff,
    0xff, 0xe0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xf, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xf, 0xff, 0xff, 0xff,
    0xff, 0xff, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x3, 0xff, 0xff, 0xf9,
    0xff, 0xff, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x1, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xc0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xff, 0xff, 0xfe,
    0x7, 0xff, 0xff, 0xf8, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x7f, 0xff, 0xff, 0x0, 0xff, 0xff, 0xff,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x3f, 0xff, 0xff,
    0x80, 0x1f, 0xff, 0xff, 0xe0, 0x0, 0x0, 0x0,
    0x0, 0x1f, 0xff, 0xff, 0xc0, 0x3, 0xff, 0xff,
    0xfc, 0x0, 0x0, 0x0, 0x0, 0xf, 0xff, 0xff,
    0xe0, 0x0, 0x7f, 0xff, 0xff, 0x80, 0x0, 0x0,
    0x0, 0x7, 0xff, 0xff, 0xf0, 0x0, 0xf, 0xff,
    0xff, 0xf0, 0x0, 0x0, 0x0, 0x3, 0xff, 0xff,
    0xf8, 0x0, 0x1, 0xff, 0xff, 0xfe, 0x0, 0x0,
    0x0, 0x1, 0xff, 0xff, 0xfc, 0x0, 0x0, 0x3f,
    0xff, 0xff, 0xc0, 0x0, 0x0, 0x0, 0xff, 0xff,
    0xfe, 0x0, 0x0, 0x7, 0xff, 0xff, 0xf8, 0x0,
    0x0, 0x0, 0x7f, 0xff, 0xff, 0x0, 0x0, 0x0,
    0xff, 0xff, 0xff, 0x0, 0x0, 0x0, 0x7f, 0xff,
    0xff, 0x80, 0x0, 0x0, 0x1f, 0xff, 0xff, 0xe0,
    0x0, 0x0, 0x3f, 0xff, 0xff, 0x80, 0x0, 0x0,
    0x3, 0xff, 0xff, 0xfc, 0x0, 0x0, 0xf, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0x81, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x3f,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xfe, 0x7, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xf8, 0x1f, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0x3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xe0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x7, 0xff, 0xff, 0xfe, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x7f, 0xff, 0xff, 0x80, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xf, 0xff, 0xff, 0xf0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x1, 0xff, 0xff, 0xfe, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x3f, 0xff, 0xff,
    0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x7, 0xff, 0xff, 0xf8, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xff, 0xff,
    0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x1f, 0xff, 0xff, 0xe0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3, 0xff,
    0xff, 0xfc, 0x0, 0x0, 0x0,

    /* U+35 "5" */
    0x0, 0x0, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xc0, 0x0, 0x0, 0x1f, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x0, 0x0,
    0xf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xfe, 0x0, 0x0, 0x3, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x80, 0x0, 0x1, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0,
    0x0, 0x0, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xf8, 0x0, 0x0, 0x3f, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x0, 0x0,
    0xf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0x80, 0x0, 0x7, 0xff, 0xff, 0xf0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3, 0xff,
    0xff, 0xfc, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xff, 0xff, 0xfe, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x7f, 0xff, 0xff,
    0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x1f, 0xff, 0xff, 0xc0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xf, 0xff, 0xff, 0xe0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3, 0xff,
    0xff, 0xf8, 0x1f, 0xff, 0xff, 0x0, 0x0, 0x0,
    0x0, 0x1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0x80, 0x0, 0x0, 0x0, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0x0, 0x0, 0x0,
    0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xf8, 0x0, 0x0, 0x1f, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xc0, 0x0, 0x7, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe,
    0x0, 0x3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xe0, 0x0, 0xff, 0xff, 0xff,
    0xe0, 0x0, 0x0, 0xff, 0xff, 0xff, 0xfc, 0x0,
    0x3f, 0xff, 0xff, 0x80, 0x0, 0x0, 0x3, 0xff,
    0xff, 0xff, 0xc0, 0x0, 0x0, 0x3f, 0x0, 0x0,
    0x0, 0x0, 0x3f, 0xff, 0xff, 0xf8, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x7, 0xff, 0xff,
    0xfe, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xff, 0xff, 0xff, 0xc0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x1f, 0xff, 0xff, 0xf0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7,
    0xff, 0xff, 0xfc, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x1, 0xff, 0xff, 0xff, 0x80, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7f, 0xff,
    0xff, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x1f, 0xff, 0xff, 0xf0, 0x3, 0xff, 0xff,
    0x80, 0x0, 0x0, 0x0, 0xf, 0xff, 0xff, 0xfc,
    0x1f, 0xff, 0xff, 0xf0, 0x0, 0x0, 0x0, 0x3,
    0xff, 0xff, 0xfe, 0x7, 0xff, 0xff, 0xfe, 0x0,
    0x0, 0x0, 0x3, 0xff, 0xff, 0xff, 0x0, 0xff,
    0xff, 0xff, 0xe0, 0x0, 0x0, 0x3, 0xff, 0xff,
    0xff, 0x80, 0x1f, 0xff, 0xff, 0xff, 0x0, 0x0,
    0x3, 0xff, 0xff, 0xff, 0xc0, 0x3, 0xff, 0xff,
    0xff, 0xfe, 0x0, 0x1f, 0xff, 0xff, 0xff, 0xc0,
    0x0, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xc0, 0x0, 0x3, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x0, 0x0,
    0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0x80, 0x0, 0x0, 0x0, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x0, 0x0, 0x0, 0x0, 0x1,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x1, 0xff, 0xff, 0xff, 0xff,
    0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+36 "6" */
    0x0, 0x0, 0x0, 0x0, 0x7, 0xff, 0xff, 0xf0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0xff,
    0xff, 0xff, 0xff, 0xfc, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0,
    0x0, 0x0, 0x0, 0x0, 0x3f, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x80, 0x0, 0x0, 0x0, 0x7f,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x0,
    0x0, 0x0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xc0, 0x0, 0x0, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x0, 0x0,
    0xff, 0xff, 0xff, 0xfc, 0x0, 0x7, 0xff, 0xff,
    0xff, 0x80, 0x0, 0x7f, 0xff, 0xff, 0xf0, 0x0,
    0x0, 0x3f, 0xff, 0xff, 0xf0, 0x0, 0x7f, 0xff,
    0xff, 0xe0, 0x0, 0x0, 0x3, 0xff, 0xff, 0xfe,
    0x0, 0x3f, 0xff, 0xff, 0xf0, 0x0, 0x0, 0x0,
    0x7f, 0xff, 0xff, 0x0, 0x1f, 0xff, 0xff, 0xf8,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7,
    0xff, 0xff, 0xfc, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x3, 0xff, 0xff, 0xfe, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0xff, 0xff,
    0xff, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x7f, 0xff, 0xff, 0xc0, 0x3, 0xff, 0xff,
    0xe0, 0x0, 0x0, 0x0, 0x1f, 0xff, 0xff, 0xf0,
    0x3f, 0xff, 0xff, 0xff, 0xf0, 0x0, 0x0, 0xf,
    0xff, 0xff, 0xf8, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xc0, 0x0, 0x3, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x0, 0x0, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0,
    0x0, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x0, 0xf, 0xff, 0xff, 0xff,
    0xff, 0xc0, 0x1, 0xff, 0xff, 0xff, 0xf0, 0x3,
    0xff, 0xff, 0xff, 0xfe, 0x0, 0x0, 0x7, 0xff,
    0xff, 0xff, 0x0, 0xff, 0xff, 0xff, 0xfe, 0x0,
    0x0, 0x0, 0x3f, 0xff, 0xff, 0xe0, 0x3f, 0xff,
    0xff, 0xfe, 0x0, 0x0, 0x0, 0x7, 0xff, 0xff,
    0xfc, 0xf, 0xff, 0xff, 0xff, 0x0, 0x0, 0x0,
    0x0, 0xff, 0xff, 0xff, 0x83, 0xff, 0xff, 0xff,
    0xc0, 0x0, 0x0, 0x0, 0x1f, 0xff, 0xff, 0xe0,
    0x7f, 0xff, 0xff, 0xe0, 0x0, 0x0, 0x0, 0x7,
    0xff, 0xff, 0xf8, 0x1f, 0xff, 0xff, 0xf8, 0x0,
    0x0, 0x0, 0x1, 0xff, 0xff, 0xff, 0x7, 0xff,
    0xff, 0xff, 0x0, 0x0, 0x0, 0x0, 0x7f, 0xff,
    0xff, 0xc0, 0xff, 0xff, 0xff, 0xc0, 0x0, 0x0,
    0x0, 0x1f, 0xff, 0xff, 0xe0, 0x1f, 0xff, 0xff,
    0xf0, 0x0, 0x0, 0x0, 0x7, 0xff, 0xff, 0xf8,
    0x7, 0xff, 0xff, 0xff, 0x0, 0x0, 0x0, 0x3,
    0xff, 0xff, 0xfe, 0x0, 0xff, 0xff, 0xff, 0xe0,
    0x0, 0x0, 0x1, 0xff, 0xff, 0xff, 0x0, 0x1f,
    0xff, 0xff, 0xfe, 0x0, 0x0, 0x0, 0xff, 0xff,
    0xff, 0x80, 0x1, 0xff, 0xff, 0xff, 0xf0, 0x0,
    0x1, 0xff, 0xff, 0xff, 0xc0, 0x0, 0x3f, 0xff,
    0xff, 0xff, 0xf0, 0x1f, 0xff, 0xff, 0xff, 0xc0,
    0x0, 0x3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xe0, 0x0, 0x0, 0x3f, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x0, 0x0,
    0x1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xc0, 0x0, 0x0, 0x0, 0xf, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x80, 0x0, 0x0, 0x0, 0x0,
    0x3f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x3f, 0xff, 0xff, 0xff,
    0xe0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+37 "7" */
    0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xf8, 0xf, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xf0, 0x3f, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc,
    0xf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x3, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x7f, 0xff, 0xff, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x7f, 0xff, 0xff, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xff,
    0xff, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xff, 0xff, 0xff, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xff, 0xff, 0xff,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xff, 0xff, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x7f, 0xff, 0xff, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7f, 0xff,
    0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x7f, 0xff, 0xff, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x3f, 0xff, 0xff, 0x80,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3f,
    0xff, 0xff, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x1f, 0xff, 0xff, 0xc0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x1f, 0xff, 0xff,
    0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xf, 0xff, 0xff, 0xe0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x7, 0xff, 0xff, 0xf0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7, 0xff,
    0xff, 0xf8, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x3, 0xff, 0xff, 0xfc, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x1, 0xff, 0xff, 0xfc,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xff, 0xff, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x7f, 0xff, 0xff, 0x80, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3f, 0xff,
    0xff, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x1f, 0xff, 0xff, 0xe0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x7, 0xff, 0xff, 0xf0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3,
    0xff, 0xff, 0xf8, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x1, 0xff, 0xff, 0xfe, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xff, 0xff,
    0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x3f, 0xff, 0xff, 0x80, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x1f, 0xff, 0xff, 0xe0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7,
    0xff, 0xff, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x3, 0xff, 0xff, 0xfc, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xff, 0xff,
    0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x3f, 0xff, 0xff, 0x80, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x1f, 0xff, 0xff, 0xe0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7,
    0xff, 0xff, 0xf8, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x1, 0xff, 0xff, 0xfe, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0,

    /* U+38 "8" */
    0x0, 0x0, 0x0, 0x3, 0xff, 0xff, 0xff, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x7, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x0, 0x0, 0x0, 0x0, 0x1,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x0,
    0x0, 0x0, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xfc, 0x0, 0x0, 0x1, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0x0, 0x0, 0xf,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0x80, 0x0, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x80, 0x1, 0xff, 0xff, 0xff,
    0xe0, 0x0, 0x3, 0xff, 0xff, 0xff, 0x80, 0x7,
    0xff, 0xff, 0xfe, 0x0, 0x0, 0x0, 0xff, 0xff,
    0xff, 0x80, 0xf, 0xff, 0xff, 0xf0, 0x0, 0x0,
    0x0, 0x7f, 0xff, 0xff, 0x0, 0x1f, 0xff, 0xff,
    0xc0, 0x0, 0x0, 0x0, 0xff, 0xff, 0xff, 0x0,
    0x3f, 0xff, 0xff, 0x80, 0x0, 0x0, 0x0, 0xff,
    0xff, 0xfe, 0x0, 0x7f, 0xff, 0xff, 0x0, 0x0,
    0x0, 0x3, 0xff, 0xff, 0xf8, 0x0, 0x7f, 0xff,
    0xff, 0x0, 0x0, 0x0, 0xf, 0xff, 0xff, 0xf0,
    0x0, 0x7f, 0xff, 0xff, 0x80, 0x0, 0x0, 0x3f,
    0xff, 0xff, 0xc0, 0x0, 0x7f, 0xff, 0xff, 0xe0,
    0x0, 0x3, 0xff, 0xff, 0xfe, 0x0, 0x0, 0x3f,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0,
    0x0, 0x0, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0x0, 0x0, 0x0, 0x3, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xe0, 0x0, 0x0, 0x0,
    0x0, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x0,
    0x0, 0x0, 0x0, 0x3, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xc0, 0x0, 0x0, 0x0, 0x7f, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x0, 0x0,
    0x7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0x0, 0x0, 0x7f, 0xff, 0xff, 0xf8, 0x0,
    0xf, 0xff, 0xff, 0xff, 0x80, 0x3, 0xff, 0xff,
    0xff, 0x0, 0x0, 0x1, 0xff, 0xff, 0xff, 0xc0,
    0xf, 0xff, 0xff, 0xf0, 0x0, 0x0, 0x0, 0x7f,
    0xff, 0xff, 0xc0, 0x7f, 0xff, 0xff, 0xc0, 0x0,
    0x0, 0x0, 0x3f, 0xff, 0xff, 0xc1, 0xff, 0xff,
    0xff, 0x0, 0x0, 0x0, 0x0, 0x3f, 0xff, 0xff,
    0xc3, 0xff, 0xff, 0xfc, 0x0, 0x0, 0x0, 0x0,
    0x7f, 0xff, 0xff, 0xc7, 0xff, 0xff, 0xf8, 0x0,
    0x0, 0x0, 0x0, 0x7f, 0xff, 0xff, 0x9f, 0xff,
    0xff, 0xf0, 0x0, 0x0, 0x0, 0x1, 0xff, 0xff,
    0xff, 0x3f, 0xff, 0xff, 0xe0, 0x0, 0x0, 0x0,
    0x3, 0xff, 0xff, 0xfe, 0x3f, 0xff, 0xff, 0xe0,
    0x0, 0x0, 0x0, 0xf, 0xff, 0xff, 0xf8, 0x7f,
    0xff, 0xff, 0xe0, 0x0, 0x0, 0x0, 0x3f, 0xff,
    0xff, 0xf0, 0x7f, 0xff, 0xff, 0xf0, 0x0, 0x0,
    0x0, 0xff, 0xff, 0xff, 0xc0, 0x7f, 0xff, 0xff,
    0xfc, 0x0, 0x0, 0xf, 0xff, 0xff, 0xff, 0x0,
    0x7f, 0xff, 0xff, 0xff, 0xc0, 0x3, 0xff, 0xff,
    0xff, 0xfc, 0x0, 0x3f, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xe0, 0x0, 0x1f, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0,
    0x0, 0x7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xf0, 0x0, 0x0, 0x1, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x0, 0x0, 0x0, 0x0,
    0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xff, 0xff, 0xff, 0xff,
    0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+39 "9" */
    0x0, 0x0, 0x0, 0x0, 0x7f, 0xff, 0xfe, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1f, 0xff,
    0xff, 0xff, 0xff, 0x80, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0,
    0x0, 0x0, 0x0, 0x3, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xfc, 0x0, 0x0, 0x0, 0x7, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x0,
    0x0, 0x7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xfe, 0x0, 0x0, 0x7, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x0, 0x7,
    0xff, 0xff, 0xff, 0xc0, 0x0, 0xff, 0xff, 0xff,
    0xfe, 0x0, 0x3, 0xff, 0xff, 0xff, 0x0, 0x0,
    0x3, 0xff, 0xff, 0xff, 0xc0, 0x1, 0xff, 0xff,
    0xff, 0x0, 0x0, 0x0, 0x1f, 0xff, 0xff, 0xfc,
    0x0, 0xff, 0xff, 0xff, 0x80, 0x0, 0x0, 0x3,
    0xff, 0xff, 0xff, 0x80, 0x7f, 0xff, 0xff, 0xc0,
    0x0, 0x0, 0x0, 0x3f, 0xff, 0xff, 0xe0, 0x1f,
    0xff, 0xff, 0xe0, 0x0, 0x0, 0x0, 0xf, 0xff,
    0xff, 0xfc, 0x7, 0xff, 0xff, 0xf8, 0x0, 0x0,
    0x0, 0x1, 0xff, 0xff, 0xff, 0x81, 0xff, 0xff,
    0xfe, 0x0, 0x0, 0x0, 0x0, 0x7f, 0xff, 0xff,
    0xe0, 0x7f, 0xff, 0xff, 0x80, 0x0, 0x0, 0x0,
    0x1f, 0xff, 0xff, 0xfc, 0x1f, 0xff, 0xff, 0xe0,
    0x0, 0x0, 0x0, 0x7, 0xff, 0xff, 0xff, 0x3,
    0xff, 0xff, 0xfc, 0x0, 0x0, 0x0, 0x3, 0xff,
    0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0x80, 0x0,
    0x0, 0x1, 0xff, 0xff, 0xff, 0xf8, 0x1f, 0xff,
    0xff, 0xf8, 0x0, 0x0, 0x0, 0xff, 0xff, 0xff,
    0xfe, 0x3, 0xff, 0xff, 0xff, 0x80, 0x0, 0x1,
    0xff, 0xff, 0xff, 0xff, 0x80, 0x3f, 0xff, 0xff,
    0xfe, 0x0, 0x7, 0xff, 0xff, 0xff, 0xff, 0xe0,
    0x3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xf8, 0x0, 0x3f, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x0, 0x1,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0x80, 0x0, 0xf, 0xff, 0xff, 0xff, 0xff,
    0xfc, 0x7f, 0xff, 0xff, 0xc0, 0x0, 0x0, 0x1f,
    0xff, 0xff, 0xff, 0xf0, 0x1f, 0xff, 0xff, 0xf0,
    0x0, 0x0, 0x0, 0xf, 0xff, 0xff, 0x0, 0xf,
    0xff, 0xff, 0xfc, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x3, 0xff, 0xff, 0xfe, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0xff, 0xff,
    0xff, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x7f, 0xff, 0xff, 0xc0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x3f, 0xff, 0xff, 0xe0,
    0x0, 0x1f, 0xff, 0xf8, 0x0, 0x0, 0x0, 0x1f,
    0xff, 0xff, 0xf8, 0x0, 0xff, 0xff, 0xff, 0x0,
    0x0, 0x0, 0xf, 0xff, 0xff, 0xfc, 0x0, 0x3f,
    0xff, 0xff, 0xe0, 0x0, 0x0, 0xf, 0xff, 0xff,
    0xfc, 0x0, 0x7, 0xff, 0xff, 0xff, 0x0, 0x0,
    0x1f, 0xff, 0xff, 0xfe, 0x0, 0x0, 0xff, 0xff,
    0xff, 0xff, 0x1, 0xff, 0xff, 0xff, 0xfe, 0x0,
    0x0, 0xf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0x0, 0x0, 0x1, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xfe, 0x0, 0x0, 0x0,
    0xf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc,
    0x0, 0x0, 0x0, 0x0, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xf8, 0x0, 0x0, 0x0, 0x0, 0x3,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x3, 0xff, 0xff, 0xff, 0xfc,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 374, .box_w = 69, .box_h = 21, .ofs_x = 0, .ofs_y = 23},
    {.bitmap_index = 182, .adv_w = 561, .box_w = 93, .box_h = 31, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 543, .adv_w = 267, .box_w = 30, .box_h = 19, .ofs_x = 3, .ofs_y = -10},
    {.bitmap_index = 615, .adv_w = 320, .box_w = 51, .box_h = 9, .ofs_x = 3, .ofs_y = 12},
    {.bitmap_index = 673, .adv_w = 267, .box_w = 30, .box_h = 9, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 707, .adv_w = 267, .box_w = 57, .box_h = 45, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 1028, .adv_w = 534, .box_w = 87, .box_h = 44, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 1507, .adv_w = 534, .box_w = 60, .box_h = 43, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 1830, .adv_w = 534, .box_w = 90, .box_h = 43, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2314, .adv_w = 534, .box_w = 93, .box_h = 44, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 2826, .adv_w = 534, .box_w = 99, .box_h = 43, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3359, .adv_w = 534, .box_w = 90, .box_h = 44, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 3854, .adv_w = 534, .box_w = 90, .box_h = 44, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 4349, .adv_w = 534, .box_w = 90, .box_h = 43, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 4833, .adv_w = 534, .box_w = 87, .box_h = 44, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 5312, .adv_w = 534, .box_w = 90, .box_h = 44, .ofs_x = 1, .ofs_y = -1}
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
lv_font_t lv_font_arialb_60 = {
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 54,          /*The maximum line height required by the font*/
    .base_line = 10,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_HOR,
#endif
#if LV_VERSION_CHECK(7, 4, 0)
    .underline_position = -6,
    .underline_thickness = 6,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if LV_FONT_ARIALB_60*/

