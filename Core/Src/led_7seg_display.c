/*
 * led_7seg_display.c
 *
 *  Created on: Nov 17, 2022
 *      Author: banhb
 */


#include "led_7seg_display.h"


int led_buffer[MAX_LED];

void LED_7SEG_MODE(int a, int b, int c, int d, int e, int f, int g) {
  //	better with switch case
  HAL_GPIO_WritePin(LED_7SEG_A_GPIO_Port, LED_7SEG_A_Pin, a);
  HAL_GPIO_WritePin(LED_7SEG_B_GPIO_Port, LED_7SEG_B_Pin, b);
  HAL_GPIO_WritePin(LED_7SEG_C_GPIO_Port, LED_7SEG_C_Pin, c);
  HAL_GPIO_WritePin(LED_7SEG_D_GPIO_Port, LED_7SEG_D_Pin, d);
  HAL_GPIO_WritePin(LED_7SEG_E_GPIO_Port, LED_7SEG_E_Pin, e);
  HAL_GPIO_WritePin(LED_7SEG_F_GPIO_Port, LED_7SEG_F_Pin, f);
  HAL_GPIO_WritePin(LED_7SEG_G_GPIO_Port, LED_7SEG_G_Pin, g);
}

void display7SEG(int num){
  switch(num){
	  case 0:
		LED_7SEG_MODE(0,0,0,0,0,0,1);
		break;
	  case 1:
		LED_7SEG_MODE(1,0,0,1,1,1,1);
		break;
	  case 2:
		LED_7SEG_MODE(0,0,1,0,0,1,0);
		break;
	  case 3:
		LED_7SEG_MODE(0,0,0,0,1,1,0);
		break;
	  case 4:
		LED_7SEG_MODE(1,0,0,1,1,0,0);
		break;
	  case 5:
		LED_7SEG_MODE(0,1,0,0,1,0,0);
		break;
	  case 6:
		LED_7SEG_MODE(0,1,0,0,0,0,0);
		break;
	  case 7:
		LED_7SEG_MODE(0,0,0,1,1,1,1);
		break;
	  case 8:
		LED_7SEG_MODE(0,0,0,0,0,0,0);
		break;
	  case 9:
		LED_7SEG_MODE(0,0,0,0,1,0,0);
		break;
  }
}

void update_7SEG_mode(int index){
  switch(index){
	  case 0:
		HAL_GPIO_WritePin(LED_7SEG_EN0_GPIO_Port, LED_7SEG_EN0_Pin, 0);
		HAL_GPIO_WritePin(LED_7SEG_EN1_GPIO_Port, LED_7SEG_EN1_Pin, 1);
		HAL_GPIO_WritePin(LED_7SEG_EN2_GPIO_Port, LED_7SEG_EN2_Pin, 1);
		HAL_GPIO_WritePin(LED_7SEG_EN3_GPIO_Port, LED_7SEG_EN3_Pin, 1);
		display7SEG(led_buffer[0]);
		break;
	  case 1:
		HAL_GPIO_WritePin(LED_7SEG_EN0_GPIO_Port, LED_7SEG_EN0_Pin, 1);
		HAL_GPIO_WritePin(LED_7SEG_EN1_GPIO_Port, LED_7SEG_EN1_Pin, 0);
		HAL_GPIO_WritePin(LED_7SEG_EN2_GPIO_Port, LED_7SEG_EN2_Pin, 1);
		HAL_GPIO_WritePin(LED_7SEG_EN3_GPIO_Port, LED_7SEG_EN3_Pin, 1);
		display7SEG(led_buffer[1]);
		break;
	  case 2:
		HAL_GPIO_WritePin(LED_7SEG_EN0_GPIO_Port, LED_7SEG_EN0_Pin, 1);
		HAL_GPIO_WritePin(LED_7SEG_EN1_GPIO_Port, LED_7SEG_EN1_Pin, 1);
		HAL_GPIO_WritePin(LED_7SEG_EN2_GPIO_Port, LED_7SEG_EN2_Pin, 1);
		HAL_GPIO_WritePin(LED_7SEG_EN3_GPIO_Port, LED_7SEG_EN3_Pin, 0);
		display7SEG(led_buffer[2]);
		break;
	  case 3:
		HAL_GPIO_WritePin(LED_7SEG_EN0_GPIO_Port, LED_7SEG_EN0_Pin, 1);
		HAL_GPIO_WritePin(LED_7SEG_EN1_GPIO_Port, LED_7SEG_EN1_Pin, 1);
		HAL_GPIO_WritePin(LED_7SEG_EN2_GPIO_Port, LED_7SEG_EN2_Pin, 0);
		HAL_GPIO_WritePin(LED_7SEG_EN3_GPIO_Port, LED_7SEG_EN3_Pin, 1);
		display7SEG(led_buffer[3]);
		break;
	  default:
		  break;
  }
}
