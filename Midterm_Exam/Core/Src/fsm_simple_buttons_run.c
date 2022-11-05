/*
 * fsm_simple_buttons_run.c
 *
 *  Created on: Nov 5, 2022
 *      Author: ADMIN
 */
#include "fsm_simple_buttons_run.h"
#include "display7SEG.h"

void fsm_simple_buttons_run(){
	switch(status){
	case BUTT_0:
		//TODO
		display7SEG(0);
		if(RESET_flag == 1){
			RESET_flag = 0;
			status = BUTT_0;
		}
		if(INC_flag == 1){
			INC_flag = 0;
			status = BUTT_1;
			setTimer2(200);
		}
		if(DEC_flag == 1){
			DEC_flag = 0;
			status = BUTT_9;
			setTimer2(200);
		}
		if (timer2_flag == 1){
			timer2_flag = 0;
		}
		status = AUTO_0;
		break;
	case BUTT_1:
		//TODO
		display7SEG(1);
		if(RESET_flag == 1){
			RESET_flag = 0;
			status = BUTT_0;
		}
		if(INC_flag == 1){
			INC_flag = 0;
			status = BUTT_2;
			setTimer2(200);
		}
		if(DEC_flag == 1){
			DEC_flag = 0;
			status = BUTT_0;
			setTimer2(200);
		}
		if (timer2_flag == 1){
			timer2_flag = 0;
		}
		status = AUTO_1;
		break;
	case BUTT_2:
		//TODO
		display7SEG(2);
		if(RESET_flag == 1){
			RESET_flag = 0;
			status = BUTT_0;
		}
		if(INC_flag == 1){
			INC_flag = 0;
			status = BUTT_3;
			setTimer2(200);
		}
		if(DEC_flag == 1){
			DEC_flag = 0;
			status = BUTT_1;
			setTimer2(200);
		}
		if (timer2_flag == 1){
			timer2_flag = 0;
		}
		status = AUTO_2;
		break;
	case BUTT_3:
		//TODO
		display7SEG(3);
		if(RESET_flag == 1){
			RESET_flag = 0;
			status = BUTT_0;
		}
		if(INC_flag == 1){
			INC_flag = 0;
			status = BUTT_4;
			setTimer2(200);
		}
		if(DEC_flag == 1){
			DEC_flag = 0;
			status = BUTT_2;
			setTimer2(200);
		}
		if (timer2_flag == 1){
			timer2_flag = 0;
		}
		status = AUTO_3;
		break;
	case BUTT_4:
		//TODO
		display7SEG(4);
		if(RESET_flag == 1){
			RESET_flag = 0;
			status = BUTT_0;
		}
		if(INC_flag == 1){
			INC_flag = 0;
			status = BUTT_5;
			setTimer2(200);
		}
		if(DEC_flag == 1){
			DEC_flag = 0;
			status = BUTT_3;
			setTimer2(200);
		}
		if (timer2_flag == 1){
			timer2_flag = 0;
		}
		status = AUTO_4;
		break;
	case BUTT_5:
		//TODO
		display7SEG(5);
		if(RESET_flag == 1){
			RESET_flag = 0;
			status = BUTT_0;
		}
		if(INC_flag == 1){
			INC_flag = 0;
			status = BUTT_6;
			setTimer2(200);
		}
		if(DEC_flag == 1){
			DEC_flag = 0;
			status = BUTT_4;
			setTimer2(200);
		}
		if (timer2_flag == 1){
			timer2_flag = 0;
		}
		status = AUTO_5;
		break;
	case BUTT_6:
		//TODO
		display7SEG(6);
		if(RESET_flag == 1){
			RESET_flag = 0;
			status = BUTT_0;
		}
		if(INC_flag == 1){
			INC_flag = 0;
			status = BUTT_7;
			setTimer2(200);
		}
		if(DEC_flag == 1){
			DEC_flag = 0;
			status = BUTT_5;
			setTimer2(200);
		}
		if (timer2_flag == 1){
			timer2_flag = 0;
		}
		status = AUTO_6;
		break;
	case BUTT_7:
		//TODO
		display7SEG(7);
		if(RESET_flag == 1){
			RESET_flag = 0;
			status = BUTT_0;
		}
		if(INC_flag == 1){
			INC_flag = 0;
			status = BUTT_8;
			setTimer2(200);
		}
		if(DEC_flag == 1){
			DEC_flag = 0;
			status = BUTT_6;
			setTimer2(200);
		}
		if (timer2_flag == 1){
			timer2_flag = 0;
		}
		status = AUTO_7;
		break;
	case BUTT_8:
		//TODO
		display7SEG(8);
		if(RESET_flag == 1){
			RESET_flag = 0;
			status = BUTT_0;
		}
		if(INC_flag == 1){
			INC_flag = 0;
			status = BUTT_9;
			setTimer2(200);
		}
		if(DEC_flag == 1){
			DEC_flag = 0;
			status = BUTT_7;
			setTimer2(200);
		}
		if (timer2_flag == 1){
			timer2_flag = 0;
		}
		status = AUTO_8;
		break;
	case BUTT_9:
		//TODO
		display7SEG(9);
		if(RESET_flag == 1){
			RESET_flag = 0;
			status = BUTT_0;
		}
		if(INC_flag == 1){
			INC_flag = 0;
			status = BUTT_0;
			setTimer2(200);
		}
		if(DEC_flag == 1){
			DEC_flag = 0;
			status = BUTT_8;
			setTimer2(200);
		}
		if (timer2_flag == 1){
			timer2_flag = 0;
		}
		status = AUTO_9;
		break;
	default:
		break;
		}
	}

