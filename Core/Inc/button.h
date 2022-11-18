/*
 * button.h
 *
 *  Created on: Nov 17, 2022
 *      Author: banhb
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"

#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET

void getKeyInput();

int isButton1Pressed();

#endif /* INC_BUTTON_H_ */
