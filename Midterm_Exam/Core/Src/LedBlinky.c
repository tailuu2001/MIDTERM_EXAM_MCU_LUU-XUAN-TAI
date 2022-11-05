/*
 * LedBlinky.c
 *
 *  Created on: Nov 5, 2022
 *      Author: ADMIN
 */

#include "LedBlinky.h"


void fsm_ledBlinky_run (){
	switch (ledstatus){
	case LED_INIT:
		ledstatus = LED_ON;
		setTimer3(100);
		break;
	case LED_ON :
		if (timer3_flag == 1){
			timer3_flag = 0;
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, GPIO_PIN_RESET);
			ledstatus = LED_OFF;
			setTimer3(100);
		}
		break;
		case LED_OFF :
			if (timer3_flag == 1){
				timer3_flag = 0;
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, GPIO_PIN_SET);
				ledstatus = LED_ON;
				setTimer3(100);
			}
			break ;
	}
}

