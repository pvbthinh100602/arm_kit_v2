/*
 * servo.c
 *
 *  Created on: Sep 15, 2023
 *      Author: phamv
 */

#include "servo.h"

uint8_t counter_servo = 0;
uint8_t duty = 1;

void servo_init(){
	HAL_GPIO_WritePin(SERVO_GPIO_Port, SERVO_Pin, 1);
}

void servo_Run(){
 counter_servo = (counter_servo + 1)%20;
 if(counter_servo >= duty) HAL_GPIO_WritePin(SERVO_GPIO_Port, SERVO_Pin, 0);
 else HAL_GPIO_WritePin(SERVO_GPIO_Port, SERVO_Pin, 1);
}

void servo_SetAngle(uint8_t angle){
	if(angle == 0){
		duty = 1;
	} else duty = 2;
}
