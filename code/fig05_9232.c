/* Example of variable scopes */
#include <stdio.h>

 int i = 10;
 int j = 42;
 
int main( void )
{
   int i = 83;

   printf( "i = %d, j = %d\n", i, j );
 
   return 0; /* program ended successfully */
 
} /* end function main */
