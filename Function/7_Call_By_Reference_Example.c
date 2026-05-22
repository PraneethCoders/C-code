//  Call By Reference Example
#include <stdio.h> 
#include <conio.h>
void cube( int* );
int  main() 
{ 
	int a = 10;
	clrscr();

	cube( &a );

	printf( "\n a = %d", a );
       
	getch();
	return 0;
}
void cube( int *pa )
{
	*pa = (*pa) * (*pa) * (*pa);
	printf( "\n *pa = %d", *pa );
}
// Output:
// *pa = 1000
//  a = 1000