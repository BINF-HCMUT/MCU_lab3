/*
 * M1_fsm.c
 *
 *  Created on: Nov 13, 2022
 *      Author: admin
 */



#include"M1_fsm.h"
void M1_fsm_run(){
	switch(status){
	case INIT:
		count1 = 30;
		count2 = 25;
		status = M1_RED_GREEN;
		setTimer1(1000);	//timer 1 to countdown the number display on LED
		setTimer2(25000);	//timer 2 to perform 2 traffic light
		break;
	case M1_RED_GREEN:
		//TODO
		//Write pin for first traffic light:	RED
		HAL_GPIO_WritePin(GPIOA, RED0_Pin, 1);
		HAL_GPIO_WritePin(GPIOA, YELLOW0_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, GREEN0_Pin, 0);

		//Write pin for second traffic light:	GREEN
		HAL_GPIO_WritePin(GPIOA, RED1_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, YELLOW1_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, GREEN1_Pin, 1);

		displayLED1(count1);
		displayLED2(count2);

		if(timer1_flag == 1){
			setTimer1(1000);
			count1--;
			count2--;
		}

		if(timer2_flag == 1){
			status = M1_RED_YELLOW;
			count1 = 5;
			count2 = 5;
			setTimer1(1000);
			setTimer2(5000);
		}
		break;
	case M1_RED_YELLOW:
		//TODO
		//Write pin for first traffic light:	RED
		HAL_GPIO_WritePin(GPIOA, RED0_Pin, 1);
		HAL_GPIO_WritePin(GPIOA, YELLOW0_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, GREEN0_Pin, 0);

		//Write pin for second traffic light:	YELLOW
		HAL_GPIO_WritePin(GPIOA, RED1_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, YELLOW1_Pin, 1);
		HAL_GPIO_WritePin(GPIOA, GREEN1_Pin, 0);

		displayLED1(count1);
		displayLED2(count2);

		if(timer1_flag == 1){
			setTimer1(1000);
			count1--;
			count2--;
		}

		if(timer2_flag == 1){
			status = M1_GREEN_RED;
			count1 = 25;
			count2 = 30;
			setTimer1(1000);
			setTimer2(25000);
		}
		break;
	case M1_GREEN_RED:
		//TODO
		//Write pin for first traffic light:	GREEN
		HAL_GPIO_WritePin(GPIOA, RED0_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, YELLOW0_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, GREEN0_Pin, 1);

		//Write pin for second traffic light:	RED
		HAL_GPIO_WritePin(GPIOA, RED1_Pin, 1);
		HAL_GPIO_WritePin(GPIOA, YELLOW1_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, GREEN1_Pin, 0);

		displayLED1(count1);
		displayLED2(count2);

		if(timer1_flag == 1){
			setTimer1(1000);
			count1--;
			count2--;
		}

		if(timer2_flag == 1){
			status = M1_YELLOW_RED;
			count1 = 5;
			count2 = 5;
			setTimer1(1000);
			setTimer2(5000);
		}
		break;
	case M1_YELLOW_RED:
		//TODO
		//Write pin for first traffic light:	YELLOW
		HAL_GPIO_WritePin(GPIOA, RED0_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, YELLOW0_Pin, 1);
		HAL_GPIO_WritePin(GPIOA, GREEN0_Pin, 0);

		//Write pin for second traffic light:	RED
		HAL_GPIO_WritePin(GPIOA, RED1_Pin, 1);
		HAL_GPIO_WritePin(GPIOA, YELLOW1_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, GREEN1_Pin, 0);

		displayLED1(count1);
		displayLED2(count2);

		if(timer1_flag == 1){
			setTimer1(1000);
			count1--;
			count2--;
		}

		if(timer2_flag == 1){
			status = M1_RED_GREEN;
			count1 = 30;
			count2 = 25;
			setTimer1(1000);
			setTimer2(25000);
		}
		break;
	default:
		break;
	}
}
