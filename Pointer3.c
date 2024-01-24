#include <at89x51.h>
/* Pointers To Absolute Addresses */
    const char absData = 0xAA;	
    const char absData1 = 0x55;	
    const int *absAddress_ptr = &absData;	
__data __at(0x40) int intabsData;
    int *intabsData_ptr = &intabsData;	
    char IRamData;
    char *IRamData_ptr = &IRamData; 		/* Declare uncommitted pointer */
    char Temp ;	
/*    abs_ptr (char *) 0x8000;   Initialize pointer to 0x8000 */
void main(void)
{
	while(1)
	{
	IRamData = 0x10;	/* Load IRamData Variable with 0x10 */
	P1 = IRamData;  	/* Display the IRamData at P1 */
	*IRamData_ptr = 0x20;	/* Access The same variable register with Pointer */
	P1 = *IRamData_ptr;
	Temp = *IRamData_ptr;	/* Get Data from variable with Pointer */
	P1 = Temp;		/* Display Data at P1 */
	Temp = *absAddress_ptr; /* **** Get from integer pointer at char variable */
	P1 = Temp;		/* Lets see the data */
	intabsData = *absAddress_ptr;	  /*Get data from absolute address to integer var */ 
	*IRamData_ptr = (intabsData >>8); /* Split it to get the high Byte  */
	Temp = intabsData & 0x00FF;	  /* and now get the low Byte */
	P1 = *IRamData_ptr;P2 = Temp;	  /* Show that at P1,P2 */
	*absAddress_ptr--;*absAddress_ptr--;
	intabsData = *absAddress_ptr;	  /*Get data from absolute address to integer var */ 
	Temp = *absAddress_ptr;		  /* * Get from integer pointer at char variable */
	*IRamData_ptr = intabsData & 0x00FF;	
	Temp = (intabsData >> 8);
	P1 = *IRamData_ptr;P2 = Temp;
	*absAddress_ptr++;*absAddress_ptr++;
	}
}
