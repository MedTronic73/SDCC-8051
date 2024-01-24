#include <8052.h>
union
{
  unsigned char a_byte;
  struct
  {
    unsigned char bit0 : 1;
    unsigned char bit1 : 1;
    unsigned char bit2 : 1;
    unsigned char bit3 : 1;
    unsigned char bit4 : 1;
    unsigned char bit5 : 1;
    unsigned char bit6 : 1;
    unsigned char bit7 : 1;
  } a_bit;
} MyVar;

__bit bb;

void main(void)
{
     MyVar.a_byte     = 0x05;
     P1               =	MyVar.a_byte;
     MyVar.a_bit.bit6 = 1;
     P1               =	MyVar.a_byte;
     bb               = 1;

     while(1); 			/* program loop   */
}
