// union example
#include <stdio.h> 
#include <conio.h>
union Abc
{
	char c;
	int i;
	float f;
};
int main () 
{
	union Abc x;
	
	x.c = 'N';
	printf( "\n x.c = %c", x.c );
	
	x.i = 10;
	printf( "\n x.i = %d", x.i );
	
	x.f = 1993.5;
	printf( "\n x.f = %f", x.f );
	
}
// Output:
//  x.c = N
//  x.i = 10
//  x.f = 1993.500000