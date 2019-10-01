/* Example of print width specification */
#include <stdio.h>

int main( void )
{
 int i = 3;
   int j = 850;
   int k = 12345678912345;

   printf( "%d\n%d\n\n", i, j );
   printf( "%6d\n%6d\n\n", i, j );
   printf( "%6d\n", k );
   return 0; /* program ended successfully */

} /* end function main */
