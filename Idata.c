/*
Declaring a variable with the idata storage class places the variable in indirectly addressable memory within the 8051-core. Indirectly addressable memory is similar to directly addressable memory as there are 128-bytes available in the 8051-core ...
(not including Special Function Registers). Accessing idata, however, requires an extra MOV command to move the RAM address into a working register.
*/
#include "8052.h"

__idata __at(0xC0) unsigned char port0_x2;

void main(void)
{
     while (1) 			/* program loop  */
     {
          port0_x2 = P0 * 2;
     }
}
