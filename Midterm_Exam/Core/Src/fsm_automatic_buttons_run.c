/*
 * fsm_automatic_buttons_run.c
 *
 *  Created on: Nov 5, 2022
 *      Author: ADMIN
 */
#include "fsm_automatic_buttons_run.h"
#include "global.h"
#include "button.h"
#include "main.h"
#include "display7SEG.h"

void fsm_automatic_buttons_run(){
	switch(status){
	case INIT:
		ledstatus = LED_INIT;
		display7SEG(0);
		status = BUTT_0;
		setTimer2(1000);
		break;
	case AUTO_0:
		//TODO
		if(RESET_flag == 1){
			RESET_flag = 0;
			status = INIT;
		}
		display7SEG(0);
		if (timer2_flag == 1 ){
			timer2_flag = 0;
			status = AUTO_1;
			setTimer2(100);

		}
		if(INC_flag == 1){
			INC_flag = 0;
			status = BUTT_1;
		}
		if(DEC_flag == 1){
			DEC_flag = 0;
			status = BUTT_9;
		}
		break;
	case AUTO_1:
		//TODO
		if(RESET_flag == 1){
			RESET_flag = 0;
			status = INIT;
		}
		display7SEG(1);
		if (timer2_flag == 1){
			timer2_flag =0;
			status = AUTO_1;
			setTimer2(100);
		}
		if (INC_flag == 1){
			INC_flag = 0;
			status = BUTT_2;
		}
		if(DEC_flag == 1){
			DEC_flag = 0;
			status = BUTT_0;
		}
		break;
	case AUTO_2:
		//TODO
		if(RESET_flag == 1){
			RESET_flag = 0;
			status = INIT;
		}
		display7SEG(2);
		if (timer2_flag == 1){
			timer2_flag =0;
			status = AUTO_2;
			setTimer2(100);
		}
		if (INC_flag == 1){
			INC_flag = 0;
			status = BUTT_3;
		}
		if(DEC_flag == 1){
			DEC_flag = 0;
			status = BUTT_1;
		}
		break;
	case AUTO_3:
		//TODO
		if(RESET_flag == 1){
			RESET_flag = 0;
			status = INIT;
		}
		display7SEG(3);
		if (timer2_flag == 1){
			timer2_flag =0;
			status = AUTO_3;
			setTimer2(100);
		}
		if (INC_flag == 1){
			INC_flag = 0;
			status = BUTT_4;
		}
		if(DEC_flag == 1){
			DEC_flag = 0;
			status = BUTT_2;
		}
		break;
	case AUTO_4:
		//TODO
		if(RESET_flag == 1){
			RESET_flag = 0;
			status = INIT;
		}
		display7SEG(4);
		if (timer2_flag == 1){
			timer2_flag =0;
			status = AUTO_4;
			setTimer2(100);
		}
		if (INC_flag == 1){
			INC_flag = 0;
			status = BUTT_5;
		}
		if(DEC_flag == 1){
			DEC_flag = 0;
			status = BUTT_3;
		}
		break;
	case AUTO_5:
		//TODO
		if(RESET_flag == 1){
			RESET_flag = 0;
			status = INIT;
		}
		display7SEG(5);
		if (timer2_flag == 1){
			timer2_flag =0;
			status = AUTO_5;
			setTimer2(100);
		}
		if (INC_flag == 1){
			INC_flag = 0;
			status = BUTT_6;
		}
		if(DEC_flag == 1){
			DEC_flag = 0;
			status = BUTT_4;
		}
		break;
	case AUTO_6:
		//TODO
		if(RESET_flag == 1){
			RESET_flag = 0;
			status = INIT;
		}
		display7SEG(6);
		if (timer2_flag == 1){
			timer2_flag =0;
			status = AUTO_6;
			setTimer2(100);
		}
		if (INC_flag == 1){
			INC_flag = 0;
			status = BUTT_7;
		}
		if(DEC_flag == 1){
			DEC_flag = 0;
			status = BUTT_5;
		}
	case AUTO_7:
		//TODO
		if(RESET_flag == 1){
			RESET_flag = 0;
			status = INIT;
		}
		display7SEG(7);
		if (timer2_flag == 1){
			timer2_flag =0;
			status = AUTO_7;
			setTimer2(100);
		}
		if (INC_flag == 1){
			INC_flag = 0;
			status = BUTT_8;
		}
		if(DEC_flag == 1){
			DEC_flag = 0;
			status = BUTT_6;
		}
		break;
	case AUTO_8:
		//TODO
		if(RESET_flag == 1){
			RESET_flag = 0;
			status = INIT;
		}
		display7SEG(8);
		if (timer2_flag == 1){
			timer2_flag =0;
			status = AUTO_8;
			setTimer2(100);
		}
		if (INC_flag == 1){
			INC_flag = 0;
			status = BUTT_9;
		}
		if(DEC_flag == 1){
			DEC_flag = 0;
			status = BUTT_7;
		}
		break;
	case AUTO_9:
		//TODO
		display7SEG(9);
		if (timer2_flag == 1){
			timer2_flag =0;
			status = AUTO_9;
			setTimer2(100);
		}
		if(RESET_flag == 1){
			RESET_flag = 0;
			status = INIT;
		}
		if (INC_flag == 1){
			INC_flag = 0;
			status = BUTT_0;
		}
		if(DEC_flag == 1){
			DEC_flag = 0;
			status = BUTT_8;
		}
		break;
	default:
		break;
	}
}

