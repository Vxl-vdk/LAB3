/*
 * software_timer.c
 *
 *  Created on: Nov 16, 2022
 *      Author: banhb
 */


#include "software_timer.h"
#include "main.h"
#include "input_reading.h"

int timer_flag = 0;
int timer_counter = 0;

int timer1_flag = 0;
int timer1_counter = 0;

int update7seg_flag = 0;
int update7seg_counter = 0;

int timer_traffic_flag = 0;
int timer_traffic_light_counter = 0;

int tick = 10; // interupt every 10ms

void setTimer(int duration){ // duration (ms)
	timer_counter = duration/tick;
	timer_flag = 0;
}

void setTimer1(int duration){ // duration (ms)
	timer1_counter = duration/tick;
	timer1_flag = 0;
}

void setTimerUpdate7seg(int duration){
	update7seg_counter = duration;
	update7seg_flag = 0;
}

void update7segTimerRun(){
	if(update7seg_counter > 0){
		update7seg_counter--;
		if(update7seg_counter <= 0){
			update7seg_flag = 1;
		}
	}
}

void setTimerTrafficLight(int duration){
	timer_traffic_light_counter = duration/tick;
	timer_traffic_flag = 0;
}

void timerTrafficLightRun(){
	if(timer_traffic_light_counter > 0){
		timer_traffic_light_counter--;
		if(timer_traffic_light_counter <= 0){
			timer_traffic_flag = 1;
		}
	}
}

void timerRun(){
	if(timer_counter > 0){
		timer_counter--;
		if(timer_counter <= 0){
			timer_flag = 1;
		}
	}
}

void timer1Run(){
	if(timer1_counter > 0){
		timer1_counter--;
		if(timer1_counter <= 0){
			timer1_flag = 1;
		}
	}
}

