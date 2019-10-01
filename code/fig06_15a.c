   /* bubble sort */
   /* loop to control number of passes */
   for ( pass = 1; pass < SIZE; pass++ ) { 
      changed = 0;
      /* loop to control number of comparisons per pass */
      for ( i = 0; i < SIZE - pass; i++ ) {      

         /* compare adjacent elements and swap them if first 
         element is greater than second element */
         if ( a[ i ] > a[ i + 1 ] ) {  
            hold = a[ i ];                   
            a[ i ] = a[ i + 1 ];
            a[ i + 1 ] = hold;
            changed = 1;
         } /* end if */

      } /* end inner for */
      if (!changed) break;
   } /* end outer for */

   printf( "\nData items in ascending order\n" );

   /* output sorted array */
   for ( i = 0; i < SIZE; i++ ) {
      printf( "%4d", a[ i ] );
   } /* end for */
