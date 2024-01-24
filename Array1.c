
    /* Copy The String HELLO! Into An Empty Array */
    unsigned char source_array[] = { "HELLO!" } ;
    unsigned char dest_array[7];
    unsigned char array_index ;
void main(void)
{
    array_index = 0; 		/* First character index   */
    while(array_index < 7)   	/* Check for end of array  */
    {
        dest_array[array_index] = source_array[array_index] ;      
        /* Move character-by-character into destination array */
        array_index++ ;         /* Next character index */
    }
}