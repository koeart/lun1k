#ifndef _MAIN_H
#define _MAIN_H

#include <stdint.h>

#define LED_WIDTH	128
#define LED_HEIGHT	128

#define SIMULATOR

#define ATTRIBUTES	__attribute__((constructor));

typedef uint8_t (*tick_fun)(char*);
typedef void (*key_fun)(uint8_t);

int sdlpause;

void registerAnimation(tick_fun tick, uint16_t t, uint16_t duration);
//void registerApp(tick_fun tick,uint16_t t);
void setLedXY(uint8_t x,uint8_t  y, uint8_t r,uint8_t g,uint8_t b);
void invLedXY(uint8_t x,uint8_t  y);
void getLedXY(uint8_t x, uint8_t y, uint8_t* red,uint8_t* green, uint8_t* blue);
#endif

