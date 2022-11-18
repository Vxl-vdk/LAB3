/*
 * fsm_manual.c
 *
 *  Created on: Nov 18, 2022
 *      Author: banhb
 */
#include "fsm_manual.h"

int led_7seg_digit = 1;
int led_7seg = 0;

void fsm_manual_run(){
	switch(status){
	case MAN_RED:
		// blink 2Hz
		if(timer_flag == 1){
			setTimer(500);
			HAL_GPIO_TogglePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin);
		}

		// display Led 7 SEG
		if(timer1_flag == 1){
			setTimer1(500/MAX_LED);
			switch(led_7seg_digit){
				case 0:
					update_7SEG_mode(led_7seg++);
					led_7seg_digit++;
					break;
				case 1:
					update_7SEG_mode(led_7seg++);
					led_7seg_digit++;
					break;
				case 2:
					update_7SEG_mode(led_7seg++);
					led_7seg_digit++;
					break;
				case 3:
					update_7SEG_mode(led_7seg);
					led_7seg = 0;
					led_7seg_digit = 0;
					break;
				default:
					break;
			}
			if(isButton1Pressed()){
				// switch mode
				status = MAN_YELLOW;
				led_buffer[1] = 3;
				// add timer TODO
			}
		}

		if(update7seg_flag == 1){

		}

		// return to AUTO mode if > 10s
		if(timer_traffic_flag == 1  /*|| isButton3Pressed()*/){
			status = AUTO_RED;
			setTimerTrafficLight(2000);
		}

		break;
	case MAN_YELLOW:
		break;
	case MAN_GREEN:
		break;
	default:
		break;
	}
}

