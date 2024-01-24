/*
sbit

The sbit storage class defines a specific bit inside a bit-addressable SFR. In the 8051-core, all SFRs with an address that finishes with either a 0 or an 8 (in hex) are bit addressable. The definition file presented in Appendix A defines all the SFR addressable bits in the DS89C430/450 microcontroller using the sbit identifier.
*/
__sfr  __at 0x80 P0;    /* Port 0        */

__sbit __at 0x80 P0_0; 	/* Port 0 bit 0  */
__sbit __at 0x81 P0_1; 	/* Port 0 bit 1  */
__sbit __at 0x82 P0_2; 	/* Port 0 bit 2  */
__sbit __at 0x83 P0_3; 	/* Port 0 bit 3  */
__sbit __at 0x84 P0_4; 	/* Port 0 bit 4  */
__sbit __at 0x85 P0_5; 	/* Port 0 bit 5  */
__sbit __at 0x86 P0_6; 	/* Port 0 bit 6  */
__sbit __at 0x87 P0_7; 	/* Port 0 bit 7  */

void main(void)
{
     P0   = 0x00; 	/* P0 = 0x00  */

     P0_4 =    1;       /* P0 = 0x10  */  

     while (1);   	/* program loop  */
}
