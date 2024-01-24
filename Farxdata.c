/*
Declaring a variable with the far or xdata storage class places the variable in external RAM. Although this gives the developer access to a much larger RAM space, the assembly code generated to read and write to this memory uses a MOVX instruction which requires loading the external memory address into the data pointer.

The DS89C430/450 family of microcontrollers includes a 1 kilobyte internal SRAM that can be used for variables declared with far/xdata. Note that goto Project\Edit Project and Enable External RAM XDATA before this memory can be initialized or used.
*/
#include "8052.h"

__xdata unsigned char ioPorts[2];

void main(void)
{
     ioPorts[0] = 0x4A;
     ioPorts[1] = 0x56;

     P0         = ioPorts[0];
     P1         = ioPorts[1];

     while (1); 		/* program loop */
}
