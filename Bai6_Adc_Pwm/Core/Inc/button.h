/*
 * button.h
 *
 *  Created on: Aug 23, 2023
 *      Author: phamv
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "spi.h"
#include "gpio.h"

extern uint16_t button_count[16];

void button_init();
void button_Scan();

#endif /* INC_BUTTON_H_ */
