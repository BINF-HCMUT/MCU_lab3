/*
 * 7segment.c
 *
 *  Created on: Nov 13, 2022
 *      Author: admin
 */


#include "7segment.h"
#include "main.h"

uint8_t segmentNumber[10] = {
	0x00,	//0
	0x01,	//1
	0x02,	//2
	0x03,	//3
	0x04,	//4
	0x05,	//5
	0x06,	//6
	0x07,	//7
	0x08,	//8
	0x09	//9
};

void displayLED1(uint8_t value){
	uint8_t number1 = segmentNumber[value/10];
	uint8_t number2 = segmentNumber[value%10];

// 8 bits for 2 4bit LED
	int b0,b1,b2,b3,b4,b5,b6,b7;

	b0 = number1 & 1;	//A0
	b1 = number1 & 2;	//B0
	b2 = number1 & 4;	//C0
	b3 = number1 & 8;	//D0

	b4 = number2 & 1;	//A1
	b5 = number2 & 2;	//B1
	b6 = number2 & 4;	//C1
	b7 = number2 & 8;	//D1

	HAL_GPIO_WritePin(GPIOB, A0_Pin, b0);
	HAL_GPIO_WritePin(GPIOB, B0_Pin, b1);
	HAL_GPIO_WritePin(GPIOB, C0_Pin, b2);
	HAL_GPIO_WritePin(GPIOB, D0_Pin, b3);
	HAL_GPIO_WritePin(GPIOB, A1_Pin, b4);
	HAL_GPIO_WritePin(GPIOB, B1_Pin, b5);
	HAL_GPIO_WritePin(GPIOB, C1_Pin, b6);
	HAL_GPIO_WritePin(GPIOB, D1_Pin, b7);
}

void displayLED2(uint8_t value){
	uint8_t number1 = segmentNumber[value/10];
	uint8_t number2 = segmentNumber[value%10];

// 8 bits for 2 4bit LED
	int b0,b1,b2,b3,b4,b5,b6,b7;

	b0 = number1 & 1;	//A0
	b1 = number1 & 2;	//B0
	b2 = number1 & 4;	//C0
	b3 = number1 & 8;	//D0

	b4 = number2 & 1;	//A1
	b5 = number2 & 2;	//B1
	b6 = number2 & 4;	//C1
	b7 = number2 & 8;	//D1

	HAL_GPIO_WritePin(GPIOB, A2_Pin, b0);
	HAL_GPIO_WritePin(GPIOB, B2_Pin, b1);
	HAL_GPIO_WritePin(GPIOB, C2_Pin, b2);
	HAL_GPIO_WritePin(GPIOB, D2_Pin, b3);
	HAL_GPIO_WritePin(GPIOB, A3_Pin, b4);
	HAL_GPIO_WritePin(GPIOB, B3_Pin, b5);
	HAL_GPIO_WritePin(GPIOB, C3_Pin, b6);
	HAL_GPIO_WritePin(GPIOB, D3_Pin, b7);
}
