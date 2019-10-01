/* Example of float print width specification */
#include <stdio.h>

int main( void )
{

    float f = 10.0 / 7.0;

    printf( "%f\n", f );
    printf( "%20f\n", f );
    printf( "%.2f\n", f );
    printf( "%20.2f\n", f );

    return 0; /* program ended successfully */

} /* end function main */
