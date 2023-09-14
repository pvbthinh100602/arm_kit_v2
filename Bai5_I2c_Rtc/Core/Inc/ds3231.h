/*
 * ds3231.h
 *
 *  Created on: Aug 25, 2023
 *      Author: phamv
 */

#ifndef INC_DS3231_H_
#define INC_DS3231_H_

#include "i2c.h"
#include "utils.h"

void ds3231_init();

void ds3231_Write(uint8_t address);

void ds3231_ReadTime();

uint8_t ds3231_GetHour();

uint8_t ds3231_GetMin();

uint8_t ds3231_GetSec();



#endif /* INC_DS3231_H_ */
