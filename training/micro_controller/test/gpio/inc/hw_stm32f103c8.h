
#ifndef __HW_STM32F103C8_H__
#define __HW_STM32F103C8_H__

#define write_reg(addr, value)    *((unsigned long int *)(addr)) = value
#define read_reg(addr, mask)      *((unsigned long int *)(addr)) & (mask)

#define BASE_ADD_GPIO			  0x40011000u
#define GPIO_MODER 				  (BASE_ADDR_GPIO + 0x04u)
#define GPIO_MODER_INPUT		  0x00u
#define GPIO_MODER_OUTPUT		  0x01u
#define GPIO_MODER_ALT			  0x02u



/* Led LED - PC13 */
#define LED_PIN			 		  13


/* end file */
#endif /* __HW_STM32F103C8_H__ */

