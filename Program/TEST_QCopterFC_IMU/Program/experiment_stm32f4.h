/* #include "experiment_stm32f4.h" */

#ifndef __EXPERIMENT_STM32F4_H
#define __EXPERIMENT_STM32F4_H

#include "stm32f4xx.h"
/*=====================================================================================================*/
/*=====================================================================================================*/
#define KEY   PBI(2)
#define LED_R PCO(15)
#define LED_G PCO(14)
#define LED_B PCO(13)
/*=====================================================================================================*/
/*=====================================================================================================*/
typedef __IO enum {
  Mode_GyrCorrect,
  Mode_AccCorrect,  // 僅在水平狀態下做校正
  Mode_MagCorrect,
  Mode_Quaternion,
  Mode_Algorithm
} Sensor_Mode;
/*=====================================================================================================*/
/*=====================================================================================================*/
extern Sensor_Mode SensorMode;
/*=====================================================================================================*/
/*=====================================================================================================*/
#endif	
