// Returning by Reference in Pointer Example
#include <stdio.h>
#include <conio.h>

int* max( int*, int* );

int main ()
{
	int a = 23, b = 14, *p;
	clrscr();

	p = max( &a, &b );

	printf( "\n Maximum = %d", *p );

	getch();
	return 0;
}

int* max( int *pa, int *pb )
{
	if( *pa > *pb )
		return pa;
	else
		return pb;
}
// Output:
//  Maximum = 23