#include <rcc.h>
#include <define.h>

//                                      |       //Address       Default         Description
typedef struct
{
  BUNION(CRL, unsigned long,
      MODE_0                            , 2,    //0-1           0               0: Input mode (reset state)
                                                //                              1: Output mode, max speed 10 MHz.
                                                //                              2: Output mode, max speed 2 MHz.
                                                //                              3: Output mode, max speed 50 MHz
       CNF_0                            , 2,    //2-3           1               In input mode:
                                                //                                      0: Analog mode
                                                //                                      1: Floating input (reset state)
                                                //                                      2: Input with pull-up / pull-down
                                                //                              In output mode:
                                                //                                      0: General purpose output push-pull
                                                //                                      1: General purpose output Open-drain
                                                //                                      2: Alternate function output Push-pull
                                                //                                      3: Alternate function output Open-drain
      MODE_1                            , 2,    //
       CNF_1                            , 2,    //
      MODE_2                            , 2,    //
       CNF_2                            , 2,    //
      MODE_3                            , 2,    //
       CNF_3                            , 2,    //
      MODE_4                            , 2,    //
       CNF_4                            , 2,    //
      MODE_5                            , 2,    //
       CNF_5                            , 2,    //
      MODE_6                            , 2,    //
       CNF_6                            , 2,    //
      MODE_7                            , 2,    //
       CNF_7                            , 2);   //
  BUNION(CRH, unsigned long,
      MODE_8                            , 2,    //
       CNF_8                            , 2,    //
      MODE_9                            , 2,    //
       CNF_9                            , 2,    //
      MODE_10                           , 2,    //
       CNF_10                           , 2,    //
      MODE_11                           , 2,    //
       CNF_11                           , 2,    //
      MODE_12                           , 2,    //
       CNF_12                           , 2,    //
      MODE_13                           , 2,    //
       CNF_13                           , 2,    //
      MODE_14                           , 2,    //
       CNF_14                           , 2,    //
      MODE_15                           , 2,    //
       CNF_15                           , 2);   //  
  BUNION(IDR, unsigned long,
      xBITS_B(b, 0, 15, 1),                     //
      _reserved                         , 16);  //
  BUNION(ODR, unsigned long,
      xBITS_B(b, 0, 15, 1),                     //
      _reserved                         , 16);  //
  union
  {
    unsigned long REG;
    struct
    {
      xBUNION(BSR, unsigned short, b, 0, 15, 1);
      xBUNION(BR, unsigned short, b, 0, 15, 1);
    };
  } BSRR;
  BUNION(BRR, unsigned long,
      xBITS_B(b, 0, 15, 1),                     //
      _reserved                         , 16);  //
  BUNION(LCKR, unsigned long,
      xBITS_B(b, 0, 15, 1),                     //
      LOCK                              , 1,    //
      _reserved                         , 15);  //
} GPIO_TypeDef;
__root __no_init GPIO_TypeDef GPIOB @ 0x40010C00;
__root __no_init GPIO_TypeDef GPIOA @ 0x40010800;
__root __no_init GPIO_TypeDef GPIOC @ 0x40011000;


void main()
{
  //turn on clock for GPIOB
  RCC.APB2ENR.BITS.IOPBEN = 1;
  //config GPIOB.b12 to OUTPUT
  GPIOB.CRH.BITS.MODE_12 = 3;
  GPIOB.CRH.BITS.CNF_12 = 0;
  while (1)
  {
    //GPIOB.ODR.REG = ~GPIOB.ODR.REG;
    //GPIOB.ODR.BITS.b12 = !GPIOB.ODR.BITS.b12;
    
    GPIOB.BSRR.REG = (1UL << 12);
    for (unsigned long i = 0; i < 500000; i++);
//    GPIOB.BRR.REG = (1UL << 12);
//    for (unsigned long i = 0; i < 500000; i++);
    GPIOB.BSRR.REG = (1UL << (12 + 16));
    for (unsigned long i = 0; i < 500000; i++);
  }
}