/*
 * buzzer.h
 *
 *  Created on: Sep 15, 2023
 *      Author: phamv
 */

#ifndef INC_BUZZER_H_
#define INC_BUZZER_H_

#include "tim.h"

void buzzer_init();

void buzzer_Ring();

void buzzer_SetVolume(uint8_t _duty_cycle);

#endif /* INC_BUZZER_H_ */
