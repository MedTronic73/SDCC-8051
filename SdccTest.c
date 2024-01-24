/*
To test the include path, create a file called sdcctest.c and copy the following 
source code into the file.
*/
#include <string.h>
char str[6] = "MAXIM";
__bit  flag;

void main(void)
{
     if (strcmp(str,"MAXIM") == 1)
          flag = 0;
     else
          flag = 1; 

     while(1); /* program loop  */
}
/*
Save the file in plain ASCII format (i.e., using Microsoft Notepad). In the Command Prompt, type sdcc sdcctest.c and press [Enter]. If nothing appears, as shown in Figure 2, the program compiled successfully.
*/