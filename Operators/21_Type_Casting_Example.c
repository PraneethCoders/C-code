// Type Casting
#include <stdio.h>
#include <conio.h>

int main( )
{
	float  a ;
	int  x = 10, y = 3 ;
	
	a = x / y ;
	printf ( "\n Value of a (without casting ) = %f", a ) ;
	
	a = ( float ) x / y ;
	printf ( "\n Value of a (with casting ) = %f", a ) ;
	
	return 0;
}
//Output:
//  Value of a (without casting ) = 3.000000
//  Value of a (with casting ) = 3.333333
