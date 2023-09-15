/*
 * sim.c
 *
 *  Created on: Sep 15, 2023
 *      Author: phamv
 */

#include "sim.h"

void sim_init(){
	HAL_GPIO_WritePin(SIM_PWR_GPIO_Port, SIM_PWR_Pin, 1);
	HAL_UART_Transmit(&huart4, "AT+CMGF=1\r\n", 11, 10);
}

void sim_SendSMS() {
	uint8_t bytes = 0x1A;
	HAL_UART_Transmit(&huart4, "AT+CMGS=\"0902xxxxxx\"\r\n", 22, 10);
	HAL_UART_Transmit(&huart4, "Hello from sim.", 15, 10);
	HAL_UART_Transmit(&huart4, &bytes, 1, 10);
//	uart_SendString(&huart4, "AT+CMGS=\"+0902711272\"\r\n");
//	uart_SendString(&huart4, "Xinchao");
//	uart_SendBytes(&huart4, &bytes, 1);

}
