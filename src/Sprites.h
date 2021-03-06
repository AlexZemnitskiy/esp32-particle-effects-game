#ifndef sprites_h
#define sprites_h

#include "Arduino.h"

/*
 * 'alienShip' sprite & mask, 16x11px
*/
const int ALIEN_SHIP_WIDTH = 16;
const int ALIEN_SHIP_HIGHT = 11;

const unsigned char alienShip [] PROGMEM = {
  0x03, 0xc0, 0x04, 0x20, 0x08, 0x10, 0x0e, 0x30, 0x10, 0x08, 0x7f, 0x06, 0x80, 0x01, 0xfb, 0xdf,
  0x16, 0xe8, 0x16, 0xa8, 0x09, 0x10
};

const unsigned char alienShipMask [] PROGMEM = {
  0x03, 0xc0, 0x07, 0xe0, 0x0f, 0xf0, 0x0f, 0xf0, 0x1f, 0xf8, 0x7f, 0xfe, 0xff, 0xff, 0xff, 0xff,
  0x1f, 0xf8, 0x1f, 0xb8, 0x09, 0x10
};

/*
 * 'userShip' sprite & mask, 15x12px
*/

const int USER_SHIP_WIDTH = 15;
const int USER_SHIP_HIGHT = 12;

const unsigned char userShip [] PROGMEM = {
  0x7f, 0x80, 0x8c, 0x00, 0xc6, 0x00, 0x63, 0xf8, 0xb1, 0x8c, 0xaf, 0x86, 0xaf, 0x86, 0xb1, 0x8c,
  0x63, 0xf8, 0xc6, 0x00, 0x8c, 0x00, 0x7f, 0x80
};

const unsigned char userShipMask [] PROGMEM = {
  0x7f, 0x80, 0xfc, 0x00, 0xfe, 0x00, 0x7f, 0xf8, 0xbf, 0xfc, 0xbf, 0xfe, 0xbf, 0xfe, 0xbf, 0xfc,
  0x7f, 0xf8, 0xfe, 0x00, 0xfc, 0x00, 0x7f, 0x80
};

/*
 * 'life' sprite, 7x6px
*/
const unsigned char life [] PROGMEM = {
  0xc6, 0xee, 0xfe, 0x7c, 0x38, 0x10
};

#endif /* sprites_h */