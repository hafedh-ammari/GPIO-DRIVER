/**
  ******************************************************************************
  * @file    main.c
  * @author  Ammari Hafedh
  * @brief   GPIO DRIVER 
  * @version V1.0.0
  * @date    16-11-2022
  *****************************************************************************/
/* Includes ------------------------------------------------------------------*/
#include "f1.h"
//#include "stm32f4xx.h"
/* Private function prototypes -----------------------------------------------*/

/* Private functions ---------------------------------------------------------*/
/**
  * @brief  Main program
  * @param  None
  * @retval None
  */
int main(void)
{
  
  GPIO_Clock_Enable(GPIOD);
  GPIO_Config(GPIOD,PIN12,OUTPUT,OUTPUT_PUSH_PULL);
   
  while (1)
  {}
}


/**************************************END OF FILE**************************************/
