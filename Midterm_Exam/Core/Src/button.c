/*
 * button.c
 *
 *  Created on: Nov 5, 2022
 *      Author: ADMIN
 */

#include "button.h"

int RESET_flag = 0;
int INC_flag = 0;
int DEC_flag = 0;

int KeyReg0 = NORMAL_STATE;
int KeyReg1 = NORMAL_STATE;
int KeyReg2 = NORMAL_STATE;

int KeyReg4 = NORMAL_STATE;
int KeyReg5 = NORMAL_STATE;
int KeyReg6 = NORMAL_STATE;

int KeyReg8 = NORMAL_STATE;
int KeyReg9 = NORMAL_STATE;
int KeyReg10 = NORMAL_STATE;

int KeyReg3 = NORMAL_STATE;
int KeyReg7 = NORMAL_STATE;
int KeyReg11 = NORMAL_STATE;
int TimerForKeyPress = 200;

void subKeyProcess(){
	//TODO
	RESET_flag = 1;
}
void subKeyProcess1(){
	INC_flag = 1;
}
void subKeyProcess2(){
	DEC_flag = 1;
}
void getKeyInput(){
	KeyReg0 = KeyReg1;
	KeyReg1 = KeyReg2;
	KeyReg2 = HAL_GPIO_ReadPin(RESET_GPIO_Port, RESET_Pin);
	if((KeyReg0 == KeyReg1) && (KeyReg1 == KeyReg2)){
		if(KeyReg3 != KeyReg2){
			KeyReg3 = KeyReg2;
			if(KeyReg2 == PRESSED_STATE){
				//TODO
				subKeyProcess();
				TimerForKeyPress = 200;
			}
		}else{
			TimerForKeyPress--;
			if(TimerForKeyPress == 0){
				KeyReg3 = NORMAL_STATE;
				TimerForKeyPress = 200;
				//TODO
			}
		}
	}
}
void getKeyInput1(){
	KeyReg4 = KeyReg5;
	KeyReg5 = KeyReg6;
	KeyReg6 = HAL_GPIO_ReadPin(INC_GPIO_Port, INC_Pin);
		if((KeyReg4 == KeyReg5) && (KeyReg5 == KeyReg6)){
			if(KeyReg7 != KeyReg6){
				KeyReg7 = KeyReg6;
				if(KeyReg6 == PRESSED_STATE){
					//TODO
					subKeyProcess1();
					TimerForKeyPress = 300;
				}
			}else{
				TimerForKeyPress--;
				if(TimerForKeyPress == 0){
					if(KeyReg7 == PRESSED_STATE){
						INC_flag = 1;
						TimerForKeyPress = 100;
					}
				}
			}
		}
}
void getKeyInput2(){
	KeyReg8 = KeyReg9;
	KeyReg9 = KeyReg10;
	KeyReg10 = HAL_GPIO_ReadPin(DEC_GPIO_Port, DEC_Pin);
		if((KeyReg8 == KeyReg9) && (KeyReg9 == KeyReg10)){
			if(KeyReg11 != KeyReg10){
				KeyReg11 = KeyReg10;
				if(KeyReg10 == PRESSED_STATE){
					//TODO
					subKeyProcess2();
					TimerForKeyPress = 300;
				}
			}else{
				TimerForKeyPress--;
				if(TimerForKeyPress == 0){
					if(KeyReg11 == PRESSED_STATE){
						DEC_flag = 1;
						TimerForKeyPress = 100;
					}
				}
			}
		}
}
