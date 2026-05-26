/*
 * semana_03_ejercicios.c
 *
 *  Created on: May 24, 2026
 *      Author: ingfisica
 */

/*
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN ;
	GPIOA->MODER &= ~(0x3 << 10) ;
	GPIOA->MODER |= (0x1 << 10) ;
	GPIOA->ODR |= 0x20 ;

	GPIOA->ODR &= ~(0x1 << 5) ;
*/


#include <stdint.h>
#include <stm32f4xx.h>

int main(void)
{

	#if (__FPU_PRESENT == 1) && (__FPU_USED == 1)

		SCB->CPACR |= ((3UL << (10*2)) | (3UL << (11*2)));

	#endif

	RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN ;
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIOCEN ;

	GPIOA->MODER &= ~(0x3 << 10) ;
	GPIOA->MODER |= (0x1 << 10) ;
	GPIOC->MODER &= ~(0x3 << 26) ;

	GPIOC->PUPDR &= ~(0x3 << 26) ;
	GPIOC->PUPDR |= (0x1 << 26) ;

    /* Loop forever */
	while(1)

	{

		if ((GPIOC->IDR & (1 << 13)) == 0)

		{
			// Botón presionado

			//GPIOA->BSRR = (1 << 5) ;

			GPIOA->ODR |= 0x1 << 5 ;

		} else {
			// Botón suelto

			//GPIOA->BSRR = (1 << 21) ;

			GPIOA->ODR &= ~(0x1 << 5) ;

		}


	}
}
