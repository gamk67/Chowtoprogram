/* Fig. 6.15a: fig06_15b.c
    This program sorts an array's values using insertion sort */
#include <stdio.h>
#define SIZE 10
 
/* function main begins program execution */
int main( void ) 
{   
   /* initialize a */
   int A[ SIZE ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 }; 
   int pass; /* passes counter */
   int i,j,key,size;
   int hold; /* temporary location used to swap array elements */
   
   printf( "Data items in original order\n" );
   
   /* output original array */
   for ( i = 0; i < SIZE; i++ ) {
      printf( "%4d", A[ i ] );
   } /* end for */

   for (i = 1; i < SIZE; i++) { 
      key = A[i];
      j = i;
      while((j > 0) && (key < A[j-1])) {
	A[j]=A[j-1];
	j = j-1;
      } 
        A[j] = key;
   } 

   printf( "\nData items in ascending order\n" );
 
   /* output sorted array */
   for ( i = 0; i < SIZE; i++ ) {
      printf( "%4d", A[ i ] );
   } /* end for */
 
   printf( "\n" );

   return 0; /* indicates successful termination */

} /* end main */
