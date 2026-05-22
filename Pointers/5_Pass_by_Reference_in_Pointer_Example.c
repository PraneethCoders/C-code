//  Pass by Reference in Pointer Example
#include <stdio.h>
#include <conio.h>

void square( int* );

int main ()
{
	int a = 10;
	clrscr();

	square( &a );

	printf( "\n a = %d", a );

	getch();
	return 0;
}
void square( int *pa )
{
	*pa = *pa * *pa;
	printf( "\n *pa = %d", *pa );
}
// Output:

//  *pa = 100
//  a = 100