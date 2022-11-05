/*
 * button.h
 *
 *  Created on: Nov 5, 2022
 *      Author: ADMIN
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"


#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET

extern int RESET_flag;
extern int INC_flag;
extern int DEC_flag;

void getKeyInput();
void getKeyInput1();
void getKeyInput2();

#endif /* INC_BUTTON_H_ */
