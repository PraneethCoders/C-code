// Simple if statement
#include <stdio.h> 
#include <conio.h>
int main() 
{ 
	int  x;
	
	printf( " Enter a number ::: " );
	scanf( "%d", &x );

	if( x > 100 )
	{
		printf( "\n Number is greater than 100." );
	}
	
	return 0;
}
//Output:
// Enter a number ::: 500
// Number is greater than 100.
