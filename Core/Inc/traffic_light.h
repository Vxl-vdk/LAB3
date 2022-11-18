/*
 * traffic_light.h
 *
 *  Created on: Nov 18, 2022
 *      Author: banhb
 */

#ifndef INC_TRAFFIC_LIGHT_H_
#define INC_TRAFFIC_LIGHT_H_

#include "software_timer.h"

extern int auto_led_time[];

void auto_red_on();
void auto_green_on();
void auto_yellow_on();

#endif /* INC_TRAFFIC_LIGHT_H_ */
