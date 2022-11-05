/*
 * fsm_longpress_buttons_run.c
 *
 *  Created on: Nov 6, 2022
 *      Author: ADMIN
 */

#include "fsm_longpress_buttons_run.h"

#include "fsm_automatic_buttons_run.h"
#include "button.h"
#include "display7SEG.h"
#include "fsm_longpress_buttons_run.h"

void fsm_longpress_buttons_run(){
switch (status){
case LONG_0:
	display7SEG(0);
	if (timer2_flag == 1 ){
	timer2_flag = 0;
	}
	if ( INC_flag == 1){
	INC_flag = 0;
	status = LONG_1;
	setTimer2(100);
	}
break;
case LONG_1:
	display7SEG(1);
	if (timer2_flag ==1 ){
	timer2_flag = 0;
	}
	if (INC_flag == 1){
	INC_flag = 0;
	status = LONG_2;
	setTimer2(100);
	}
break;
case LONG_2:
	display7SEG(2);
	if (timer2_flag ==1 ){
	timer2_flag = 0;
	}
	if (INC_flag == 1){
	INC_flag =0;
	status = LONG_3;
	setTimer2(100);
	}
break;
case LONG_3:
	display7SEG(3);
	if (timer2_flag ==1 ){
	timer2_flag = 0;
	}
	if (INC_flag == 1){

	INC_flag =0;
	status = LONG_4;
	setTimer2(100);
	}
break;
case LONG_4:
	display7SEG(4);
	if (timer2_flag ==1 ){
	timer2_flag = 0;
	}
	if (INC_flag == 1){

	INC_flag =0;
	status = LONG_5;
	setTimer2(100);
	}
break;
case LONG_5:
	display7SEG(5);
	if (timer2_flag ==1 ){
	timer2_flag = 0;
	}
	if (INC_flag == 1){

	INC_flag =0;
	status = LONG_6;
	setTimer2(100);
	}
	break;
case LONG_6:
	display7SEG(6);
	if (timer2_flag ==1 ){
		timer2_flag = 0;
		status = LONG_7;
		setTimer2(100);
}
	break;
case LONG_7:
	display7SEG(7);
if (timer2_flag ==1 ){
timer2_flag = 0;
status = LONG_8;
setTimer2(100);
}
break;
case LONG_8:
	display7SEG(8);
if (timer2_flag ==1 ){
timer2_flag = 0;
status = LONG_9;
setTimer2(100);}
break;
case LONG_9:
	display7SEG(9);
if (timer2_flag == 1 ){
timer2_flag = 0;
status = LONG_0;
setTimer2(100);}
break;
default :
break;
}
}
