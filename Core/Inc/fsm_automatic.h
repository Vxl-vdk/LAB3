/*
 * fsm_automatic.h
 *
 *  Created on: Nov 18, 2022
 *      Author: banhb
 */

#ifndef INC_FSM_AUTOMATIC_H_
#define INC_FSM_AUTOMATIC_H_

#include "main.h"
#include "software_timer.h"
#include "button.h"
#include "fsm_manual.h"
#include "traffic_light.h"

#define INIT 			0
#define AUTO_RED 		1
#define AUTO_GREEN 		2
#define AUTO_YELLOW 	3

void fsm_automatic_run();
extern int status;

#endif /* INC_FSM_AUTOMATIC_H_ */
