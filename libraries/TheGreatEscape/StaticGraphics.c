/**
 * $F076: static_graphic_defs.
 *
 * Definitions of fixed graphic elements.
 * Only used by plot_statics_and_menu_text().
 */

#include <stdint.h>

#include "TheGreatEscape/StaticGraphics.h"

static const uint8_t statictileline_flagpole[] =
{
  0x18, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x1A, 0x1A
};
static const uint8_t statictileline_game_window_left_border[] =
{
  0x02, 0x04, 0x11, 0x12, 0x11, 0x12, 0x11, 0x12, 0x11, 0x12, 0x11, 0x12, 0x11, 0x12, 0x11, 0x12, 0x11, 0x12, 0x0E, 0x10
};
static const uint8_t statictileline_game_window_right_border[] =
{
  0x05, 0x07, 0x11, 0x12, 0x11, 0x12, 0x11, 0x12, 0x11, 0x12, 0x11, 0x12, 0x11, 0x12, 0x11, 0x12, 0x11, 0x12, 0x09, 0x0B
};
static const uint8_t statictileline_game_window_top_border[] =
{
  0x13, 0x14, 0x13, 0x14, 0x13, 0x14, 0x13, 0x14, 0x13, 0x14, 0x15, 0x16, 0x17, 0x13, 0x14, 0x13, 0x14, 0x13, 0x14, 0x13, 0x14, 0x13, 0x14
};
static const uint8_t statictileline_game_window_bottom_border[] =
{
  /* Identical to above... */
  0x13, 0x14, 0x13, 0x14, 0x13, 0x14, 0x13, 0x14, 0x13, 0x14, 0x15, 0x16, 0x17, 0x13, 0x14, 0x13, 0x14, 0x13, 0x14, 0x13, 0x14, 0x13, 0x14
};
static const uint8_t statictileline_flagpole_grass[] =
{
  0x1F, 0x1B, 0x1C, 0x1D, 0x1E
};
static const uint8_t statictileline_medals_row0[] =
{
  0x20, 0x21, 0x22, 0x21, 0x23, 0x21, 0x24, 0x21, 0x22, 0x21, 0x25, 0x0B, 0x0C
};
static const uint8_t statictileline_medals_row1[] =
{
  0x26, 0x4E, 0x27, 0x4E, 0x28, 0x4E, 0x29, 0x4E, 0x27, 0x4E, 0x2A
};
static const uint8_t statictileline_medals_row2[] =
{
  0x2B, 0x2C, 0x2D, 0x2C, 0x2E, 0x2C, 0x2F, 0x2C, 0x2D, 0x2C, 0x30
};
static const uint8_t statictileline_medals_row3[] =
{
  0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3A, 0x3B
};
static const uint8_t statictileline_medals_row4[] =
{
  0x3C, 0x3D, 0x3E, 0x3F, 0x40, 0x41, 0x42, 0x43, 0x44, 0x45
};
static const uint8_t statictileline_bell_row0[] =
{
  0x46, 0x47, 0x48
};
static const uint8_t statictileline_bell_row1[] =
{
  0x49, 0x4A, 0x4B
};
static const uint8_t statictileline_bell_row2[] =
{
  0x4C, 0x4D
};
static const uint8_t statictileline_corner_tl[] =
{
  0x01, 0x03
};
static const uint8_t statictileline_corner_tr[] =
{
  0x06, 0x08
};
static const uint8_t statictileline_corner_bl[] =
{
  0x0D, 0x0F
};
static const uint8_t statictileline_corner_br[] =
{
  0x0A, 0x0C
};

#define HORIZONTAL statictileline_HORIZONTAL
#define VERTICAL   statictileline_VERTICAL

#define ENTRY(name, screenloc, orientation) \
  { screenloc, NELEMS(name) | orientation, name }

/* As with screenlocstrings, I can't end a struct member with a
 * variably-sized array. I therefore have to indirect them. */
const statictileline_t static_graphic_defs[18] =
{
  ENTRY(statictileline_flagpole,                  0x0021, VERTICAL),
  ENTRY(statictileline_game_window_left_border,   0x0006, VERTICAL),
  ENTRY(statictileline_game_window_right_border,  0x001E, VERTICAL),
  ENTRY(statictileline_game_window_top_border,    0x0027, HORIZONTAL),
  ENTRY(statictileline_game_window_bottom_border, 0x1047, HORIZONTAL),
  ENTRY(statictileline_flagpole_grass,            0x10A0, HORIZONTAL),
  ENTRY(statictileline_medals_row0,               0x1073, HORIZONTAL),
  ENTRY(statictileline_medals_row1,               0x1093, HORIZONTAL),
  ENTRY(statictileline_medals_row2,               0x10B3, HORIZONTAL),
  ENTRY(statictileline_medals_row3,               0x10D3, HORIZONTAL),
  ENTRY(statictileline_medals_row4,               0x10F3, HORIZONTAL),
  ENTRY(statictileline_bell_row0,                 0x106E, HORIZONTAL),
  ENTRY(statictileline_bell_row1,                 0x108E, HORIZONTAL),
  ENTRY(statictileline_bell_row2,                 0x10AE, HORIZONTAL),
  ENTRY(statictileline_corner_tl,                 0x0005, VERTICAL),
  ENTRY(statictileline_corner_tr,                 0x001F, VERTICAL),
  ENTRY(statictileline_corner_bl,                 0x1045, VERTICAL),
  ENTRY(statictileline_corner_br,                 0x105F, VERTICAL),
};

#undef ENTRY

#undef HORIZONTAL
#undef VERTICAL

// vim: ts=8 sts=2 sw=2 et

