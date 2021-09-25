#ifndef _CLOCK_H_
#define _CLOCK_H_

typedef struct
{
  union
  {
    unsigned long REG;
    struct
    {
      unsigned long HSION               : 1;
      unsigned long const HSIRDY        : 1;
      unsigned long _Reserved           : 1;
      unsigned long HSITRIM             : 5;
      unsigned long const HSICAL        : 8;
      unsigned long HSEON               : 1;
      unsigned long const HSERDY        : 1;
      unsigned long HSEPYB              : 1;
      unsigned long CSSON               : 1;
      unsigned long _Reserved1          : 4;
      unsigned long PLL_ON              : 1;
      unsigned long const PLL_RDY       : 1;
      unsigned long _Reserved2          : 6;
    } BITS;
  } CR;
  union
  {
    unsigned long REG;
    struct
    {
      unsigned long SW                  : 2;
      unsigned long const SWS           : 2;
      unsigned long HPRE                : 4;
      unsigned long PPRE1               : 3;
      unsigned long PPRE2               : 3;
      unsigned long ADCPRE              : 2;
      unsigned long PLLSRC              : 1;
      unsigned long PLLXTPRE            : 1;
      unsigned long PLLMUL              : 4;
      unsigned long USBPRE              : 1;
      unsigned long _Reserved           : 1;
      unsigned long MCO                 : 3;
      unsigned long _Reserved1          : 5;
    } BITS;
  } CFGR;
  union
  {
    unsigned long REG;
    struct
    {
      unsigned long const LSIRDYF       : 1;
      unsigned long const LSERDYF       : 1;
      unsigned long const HSIRDYF       : 1;
      unsigned long const HSERDYF       : 1;
      unsigned long const PLLRDYF       : 1;
      unsigned long _Reserved           : 2;
      unsigned long const CSSF          : 1;
      unsigned long LSIRDYIE            : 1;
      unsigned long LSERDYIE            : 1;
      unsigned long HSIRDYIE            : 1;
      unsigned long HSERDYIE            : 1;
      unsigned long PLLRDYIE            : 1;
      unsigned long _Reserved1          : 3;
      unsigned long LSIRDYC             : 1;
      unsigned long LSERDYC             : 1;
      unsigned long HSIRDYC             : 1;
      unsigned long HSERDYC             : 1;
      unsigned long PLLRDYC             : 1;
      unsigned long _Reserved2          : 2;
      unsigned long CSSC                : 1;
      unsigned long _Reserved3          : 8;
    } BITS;
  } CIR;
  union
  {
    unsigned long REG;
    struct
    {
      unsigned long AFIORST             : 1;
      unsigned long _Reserved           : 1;
      unsigned long IOPARST             : 1;
      unsigned long IOPBRST             : 1;
      unsigned long IOPCRST             : 1;
      unsigned long IOPDRST             : 1;
      unsigned long IOPERST             : 1;
      unsigned long IOPFRST             : 1;
      unsigned long IOPGRST             : 1;
      unsigned long ADC1RST             : 1;
      unsigned long ADC2RST             : 1;
      unsigned long TIM1RST             : 1;
      unsigned long SPI1RST             : 1;
      unsigned long TIM8RST             : 1;
      unsigned long UART1RST            : 1;
      unsigned long ADC3RST             : 1;
      unsigned long _Reserved1          : 3;
      unsigned long TIM9RST             : 1;
      unsigned long TIM10RST            : 1;
      unsigned long TIM11RST            : 1;
      unsigned long _Reserved2          : 10;
    } BITS;
  } APB2RSTR;

  union
  {
    unsigned long REG;
    struct
    {
      unsigned long TIM2RST             : 1;
      unsigned long TIM3RST             : 1;
      unsigned long TIM4RST             : 1;
      unsigned long TM5RST              : 1;
      unsigned long TM6RST              : 1;
      unsigned long TM7RST              : 1;
      unsigned long TIM12RST            : 1;
      unsigned long TIM13RST            : 1;
      unsigned long TIM14RST            : 1;
      unsigned long _Reserved           : 2;
      unsigned long WWDGRST             : 1;
      unsigned long _Reserved1          : 2;
      unsigned long SPI2RST             : 1;
      unsigned long SPI3RST             : 1;
      unsigned long _Reserved2          : 1;
      unsigned long UART2RST            : 1;
      unsigned long UART3RST            : 1;
      unsigned long UART4RST            : 1;
      unsigned long UART5RST            : 1;
      unsigned long I2C1RST             : 1;
      unsigned long I2C2RST             : 1;
      unsigned long USBRST              : 1;
      unsigned long _Reserved3          : 1;
      unsigned long CANRST              : 1;
      unsigned long _Reserved4          : 1;
      unsigned long BKPRST              : 1;
      unsigned long PWRRST              : 1;
      unsigned long DACRST              : 1;
      unsigned long _Reserved5          : 2;
    } BITS;
  } APB1RSTR;
  union
  {
    unsigned long REG;
    struct
    {
      unsigned long DMA1EN              : 1;
      unsigned long DMA2EN              : 1;
      unsigned long SRAMEN              : 1;
      unsigned long _Reserved           : 1;
      unsigned long FLITFEN             : 1;
      unsigned long _Reserved1          : 1;
      unsigned long CRCEN               : 1;
      unsigned long _Reserved2          : 1;
      unsigned long FSMCEN              : 1;
      unsigned long _Reserved3          : 1;
      unsigned long SDIOEN              : 1;
      unsigned long _Reserved4          : 21;
    } BITS;
  } AHBENR;
  union
  {
    unsigned long REG;
    struct
    {
      unsigned long AFIOEN              : 1;
      unsigned long _Reserved           : 1;
      unsigned long IOPAEN              : 1;
      unsigned long IOPBEN              : 1;
      unsigned long IOPCEN              : 1;
      unsigned long IOPDEN              : 1;
      unsigned long IOPEEN              : 1;
      unsigned long IOPFEN              : 1;
      unsigned long IOPGEN              : 1;
      unsigned long ADC1EN              : 1;
      unsigned long ADC2EN              : 1;
      unsigned long TIM1EN              : 1;
      unsigned long SPI1EN              : 1;
      unsigned long TIM8EN              : 1;
      unsigned long UART1EN             : 1;
      unsigned long ADC3EN              : 1;
      unsigned long _Reserved1          : 3;
      unsigned long TIM9_EN             : 1;
      unsigned long TIM10_EN            : 1;
      unsigned long TIM11_EN            : 1;
      unsigned long _Reserved2          : 10;
    } BITS;
  } APB2ENR;
  
  union
  {
    unsigned long REG;
    struct
    {
      unsigned long TIM2EN              : 1;
      unsigned long TIM3EN              : 1;
      unsigned long TIM4EN              : 1;
      unsigned long TIM5EN              : 1;
      unsigned long TIM6EN              : 1;
      unsigned long TIM7EN              : 1;
      unsigned long TIM12EN             : 1;
      unsigned long TIM13EN             : 1;
      unsigned long TIM14EN             : 1;
      unsigned long _Reserved           : 2;
      unsigned long WWDGEN              : 1;
      unsigned long _Reserved1          : 2;
      unsigned long SPI2EN              : 1;
      unsigned long SPI3EN              : 1;
      unsigned long _Reserved2          : 1;
      unsigned long UART2EN             : 1;
      unsigned long UART3EN             : 1;
      unsigned long UART4EN             : 1;
      unsigned long UART5EN             : 1;
      unsigned long I2C1EN              : 1;
      unsigned long I2C2EN              : 1;
      unsigned long USBEN               : 1;
      unsigned long _Reserved3          : 1;
      unsigned long CANEN               : 1;
      unsigned long _Reserved4          : 1;
      unsigned long BKPEN               : 1;
      unsigned long PWREN               : 1;
      unsigned long DACEN               : 1;
      unsigned long _Reserved5          : 2;
    } BITS;
  } APB1ENR;
  union
  {
    unsigned long REG;
    struct
    {
      unsigned long LSEON               : 1;
      unsigned long const LSERDY        : 1;
      unsigned long LSEBYP              : 1;
      unsigned long _Reserved           : 5;
      unsigned long RTCSEL              : 2;
      unsigned long _Reserved1          : 5;
      unsigned long RTCEN               : 1;
      unsigned long BDRST               : 1;
      unsigned long _Reserved2          : 16;
    } BITS;
  } BDCR;
  union
  {
    unsigned long REG;
    struct
    {
      unsigned long LSION               : 1;
      unsigned long const LSIRDY        : 1;
      unsigned long _Reserved           : 22;
      unsigned long RMVF                : 1;
      unsigned long _Reserved1          : 1;
      unsigned long PINRSTF             : 1;
      unsigned long PORRSTF             : 1;
      unsigned long SFTRSTF             : 1;
      unsigned long IWDGRSTF            : 1;
      unsigned long WWDGRSTF            : 1;
      unsigned long LPWRSTF             : 1;
    } BITS;
  } CSR;
} RCC_TypeDef;
__root __no_init volatile RCC_TypeDef RCC @ 0x40021000;

#endif