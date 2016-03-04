#ifndef SNESPAD_H
#define SNESPAD_H

/* SNES Controller Schematic
 ----------------------------- ---------------------
|                             |                      \
| (1)     (2)     (3)     (4) |   (5)     (6)     (7) |
|                             |                      /
 ----------------------------- ---------------------

Pin   Description   Wire Color
===   ===========   ==========
 1    +5v (power)   ?
 2    Clock         ?
 3    Latch         ?
 4    Data1         ?
 5    Data2         ?
 6    IOBit         ?
 7    Ground        ?
 */

/* SNES GamePad Hex Codes */
#define BTN_B 0x01
#define BTN_Y 0x02
#define BTN_SELECT 0x04
#define BTN_START 0x08
#define BTN_UP 0x10
#define BTN_DOWN 0x20
#define BTN_LEFT 0x40
#define BTN_RIGHT 0x80
#define BTN_A 0x100
#define BTN_X 0x200
#define BTN_L 0x400
#define BTN_R 0x800

#endif 
