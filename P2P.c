#include <at89x51.h>
char c_variable;
    /* 1 - Define a variable which will hold an address */
char *MyPtr; 
char **p2MyPtr; /*Pointer to a Pointer */

void main(void)
{
    /* 2 - Load pointer variable with address to be accessed*/
    /*indirectly */
    c_variable = 0xAA ;
    MyPtr      = &c_variable; 
    p2MyPtr    = &MyPtr;
    /* 3 - Put data '0xff' indirectly into c variable via*/
    /*pointer */
    *MyPtr    = 0x55; 
    **p2MyPtr = 0x20;
    *p2MyPtr  = 0x30;
    *MyPtr    = 0xAA; 

         P1   = *MyPtr; 
    **p2MyPtr = 0x38;
         P2   = **p2MyPtr; 

}
/*
    Taking each operation in turn...

    Reserve RAM to hold pointer. In practice the compiler attaches a symbolic name to a RAM 	    location, just as with a normal variable.
    Load reserved RAM with address to be accessed, equivalent to 'MOV R0,#40'. 
    In English this C statement means: "take the 'address of' c_variable and put it into the     reserved RAM, i.e, the pointer" In this case the pointer's RAM 
    corresponds to R0 and the '&' equates loosely to the assembler '#'.
    Move the data indirectly into pointed-at C variable, as per the assembler 'MOV A,@R0'.
*/

