/*
 * fsm_automatic.c
 *
 *  Created on: Nov 18, 2022
 *      Author: banhb
 */


#include "fsm_automatic.h"

int status = 0;

void led_on(int red, int green, int yellow){
	HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, red);
	HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, green);
	HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, yellow);
}

void fsm_automatic_run(){
	switch(status){
		case INIT:
			led_on(1,1,1);
			status = AUTO_RED;
			// set duration for AUTO_RED
			setTimerTrafficLight(2000);
			break;
		case AUTO_RED:
			led_on(0, 1, 1); //RED

			if(timer_traffic_flag == 1){
				// set duration for AUTO_YELLOW
				auto_yellow_on();
				status = AUTO_YELLOW;
			}
			if(isButton1Pressed()){
				status = MAN_RED;
				led_buffer[1] = 2;
				// Condition to return back if > 10s
				setTimerTrafficLight(10000);
				// blink
				setTimer(500);
				setTimer1(500);
			}
			break;
		case AUTO_YELLOW:
			led_on(1,1,0); //YELLOW

			if(timer_traffic_flag == 1){
				// set duration for AUTO_GREEN
				auto_green_on();
				status = AUTO_GREEN;
			}
			break;
		case AUTO_GREEN:
			led_on(1,0,1); //GREEN

			if(timer_traffic_flag == 1){
				// set duration for AUTO_RED
				auto_red_on();
				status = AUTO_RED;
			}
			break;
		default:
			break;
		}
}
