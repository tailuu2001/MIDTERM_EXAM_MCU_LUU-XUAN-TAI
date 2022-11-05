/*
 * software_timer.c
 *
 *  Created on: Nov 5, 2022
 *      Author: ADMIN
 */

#include "software_timer.h"

int timer2_counter = 0;
int timer3_counter = 0;
int timer2_flag = 0;
int timer3_flag = 0;


void setTimer2(int duration){
	timer2_counter = duration;
	timer2_flag = 0;
}
void setTimer3(int duration){
	timer3_counter = duration;
	timer3_flag = 0;
}
void timerRun(){
	if(timer2_counter > 0){
		timer2_counter--;
		if(timer2_counter <=0){
			timer2_flag = 1;
		}
	}
	if(timer3_counter > 0){
		timer3_counter--;
	if(timer3_counter <=0){
		timer3_flag = 1;
		}
	}
}
