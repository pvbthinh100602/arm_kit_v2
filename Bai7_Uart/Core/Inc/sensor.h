/*
 * sensor.h
 *
 *  Created on: Sep 10, 2023
 *      Author: phamv
 */

#ifndef INC_SENSOR_H_
#define INC_SENSOR_H_

#include "adc.h"

extern uint16_t adc_receive[5];
void sensor_init();

void sensor_Read();

uint16_t sensor_GetLight();

uint16_t sensor_GetVarResistor();

float sensor_GetVoltage();

float sensor_GetCurrent();

float sensor_GetTemperature();
#endif /* INC_SENSOR_H_ */
