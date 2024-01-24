    char c_variable;	       /* 1 - Declare a c variable unsigned char */	
    char *ptr;                 /* 2 - Declare a pointer (not pointing at anything yet!) */
    char x,y;
    char *x_ptr = &x,*y_ptr = &y;	
    /* Demonstration Of Using A Pointer */
    void main(void)
    {
      c_variable = 0xff ;       /* 3 - Set variable equal to 0xff directly */
                                /* OR, to do the same with pointers:  */
      ptr = &c_variable ;       /* 4 - Force pointer to point at c_variable at run time */
      *ptr = 0x55 ;             /* 5 - Move 0x55 into c_variable indirectly  */

      x = 7;		        /* Test load variable with direct data */ 	
      y = x + 3;	        /* Make some simple Calculation */	

      *x_ptr= 17;	        /* Test load variable but Indirect way */	
      *y_ptr = *x_ptr + 3;      /* And Make some caculation again */

      y = 4 ;			/* Test load variable with direct data */ 
      x = y * 25;		/* Make some simple Calculation */

      *y_ptr = 8; 		/* Test load variable but Indirect way */
      *x_ptr = *y_ptr * 8;	/* And Make some caculation again */	

    }
