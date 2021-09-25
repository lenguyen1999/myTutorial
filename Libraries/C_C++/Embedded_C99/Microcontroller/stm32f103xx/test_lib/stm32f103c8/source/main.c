/*
date :7/9/21-
name: dev register stm32f103c8 blink led


-union
-struct
-root
-no init
-kieu du lieu unsigned long & short

*/
#include <rcc.h>

typedef struct
{
  union
  {
    unsigned long REG;
    struct
    {
      unsigned long MODE_0 : 2;
      unsigned long  CNF_0 : 2;
      unsigned long MODE_1 : 2;
      unsigned long  CNF_1 : 2;
      unsigned long MODE_2 : 2;
      unsigned long  CNF_2 : 2;
      unsigned long MODE_3 : 2;
      unsigned long  CNF_3 : 2;
      unsigned long MODE_4 : 2;
      unsigned long  CNF_4 : 2;
      unsigned long MODE_5 : 2;
      unsigned long  CNF_5 : 2;
      unsigned long MODE_6 : 2;
      unsigned long  CNF_6 : 2;
      unsigned long MODE_7 : 2;
      unsigned long  CNF_7 : 2;    
    } BITS;
  } CRL;
  union
  {
    unsigned long REG;
    struct
    {
      unsigned long MODE_8 : 2;
      unsigned long  CNF_8 : 2;
      unsigned long MODE_9 : 2;
      unsigned long  CNF_9 : 2;
      unsigned long MODE_10 : 2;
      unsigned long  CNF_10 : 2;
      unsigned long MODE_11 : 2;
      unsigned long  CNF_11 : 2;
      unsigned long MODE_12 : 2;
      unsigned long  CNF_12 : 2;
      unsigned long MODE_13 : 2;
      unsigned long  CNF_13 : 2;
      unsigned long MODE_14 : 2;
      unsigned long  CNF_14 : 2;
      unsigned long MODE_15 : 2;
      unsigned long  CNF_15 : 2;
    } BITS;
  } CRH;
  union
  {
    unsigned long REG;
    struct
    {
      unsigned long b0 : 1;
      unsigned long b1 : 1;
      unsigned long b2 : 1;
      unsigned long b3 : 1;
      unsigned long b4 : 1;
      unsigned long b5 : 1;
      unsigned long b6 : 1;
      unsigned long b7 : 1;
      unsigned long b8 : 1;
      unsigned long b9 : 1;
      unsigned long b10 : 1;
      unsigned long b11 : 1;
      unsigned long b12 : 1;
      unsigned long b13 : 1;
      unsigned long b14 : 1;
      unsigned long b15 : 1;
      unsigned long _reserved : 16;
    } BITS;
  } IDR;   
  union
  {
    unsigned long REG;
    struct
    {
      unsigned long b0 : 1;
      unsigned long b1 : 1;
      unsigned long b2 : 1;
      unsigned long b3 : 1;
      unsigned long b4 : 1;
      unsigned long b5 : 1;
      unsigned long b6 : 1;
      unsigned long b7 : 1;
      unsigned long b8 : 1;
      unsigned long b9 : 1;
      unsigned long b10 : 1;
      unsigned long b11 : 1;
      unsigned long b12 : 1;
      unsigned long b13 : 1;
      unsigned long b14 : 1;
      unsigned long b15 : 1;
      unsigned long _reserved : 16;
    } BITS;
  } ODR;
  union
  {
    unsigned long REG;
    struct
    {
      union
      {
        unsigned short REG;
        struct
        {
          unsigned short b0 : 1;
          unsigned short b1 : 1;
          unsigned short b2 : 1;
          unsigned short b3 : 1;
          unsigned short b4 : 1;
          unsigned short b5 : 1;
          unsigned short b6 : 1;
          unsigned short b7 : 1;
          unsigned short b8 : 1;
          unsigned short b9 : 1;
          unsigned short b10 : 1;
          unsigned short b11 : 1;
          unsigned short b12 : 1;
          unsigned short b13 : 1;
          unsigned short b14 : 1;
          unsigned short b15 : 1;
        } BITS;
      } BSR;
      union
      {
        unsigned short REG;
        struct
        {
          unsigned short b0 : 1;
          unsigned short b1 : 1;
          unsigned short b2 : 1;
          unsigned short b3 : 1;
          unsigned short b4 : 1;
          unsigned short b5 : 1;
          unsigned short b6 : 1;
          unsigned short b7 : 1;
          unsigned short b8 : 1;
          unsigned short b9 : 1;
          unsigned short b10 : 1;
          unsigned short b11 : 1;
          unsigned short b12 : 1;
          unsigned short b13 : 1;
          unsigned short b14 : 1;
          unsigned short b15 : 1;
        } BITS;
      } BR;
    };
  } BSRR;
  union
  {
    unsigned long REG;
    struct
    {
      unsigned long b0 : 1;
      unsigned long b1 : 1;
      unsigned long b2 : 1;
      unsigned long b3 : 1;
      unsigned long b4 : 1;
      unsigned long b5 : 1;
      unsigned long b6 : 1;
      unsigned long b7 : 1;
      unsigned long b8 : 1;
      unsigned long b9 : 1;
      unsigned long b10 : 1;
      unsigned long b11 : 1;
      unsigned long b12 : 1;
      unsigned long b13 : 1;
      unsigned long b14 : 1;
      unsigned long b15 : 1;
      unsigned long _reserved : 16;
    } BITS;
  }  BRR;
  union
  {
    unsigned long REG;
    struct
    {
      unsigned long b0 : 1;
      unsigned long b1 : 1;
      unsigned long b2 : 1;
      unsigned long b3 : 1;
      unsigned long b4 : 1;
      unsigned long b5 : 1;
      unsigned long b6 : 1;
      unsigned long b7 : 1;
      unsigned long b8 : 1;
      unsigned long b9 : 1;
      unsigned long b10 : 1;
      unsigned long b11 : 1;
      unsigned long b12 : 1;
      unsigned long b13 : 1;
      unsigned long b14 : 1;
      unsigned long b15 : 1;
      unsigned long LOCK : 1;
      unsigned long _reserved : 15;
    } BITS;
  } LCKR;
} GPIO_TypeDef;
__root __no_init GPIO_TypeDef GPIOB @ 0x40010C00;
__root __no_init GPIO_TypeDef GPIOA @ 0x40010800;
__root __no_init GPIO_TypeDef GPIOC @ 0x40011000;

void main()
{
 //turn on clock for GPIOB
 RCC.APB2ENR.BITS.IOPBEN = 1;
 //config GPIOB.b12 to OUTPUT
 GPIOB.CRH.BITS.MODE_12 = 3; //output mode, max speed 50 MHZ
 GPIOB.CRH.BITS.CNF_12 = 0; //general purpose output push-pull.
  while (1)
  {
    // //GPIOB.ODR.REG = ~GPIOB.ODR.REG;// truy cap ca thanh ghi
    // GPIOB.ODR.BITS.b12 = !GPIOB.ODR.BITS.b12;
    // for (unsigned long i = 0; i < 500000; i++);  
    // //dao~ led tai gpio.b12  
    
    GPIOB.BSRR.REG = (1UL << 12);
    for (unsigned long i = 0; i < 500000; i++);// set bit b12
    GPIOB.BRR.REG = (1UL << 12);
    for (unsigned long i = 0; i < 500000; i++);//reset bit b12
    GPIOB.BSRR.REG = (1UL << (12 + 16));
    for (unsigned long i = 0; i < 500000; i++);//reset bit b12
  }
}