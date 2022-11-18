/*
 * led_7seg_display.h
 *
 *  Created on: Nov 17, 2022
 *      Author: banhb
 */

#ifndef INC_LED_7SEG_DISPLAY_H_
#define INC_LED_7SEG_DISPLAY_H_

#include "main.h"

#define MAX_LED 			4
extern int led_buffer[MAX_LED];

void display7SEG(int num);
void update7SEGvalue(int index);
void update_7SEG_mode(int index);

#endif /* INC_LED_7SEG_DISPLAY_H_ */
