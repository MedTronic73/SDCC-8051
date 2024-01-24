/*
Absolute Addressing

Absolute addressing is supported by the SDCC using the at identifier. The SDCC will not, unfortunately, track variables declared at absolute addresses and may declare other variables so that they will overlap.

The following example program presents interesting potential bugs.
*/

#include "8052.h"

unsigned char           a     = 0x4A;    /* Load a Variable with 0x4A */
unsigned int            b     = 0x0000;	 /* Reserve 2 Byte for b and load by 0x0000 */
unsigned char           c[64] = {0x00};  /* Now Start a 64 byte array (From 0x0B)   */

unsigned char __at 0x0010 y;		 /* The y declared at address 0x0010        */
unsigned char __at 0x0010 z;		 /* The z declared at address 0x0010 also   */

void main(void)
{
     for(b=0; b<64; b++)
          c[b] = 0xAA;			/* The array overlap y and z variables */

     y = 0xF1;
     z = 0xF2;

     a = c[5];				/* Now we fined a have a value 0xF2 not 0xAA */
					/* Which is z value */
     while (1); 			/* program loop    */
}
/*
Using the SDCC, the example compiles without any errors or any warnings, even though two variables, "y" and "z", are assigned to the same location. Next, if we were to run this program, we would expert the final assignment in the program (a = c[5]) to set "a" to 0xAA. But this is not the case. The actual value of "a" after the final assignment is 0xF2.

We can see the reason for this strange result by examining the following lines in the .map file created by SDCC that show the actual addresses used for each variable.
*/