/*
code Memory

Declaring a variable with the code storage class indicates that the variable will be placed in program memory (specifically flash memory within the DS89C430/450 microcontrollers). The variables are read-only for the SDCC, therefore use code to declare constants (such as lookup tables) in your program.
*/
#include "8052.h"

__code unsigned char out[10] = {0x03,0x45,0xFA,0x43,0xDD,
                                0x1A,0xE0,0x00,0x87,0x91};
                              /* This array will be located after all code area at the last 
                                 of the program */
void main(void)
{
/*     volatile unsigned char i = 0;      With volatile i is fixed at address 0x08 */
     unsigned char i = 0;		/* Without volatile i will be at R7 register */ 
     while (1) 				/* program loop */
     {
          P0 = out[i++];
          if (i==10)
               i=0;
     }
}
