#include <at89x52.h>
    /* Copy The String HELLO! Into An Empty Array */
    const char *string_ptr = { "HELLO!" }; /* This array will be at ROM */
    unsigned char dest_array[7];
    unsigned char array_index;
             char i,j; 	
void main(void)
{
	while(1)
	{
    		for(i=0;i < 16;i++)
    			{
			P1 = i ;
			}    	
    		array_index = 0 ; 		/* First character index */

    		while(array_index < 7)         /* Check for end of array */
    			{
        		dest_array[array_index] = *string_ptr++ ;  
        		/* Move character-by-character into destination array. */
        		array_index++ ;
    			}
    		for(array_index=0;array_index < 7;array_index++)
    			{
			*string_ptr--;
			}    	
    		for(array_index=0;array_index < 7;array_index++)
    			{
        		dest_array[array_index] = 0 ;  
        		/* Move character-by-character into destination array. */
        		dest_array[array_index] = *string_ptr++ ;  
    			}	
    		for(array_index=0;array_index < 7;array_index++)
    			{
			*string_ptr--;
			}    	
	}
}