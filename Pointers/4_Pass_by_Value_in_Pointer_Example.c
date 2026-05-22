//  Pass by Value in Pointer Example
#include <stdio.h>
#include <conio.h>

void square( int  );

int main ()
{
	int a = 20;
	clrscr();

	square( a );

	printf( "\n a = %d", a );

	getch();
	return 0;
}

void square( int  x )
{
	x = x * x;
	printf( "\n x = %d", x );
}
// Output:
//  x = 400
//  a = 20