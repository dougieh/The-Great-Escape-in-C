#include "TheGreatEscape/Tiles.h"

#include "TheGreatEscape/InteriorTiles.h"

/**
 * $9768: Interior tiles.
 */
const tile_t interior_tiles[interiorobjecttile_MAX] =
{
  { { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } },
  { { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } },
  { { 0x00, 0x00, 0x00, 0x30, 0x40, 0x02, 0x0C, 0x80 } },
  { { 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x08, 0x04 } },
  { { 0x30, 0xFC, 0x3F, 0xCF, 0xC3, 0xC0, 0xC8, 0xC6 } },
  { { 0x10, 0x60, 0x00, 0xC6, 0xF0, 0xFC, 0x3F, 0x0C } },
  { { 0x00, 0x98, 0x62, 0x08, 0x20, 0x80, 0x04, 0x00 } },
  { { 0x24, 0x81, 0x00, 0x08, 0x01, 0x40, 0x20, 0x01 } },
  { { 0x40, 0x30, 0x00, 0x4C, 0x30, 0x00, 0x86, 0x08 } },
  { { 0xC8, 0xC0, 0xC2, 0xCC, 0xF0, 0xC0, 0x0C, 0x01 } },
  { { 0x23, 0x83, 0x03, 0x13, 0x03, 0x83, 0x43, 0x03 } },
  { { 0x00, 0x18, 0x00, 0x40, 0x02, 0x08, 0x20, 0x80 } },
  { { 0x03, 0x13, 0x03, 0x03, 0x43, 0x0C, 0x30, 0x80 } },
  { { 0x02, 0x08, 0x20, 0x80, 0x00, 0x00, 0x00, 0x00 } },
  { { 0x08, 0x40, 0x00, 0x20, 0x00, 0x04, 0x40, 0x00 } },
  { { 0x40, 0x04, 0x02, 0x4C, 0x30, 0x00, 0xC3, 0x08 } },
  { { 0x00, 0x00, 0x03, 0x44, 0x8C, 0x1E, 0x0C, 0x40 } },
  { { 0x08, 0x06, 0x00, 0x63, 0x0F, 0x3F, 0xFC, 0x30 } },
  { { 0x0C, 0x3F, 0xFC, 0xF3, 0xC3, 0x0B, 0x23, 0xC3 } },
  { { 0x40, 0x10, 0x04, 0x01, 0x00, 0x00, 0x00, 0x00 } },
  { { 0x00, 0x00, 0xC0, 0x22, 0x31, 0x78, 0x30, 0x02 } },
  { { 0xC4, 0xC1, 0xC0, 0xD0, 0xC0, 0xC1, 0xC2, 0xC0 } },
  { { 0x13, 0x0B, 0x43, 0x33, 0x0F, 0x03, 0x20, 0x80 } },
  { { 0x06, 0x20, 0x40, 0x34, 0x08, 0x03, 0xC0, 0x30 } },
  { { 0xC0, 0xC8, 0xC0, 0xC0, 0xC2, 0x30, 0x0C, 0x01 } },
  { { 0x00, 0x19, 0x46, 0x10, 0x04, 0x01, 0x20, 0x00 } },
  { { 0x00, 0x00, 0x18, 0x00, 0x42, 0x10, 0x04, 0x01 } },
  { { 0x81, 0x9B, 0x62, 0x01, 0x80, 0x23, 0x4F, 0x0B } },
  { { 0xC3, 0x13, 0x03, 0xC3, 0xF3, 0xFC, 0x3F, 0x0C } },
  { { 0xC8, 0xC4, 0xC0, 0xC3, 0xCF, 0x3F, 0xFC, 0x30 } },
  { { 0x30, 0xFC, 0x3F, 0xCF, 0xC3, 0xC0, 0x98, 0x7E } },
  { { 0x73, 0x4F, 0x77, 0x38, 0x16, 0x03, 0x40, 0x04 } },
  { { 0xFF, 0x7E, 0x9C, 0xE8, 0xF2, 0x00, 0x20, 0x80 } },
  { { 0x1B, 0x5F, 0x0E, 0xC5, 0x1F, 0x33, 0x6D, 0x7D } },
  { { 0x72, 0xFB, 0xFF, 0xDB, 0x67, 0xFD, 0x9F, 0x6D } },
  { { 0xBB, 0x7B, 0x7B, 0x63, 0xC3, 0xCC, 0x10, 0x00 } },
  { { 0xC3, 0xCB, 0x63, 0xE3, 0xD3, 0xFB, 0xBB, 0xCB } },
  { { 0x00, 0x00, 0x00, 0x03, 0x0F, 0x3C, 0xF0, 0xC0 } },
  { { 0x0F, 0x3C, 0xF0, 0xC0, 0x00, 0x80, 0x80, 0x80 } },
  { { 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0 } },
  { { 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC3, 0xCC, 0xF0 } },
  { { 0x80, 0x83, 0x8C, 0xB0, 0xC0, 0x80, 0x80, 0x80 } },
  { { 0x00, 0x80, 0x80, 0x80, 0x80, 0x83, 0x8C, 0xB0 } },
  { { 0xC0, 0x81, 0x82, 0x82, 0x80, 0x80, 0x80, 0x80 } },
  { { 0xC0, 0xA0, 0xA0, 0x80, 0x83, 0x8F, 0xBF, 0xBC } },
  { { 0xC0, 0xC0, 0xC0, 0xC0, 0x40, 0xC0, 0x00, 0x00 } },
  { { 0xC3, 0xCF, 0xDF, 0xDC, 0xF0, 0xC0, 0x00, 0x00 } },
  { { 0x70, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } },
  { { 0x83, 0x8F, 0xBF, 0xBC, 0x70, 0xC0, 0x00, 0x00 } },
  { { 0xC0, 0xC1, 0xC2, 0xC2, 0xC0, 0xC0, 0xC0, 0xC0 } },
  { { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03 } },
  { { 0x43, 0x13, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00 } },
  { { 0x0F, 0x3C, 0xF0, 0xC0, 0x00, 0x00, 0x00, 0x00 } },
  { { 0x00, 0x00, 0x00, 0xC0, 0xF0, 0x3C, 0x0F, 0x03 } },
  { { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0 } },
  { { 0xF0, 0x3C, 0x0F, 0x03, 0x00, 0x00, 0x00, 0x00 } },
  { { 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03 } },
  { { 0x00, 0x00, 0x00, 0x00, 0x02, 0x08, 0x20, 0x80 } },
  { { 0x00, 0x00, 0x00, 0x00, 0x40, 0x10, 0x04, 0x01 } },
  { { 0xC2, 0xC8, 0xE0, 0xC0, 0x00, 0x00, 0x00, 0x00 } },
  { { 0x03, 0x03, 0x03, 0x03, 0x02, 0x08, 0x20, 0x80 } },
  { { 0xC0, 0xC0, 0xC0, 0xC0, 0x40, 0x10, 0x04, 0x01 } },
  { { 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x06, 0x05 } },
  { { 0x01, 0x07, 0x1C, 0x73, 0xCF, 0x3F, 0x7F, 0xBC } },
  { { 0x8F, 0x1C, 0xD0, 0xE0, 0xE0, 0xC0, 0x3C, 0xFF } },
  { { 0x05, 0x35, 0xF4, 0xC5, 0x05, 0x05, 0x04, 0x04 } },
  { { 0xD3, 0xCF, 0xDF, 0x3F, 0xCC, 0xF3, 0xFC, 0x3F } },
  { { 0xFC, 0xF3, 0xCF, 0x3F, 0xFF, 0xFF, 0xFF, 0x3F } },
  { { 0xC0, 0xF0, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF } },
  { { 0x00, 0x00, 0x00, 0x00, 0xC0, 0xF0, 0xFC, 0xF9 } },
  { { 0x0F, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } },
  { { 0xCF, 0xF3, 0xFC, 0x3F, 0x0F, 0x03, 0x00, 0x00 } },
  { { 0xFF, 0xFF, 0xFE, 0x39, 0xD7, 0xEC, 0xEB, 0x28 } },
  { { 0xE7, 0x9D, 0x71, 0xCD, 0x31, 0xC0, 0x00, 0x00 } },
  { { 0x08, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00 } },
  { { 0x00, 0x1C, 0x7F, 0x1F, 0x67, 0x59, 0x46, 0x59 } },
  { { 0x00, 0x00, 0x00, 0xC0, 0xF0, 0xFC, 0x70, 0x8C } },
  { { 0x56, 0x5E, 0x46, 0x58, 0x56, 0x5E, 0x46, 0x58 } },
  { { 0xBC, 0xBC, 0xBC, 0xBC, 0xBC, 0xBC, 0xBC, 0xBC } },
  { { 0x56, 0x5E, 0x66, 0x18, 0x06, 0x01, 0x00, 0x00 } },
  { { 0xBC, 0xBC, 0xBD, 0xBD, 0xBC, 0xB8, 0x00, 0x00 } },
  { { 0x18, 0x7E, 0x1F, 0x67, 0x59, 0x46, 0x5B, 0x5B } },
  { { 0x00, 0x00, 0x80, 0xE0, 0xF8, 0x7E, 0x9F, 0x66 } },
  { { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00 } },
  { { 0x5B, 0x5B, 0x5B, 0x5B, 0x5B, 0x5B, 0x5B, 0x5B } },
  { { 0x19, 0x6B, 0x6B, 0x6B, 0x6B, 0x6B, 0x6B, 0x6B } },
  { { 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80 } },
  { { 0x6B, 0x6B, 0x6B, 0x6B, 0x6B, 0x6B, 0x6B, 0x6B } },
  { { 0x63, 0x1B, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00 } },
  { { 0x6B, 0x6B, 0x6B, 0x8B, 0x6B, 0x1B, 0x02, 0x00 } },
  { { 0x80, 0x80, 0x80, 0x80, 0xB0, 0xBC, 0x0F, 0x03 } },
  { { 0x03, 0x03, 0x03, 0xC3, 0xF3, 0x3F, 0x0F, 0x03 } },
  { { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x0F } },
  { { 0x00, 0x00, 0x03, 0x0F, 0x3F, 0xFF, 0xFF, 0xFF } },
  { { 0x30, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF } },
  { { 0x00, 0x00, 0x00, 0xC0, 0xF0, 0xFC, 0xFF, 0xFC } },
  { { 0x3F, 0x0F, 0x03, 0x0C, 0x0B, 0x08, 0x08, 0x08 } },
  { { 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0xCF, 0x33, 0x0C } },
  { { 0xFF, 0xFF, 0xFF, 0xFC, 0xF3, 0xCC, 0x30, 0xC0 } },
  { { 0xF0, 0xCC, 0x34, 0xC4, 0x04, 0x04, 0x04, 0x04 } },
  { { 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF } },
  { { 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC } },
  { { 0xF3, 0xCC, 0x30, 0xC0, 0x00, 0x00, 0x00, 0x00 } },
  { { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x34 } },
  { { 0xCC, 0xB4, 0xC4, 0x84, 0x84, 0x80, 0x8F, 0x3F } },
  { { 0xFF, 0x3F, 0x8F, 0x80, 0x82, 0x82, 0x82, 0x82 } },
  { { 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00 } },
  { { 0xF0, 0xC0, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10 } },
  { { 0x8F, 0x1C, 0xE0, 0x30, 0xD0, 0xE0, 0xD4, 0xBB } },
  { { 0x7D, 0xDD, 0xBB, 0xFB, 0xF7, 0xCF, 0xFD, 0x3E } },
  { { 0xC0, 0x70, 0xBC, 0xDF, 0xDF, 0xE9, 0xEE, 0xFE } },
  { { 0x73, 0x8D, 0xFE, 0x39, 0xC7, 0xEC, 0xEB, 0x28 } },
  { { 0x01, 0x07, 0x1C, 0x70, 0xCD, 0x3B, 0x7B, 0xBC } },
  { { 0x43, 0x5B, 0x3D, 0x3D, 0x5A, 0x42, 0x5B, 0x5B } },
  { { 0x19, 0x6B, 0x0B, 0x6B, 0xF3, 0xF3, 0x6B, 0x0B } },
  { { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xB0 } },
  { { 0xCC, 0xB4, 0x8C, 0x84, 0x84, 0x04, 0xC4, 0xF0 } },
  { { 0x3F, 0x0F, 0x23, 0x20, 0x21, 0x21, 0x21, 0x21 } },
  { { 0xFC, 0xF0, 0xC4, 0x04, 0x04, 0x04, 0x04, 0x04 } },
  { { 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00 } },
  { { 0x00, 0x00, 0x03, 0x0F, 0x3F, 0xFC, 0xF3, 0xCC } },
  { { 0x00, 0xC0, 0xF0, 0xC0, 0x30, 0xD0, 0x10, 0xD0 } },
  { { 0x03, 0x0C, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E } },
  { { 0x33, 0xCB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB } },
  { { 0xD0, 0xD0, 0xD0, 0x50, 0x50, 0xD0, 0xD0, 0xD0 } },
  { { 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x02, 0x00 } },
  { { 0xBB, 0xB8, 0xB3, 0x8C, 0xB0, 0xC0, 0x00, 0x00 } },
  { { 0x30, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } },
  { { 0x70, 0xD8, 0x66, 0x3D, 0x0D, 0x03, 0x01, 0x00 } },
  { { 0x00, 0x00, 0x00, 0x80, 0x40, 0xA0, 0xE0, 0xF0 } },
  { { 0xF0, 0x60, 0x90, 0xF0, 0xB0, 0xB0, 0xB0, 0xB0 } },
  { { 0x30, 0xFC, 0x3F, 0x0C, 0x00, 0xF0, 0x00, 0x00 } },
  { { 0x0F, 0x3C, 0xF0, 0xC0, 0x08, 0x08, 0x88, 0x88 } },
  { { 0xC8, 0xC8, 0xC8, 0xC8, 0xC8, 0xC8, 0xC8, 0xC8 } },
  { { 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88 } },
  { { 0x88, 0x88, 0x88, 0x88, 0x83, 0x8F, 0x3F, 0xFC } },
  { { 0x00, 0x00, 0x00, 0x04, 0x1E, 0x3C, 0x12, 0x2E } },
  { { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0xFC } },
  { { 0x2E, 0x2D, 0x13, 0xEC, 0x30, 0x08, 0x08, 0x00 } },
  { { 0xF0, 0xC0, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00 } },
  { { 0x01, 0x07, 0x1F, 0x7F, 0x1F, 0x67, 0x79, 0x5E } },
  { { 0x80, 0x60, 0x98, 0xE6, 0x98, 0x66, 0x9E, 0x7E } },
  { { 0x5F, 0x5B, 0x57, 0x5F, 0x67, 0x1B, 0x07, 0x01 } },
  { { 0x7E, 0x7A, 0x72, 0x76, 0x7E, 0x78, 0x60, 0x80 } },
  { { 0x06, 0x1A, 0x6E, 0x7A, 0x5E, 0x76, 0x58, 0x63 } },
  { { 0xC0, 0xC0, 0xC0, 0xC3, 0xCF, 0xFC, 0xF0, 0xC0 } },
  { { 0xC0, 0xB0, 0x8C, 0xE4, 0x9C, 0xC4, 0x34, 0x0C } },
  { { 0xF0, 0xC0, 0x30, 0xD0, 0x10, 0x10, 0x00, 0x00 } },
  { { 0x00, 0x00, 0x03, 0x0F, 0x3F, 0xFF, 0xFF, 0xFC } },
  { { 0x00, 0x00, 0x00, 0xC0, 0xF0, 0xC0, 0x20, 0xE0 } },
  { { 0x20, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } },
  { { 0x3F, 0xFF, 0xFF, 0xFC, 0xF3, 0xCD, 0x31, 0xC1 } },
  { { 0x3F, 0x0F, 0x33, 0x2C, 0x23, 0x22, 0x02, 0x02 } },
  { { 0xF0, 0x3C, 0x0F, 0xC3, 0xF0, 0xC0, 0x20, 0xE0 } },
  { { 0x00, 0x00, 0x00, 0x0C, 0x3F, 0xFC, 0xF3, 0xCD } },
  { { 0x31, 0xCD, 0xB5, 0xB1, 0x8D, 0xB5, 0xB1, 0x8D } },
  { { 0xB5, 0xBD, 0xB3, 0x8C, 0xB0, 0xC0, 0x00, 0x00 } },
  { { 0x0E, 0x2E, 0xEE, 0xCE, 0x0E, 0x0E, 0x02, 0x00 } },
  { { 0x5E, 0x52, 0x5E, 0x5E, 0x46, 0x58, 0x5E, 0x52 } },
  { { 0x5E, 0x56, 0x5E, 0x46, 0x58, 0x5E, 0x52, 0x5E } },
  { { 0x00, 0x00, 0x00, 0xC0, 0xF0, 0xFC, 0xFF, 0xF3 } },
  { { 0xFF, 0xFF, 0xFC, 0xF3, 0xCF, 0x3F, 0xCF, 0xF3 } },
  { { 0xCC, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0xF3 } },
  { { 0xF0, 0x3C, 0xCF, 0xF3, 0xCF, 0x3C, 0xF3, 0xCB } },
  { { 0x3C, 0x4F, 0x73, 0x7C, 0x7F, 0x3E, 0x0E, 0x02 } },
  { { 0xCF, 0x3C, 0xF3, 0xCF, 0x3F, 0xDF, 0xDC, 0xD0 } },
  { { 0x3B, 0xFB, 0xFB, 0xF3, 0xC3, 0x03, 0x00, 0x00 } },
  { { 0x00, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x00, 0x00 } },
  { { 0xC0, 0xF0, 0x3C, 0x4F, 0x43, 0x60, 0x1A, 0xC6 } },
  { { 0x00, 0x00, 0x03, 0x01, 0x39, 0x11, 0x19, 0x15 } },
  { { 0x00, 0x00, 0x80, 0x00, 0x80, 0x40, 0x00, 0x00 } },
  { { 0x10, 0x10, 0x01, 0x07, 0x1F, 0x27, 0x39, 0x3E } },
  { { 0x18, 0x6E, 0xEF, 0xEF, 0xEF, 0x96, 0xF9, 0x67 } },
  { { 0x00, 0x00, 0x80, 0xE0, 0x90, 0x70, 0xF0, 0xF0 } },
  { { 0x3F, 0x3F, 0x1F, 0x07, 0x01, 0x02, 0x1B, 0x06 } },
  { { 0x9F, 0xFF, 0xBF, 0xBE, 0xB8, 0x60, 0x00, 0x03 } },
  { { 0xF0, 0xE0, 0x80, 0x03, 0x0F, 0x3C, 0xF0, 0xC0 } },
  { { 0x0C, 0x3C, 0xF4, 0xE8, 0x68, 0x88, 0x88, 0x94 } },
  { { 0x00, 0x00, 0x00, 0x03, 0x0F, 0x3E, 0x36, 0x28 } },
  { { 0x28, 0x09, 0x08, 0x14, 0x04, 0x08, 0x00, 0x00 } },
  { { 0x84, 0x48, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00 } },
  { { 0xC0, 0x60, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00 } },
  { { 0x00, 0x00, 0x00, 0x03, 0x0F, 0x3C, 0xFC, 0xCB } },
  { { 0x88, 0x60, 0x19, 0x06, 0x00, 0x00, 0x00, 0x00 } },
  { { 0xFF, 0xFF, 0xFF, 0xFE, 0xFD, 0xFB, 0xFB, 0xF9 } },
  { { 0xFF, 0xFF, 0xFF, 0x1C, 0xE3, 0xEC, 0x80, 0xE0 } },
  { { 0xF2, 0xC8, 0x37, 0x8F, 0x6F, 0x7D, 0x3D, 0x1B } },
  { { 0x00, 0xF0, 0xF8, 0xE8, 0xE8, 0xD8, 0xD3, 0xCF } },
  { { 0x27, 0x78, 0x7F, 0x5F, 0x0F, 0xF0, 0xFF, 0xFC } },
  { { 0x2F, 0xEF, 0xEF, 0xDC, 0x33, 0xCD, 0x31, 0xC1 } },
  { { 0x00, 0x00, 0x00, 0xC0, 0xF1, 0xFB, 0xFB, 0xF9 } },
  { { 0x00, 0x00, 0x00, 0x00, 0xE0, 0xE0, 0x80, 0xE0 } },
  { { 0x00, 0xF0, 0xF8, 0xE8, 0xE8, 0xD8, 0xD0, 0xC0 } },
  { { 0x20, 0xEC, 0xEF, 0xDF, 0x33, 0xCD, 0x31, 0xC1 } },
};

// vim: ts=8 sts=2 sw=2 et


