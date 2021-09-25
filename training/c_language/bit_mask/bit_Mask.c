/* mat na. bit (Bit-Mask)
option :
-chon. 1 option 
-chon. cung luc nhieu option
ex:
    DDRA = 0xff (tat ca ca bit bat len 1 )
    DDRA = 0b0000 1000 (bit thu 4 dc set len 1)
    -> nhung van~ anh huong den cac bit khac 
    vay lam sao de lua chon 1 option ma kh anh huong cac bit con lai ?
    */
#include<stdio.h>

#define OPE_mask_add (1 << 0) //1 = 0x01 = 0000.0001
#define OPE_mask_sub (1 << 1) //2 = 0x02 = 0000.0010
#define OPE_mask_mul (1 << 2) //3 = 0x03 = 0000.0100
#define OPE_mask_dev (1 << 3) //4 = 0x04 = 0000.1000

void math_operator (int a, int b, unsigned char ope)
{
    if (ope & OPE_mask_add)
    {
        /* code */printf("sum: a + b = %d  \n", (a+b));
    }
    if (ope & OPE_mask_sub)
    {
        /* code */printf("sub: a - b = %d  \n", (a-b));
    }
    if (ope & OPE_mask_mul)
    {
        /* code */printf("multi: a * b = %d  \n", (a*b));
    }
    if (ope & OPE_mask_dev)
    { 
        if (b!=0)
           /* code */printf("devi: a / b = %d  \n", ((float)a/b) ); 
        else
            printf("fail !!! \n");
    }
    printf("\n");
}

int main () 
{                         
    math_operator (4, 2, OPE_mask_add);                         //0x01 & 0x01 = 0x01
    math_operator (4, 2, (OPE_mask_add | OPE_mask_sub));        //0x01 | 0x02 = 0x03 = 0000.0011
                                                                //0000.0011 & 0000.0001 = 0000.0001
                                                                //0000.0011 & 0000.0010 = 0000.0010
                                                                //0000.0011 & 0000.0100 = 0x00 -> null
                                                                //0000.0011 & 0000.1000 = 0x00 -> null             
    
    math_operator (4, 2, (OPE_mask_add | OPE_mask_sub | OPE_mask_mul));                 // tuong tu
    math_operator (4, 2, (OPE_mask_add | OPE_mask_sub | OPE_mask_mul | OPE_mask_dev));  // tuong tu
}
/*ap dung cho vdk: 
cach 1:
    xxxx xxxx
   |0001 0000
   ----------
    xxx1 xxxx
cach 2:
    xxxx xxxx
   |(1 << 4)
    xxx1 xxxx
PORTB = (1 << 4)  set bit 4 (5th bit) of port B */