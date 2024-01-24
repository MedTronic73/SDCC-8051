/*
sfr (Special Function Registers)

The sfr storage class defines a specific Special Function Register (SFR) in the 8051-core. The definition file presented in Appendix A defines all the SFRs in the DS89C430/450 microcontrollers using the sfr identifier.

Note that the following example defines the SFRs. Including the definition file sdcc_reg420.h or 8052.h was therefore not necessary.
*/
__sfr __at 0x80 P0;
__sfr __at 0x90 P1;
__sfr __at 0xA0 P2;
__sfr __at 0xB0 P3;


void main(void)
{
     P0 = 0x00;
     P1 = 0xFF;
     P2 = 0x55;
     P3 = 0xAA;
	
     while (1)		/* program loop  */
	{
	P0++;
	P1--;
	P2+=P2;
	P3-=P3;
	}
}
