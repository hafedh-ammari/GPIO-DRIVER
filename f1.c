/**
  ******************************************************************************
  * @file    f1.c
  * @author  Ammari Hafedh
  * @brief   GPIO DRIVER
  * @version V1.0.0
  * @date    16-11-2022
  *****************************************************************************/

#include "f1.h" 
void GPIO_Clock_Enable(uint32_t *GPIOx)
{
 assert(GPIOx ==GPIOA || GPIOx ==GPIOB ||GPIOx ==GPIOC ||GPIOx ==GPIOD );
 uint16_t *RCCAHB1 =(uint16_t *)(0x40023830);
  
  
  if (GPIOx == GPIOA)
  {
    *RCCAHB1 |= (1<<0);
  }
  else if (GPIOx == GPIOB)
  {

    *RCCAHB1 |= (1<<1);
  }
  else if (GPIOx == GPIOC)
  {

    *RCCAHB1 |= (1<<2);
  }
  else if (GPIOx == GPIOD)
  {
    
    *RCCAHB1 |= (1<<3);
  }
    
} 
void GPIO_Config(uint32_t *GPIOx, uint8_t Pin, uint8_t Mode, uint8_t Type)
 
{ 
  assert(Pin >= PIN0 && Pin <= PIN15 );
  assert(Mode == INPUT || Mode == OUTPUT || Mode == ALTERNATE || Mode == ANALOG_INPUT );
  assert(Type == OUTPUT_PUSH_PULL || Type == OUTPUT_OPEN_DRAIN);
  
  uint32_t GPIOx_MODER = (uint32_t)(0X40020000);
  uint32_t GPIOx_OTYPER = (uint16_t)(0X40020c00);
  
  if (GPIOx_MODER == 00) 
{ 
  uint8_t Mode = INPUT;
}
 else if (GPIOx_MODER == 01)
{  
  uint8_t Mode = OUTPUT;
}
 else if (GPIOx_MODER == 10) 
{
  uint8_t Mode = ALTERNATE;
}
  else if (GPIOx_MODER == 11)
{   
  uint8_t Mode = ANALOG_INPUT;    
}
  
  if (GPIOx_OTYPER == 0) 
{
  uint8_t Type = OUTPUT_PUSH_PULL;
}
  if (GPIOx_OTYPER == 1)
{
  uint8_t Type = OUTPUT_OPEN_DRAIN;
  
}
}
