#include <stdlib.h>
#include "main.h"
#include <stdio.h>

#include "../libs/wuline.h"
#include "../libs/circle.h"
#include "../libs/text.h"

static uint16_t randr(uint16_t start,uint16_t end);

uint8_t zaehler = 0;

uint8_t text_x = 0;
uint8_t text_y = 0;
uint8_t text_r = 255;
uint8_t text_g = 0;
uint8_t text_b = 0;

static uint8_t tick(char* nick) {


	//draw_filledCircle(randr(0,128),randr(0,128),randr(10,20),randr(0,255),randr(0,255),randr(0,255));
	//draw_filledCircleSlice(randr(0,128),randr(0,128),randr(10,20),randr(0,255),randr(0,255),randr(0,255),randr(0,360),randr(0,360));
	//draw_line(randr(0,128),randr(0,128),randr(0,128),randr(0,128),randr(0,255),randr(0,255),randr(0,255));
//	draw_text(randr(0,128),randr(0,128),"hallo",randr(0,255),randr(0,255),randr(0,255));
	zaehler++;
    if (zaehler == 100){
        blank_screen();
        text_x = randr(0,128);
        text_y = randr(0,128);
        draw_text_16pt(text_x, text_y, "hello koeart", text_r , text_g,text_b);

    }

    if (zaehler == 200) {
        blank_screen();
        text_r = randr(0,255);
        text_g = randr(0,255);
        text_b = randr(0,255);
        draw_text_16pt(text_x, text_y, "hello koeart", text_r , text_g,text_b);
        zaehler = 0;

    }

//   draw_text_16pt(text_x, text_y, "hello koeart", text_r , text_g,text_b);



	return 0;
}

static void init(void) ATTRIBUTES

void init(void) {
//	registerApp(start, key);
	registerAnimation(tick, 4, 450);
}

static uint16_t randr(uint16_t start,uint16_t end)
{
	return start + rand() % ( end - start );
}

