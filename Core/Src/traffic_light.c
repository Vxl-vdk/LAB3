/*
 * traffic_light.c
 *
 *  Created on: Nov 18, 2022
 *      Author: banhb
 */


#include "traffic_light.h"

int auto_led_time[] = {1000, 2000, 3000};

void auto_red_on(){
	setTimerTrafficLight(auto_led_time[1]);
}

void auto_green_on(){
	setTimerTrafficLight(auto_led_time[2]);
}

void auto_yellow_on(){
	setTimerTrafficLight(auto_led_time[0]);
}

void man_red_on(){
	setTimerTrafficLight(10000);
}
