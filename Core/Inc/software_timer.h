/*
 * software_timer.h
 *
 *  Created on: Nov 16, 2022
 *      Author: banhb
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_


extern int timer_flag;
extern int timer1_flag;
extern int timer_traffic_flag;
extern int update7seg_flag;
void timerRun();
void timer1Run();
void setTimer();
void setTimer1();

void setTimerUpdate7seg();
void update7segTimerRun();


void timerTrafficLightRun();
void setTimerTrafficLight();


#endif /* INC_SOFTWARE_TIMER_H_ */
