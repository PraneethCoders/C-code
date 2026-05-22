// Type Casting2
#include <stdio.h> 
#include <conio.h>

int main() 
{
	int intv = 20000;
	
	intv = ( (long)intv * 10 ) / 20;

	printf( "\n intv ::: %d", intv );

	return 0;
}
//Output:
// intv ::: 10000
