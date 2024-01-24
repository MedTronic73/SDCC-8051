/*
bit Variable (Flages)

Declaring a variable with the bit storage class places it in bit-addressable memory in the 8051-core. The 8051-core has 16 bytes of direct addressable RAM that can act as bit-addressable memory (bytes 0x20 to 0x2F), providing 128 total addressable bits.
Variables of this type are efficient use of memory for flags.
*/
#include "8052.h"

#define ESCAPE 0x1B	 /* Define a Lable to a Value */ 

__bit esc_char_flag = 0; /* A bit defination will start at 20H.0 bit addressable area */ 
__idata __at(0x20) char Flages; /* Flages Can be overlayed */
__bit Flag0 = 0;	 /* A bit defination will at 20H.1 bit addressable area */
__bit Flag1 = 0;	 /* A bit defination will at 20H.2 bit addressable area */
__bit Flag2 = 0;	 /* A bit defination will at 20H.3 bit addressable area */
__bit Flag3 = 0;	 /* A bit defination will at 20H.4 bit addressable area */

void main(void)
{

     while (1)
     {
     P1 = 0x00;
     while (!esc_char_flag)
     	   {
            if (P0 == ESCAPE)
                esc_char_flag = 1;
           }
     P1 = 0xFF;
     Flages ^= 0xE0;	
     Flages ^= 0xE0;	
     Flag0 = !Flag0;	  /* Way to toggle a bit */
     Flag1 = Flag1 ^ 1;	  /* Another way to toggle a bit (XOR with 1 mean complement) */
     Flag2 ^= 1;	  /* Same but simple of the a bove command */
     Flag3 = !Flag3;	  /* Same as first one but note that F is capatiat and this not 				  /* equal to Flag3 != Flag3	*/
     		
     }
}
