#include "main.h"
#include "usart.h"
#include "gpio.h"
#include "chuli.h"

extern uint8_t r;
void c()
{
	switch(r)
	{
		case 1:
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_3,GPIO_PIN_SET);
		break;
		case 2:
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_3,GPIO_PIN_RESET);
		break;
	}
}