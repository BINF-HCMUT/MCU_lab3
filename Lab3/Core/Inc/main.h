/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define Button0_Pin GPIO_PIN_1
#define Button0_GPIO_Port GPIOA
#define Button1_Pin GPIO_PIN_2
#define Button1_GPIO_Port GPIOA
#define Button2_Pin GPIO_PIN_3
#define Button2_GPIO_Port GPIOA
#define RED0_Pin GPIO_PIN_4
#define RED0_GPIO_Port GPIOA
#define YELLOW0_Pin GPIO_PIN_5
#define YELLOW0_GPIO_Port GPIOA
#define GREEN0_Pin GPIO_PIN_6
#define GREEN0_GPIO_Port GPIOA
#define RED1_Pin GPIO_PIN_7
#define RED1_GPIO_Port GPIOA
#define A0_Pin GPIO_PIN_0
#define A0_GPIO_Port GPIOB
#define B0_Pin GPIO_PIN_1
#define B0_GPIO_Port GPIOB
#define C0_Pin GPIO_PIN_2
#define C0_GPIO_Port GPIOB
#define C2_Pin GPIO_PIN_10
#define C2_GPIO_Port GPIOB
#define D2_Pin GPIO_PIN_11
#define D2_GPIO_Port GPIOB
#define A3_Pin GPIO_PIN_12
#define A3_GPIO_Port GPIOB
#define B3_Pin GPIO_PIN_13
#define B3_GPIO_Port GPIOB
#define C3_Pin GPIO_PIN_14
#define C3_GPIO_Port GPIOB
#define D3_Pin GPIO_PIN_15
#define D3_GPIO_Port GPIOB
#define YELLOW1_Pin GPIO_PIN_8
#define YELLOW1_GPIO_Port GPIOA
#define GREEN1_Pin GPIO_PIN_9
#define GREEN1_GPIO_Port GPIOA
#define D0_Pin GPIO_PIN_3
#define D0_GPIO_Port GPIOB
#define A1_Pin GPIO_PIN_4
#define A1_GPIO_Port GPIOB
#define B1_Pin GPIO_PIN_5
#define B1_GPIO_Port GPIOB
#define C1_Pin GPIO_PIN_6
#define C1_GPIO_Port GPIOB
#define D1_Pin GPIO_PIN_7
#define D1_GPIO_Port GPIOB
#define A2_Pin GPIO_PIN_8
#define A2_GPIO_Port GPIOB
#define B2_Pin GPIO_PIN_9
#define B2_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
