/*
near/data

Declaring a variable with the near or data storage class places the variable in directly addressable RAM in the 8051-core. The DS89C430/450 family of microcontrollers has 128 bytes of directly addressable memory available. This is the fastest type of memory that can be accessed by the 8051, and the assembly code generated to read or write data in this area of RAM requires a single MOV instruction.
*/
#include "8052.h"

__data unsigned char outPort1 = 0x40;

void main(void)
{

     outPort1 = 0x55;	
     P1       = outPort1;
     outPort1 = 0xAA;	
     P1       = outPort1;

     while (1); 		/* program loop */
}
