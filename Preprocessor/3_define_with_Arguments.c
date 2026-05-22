//  use Macro Substitution with Arguments.

#include <stdio.h> 
#include <conio.h>

#define  MIN(a,b)  (((a)<(b))?a:b)

int main ()
{
	int x, y; 
	clrscr();

	x = 10;
	y = 20;
	printf("\n The Minimum is = %d",  MIN(x, y) );

	getch();
	return 0;
}
//Output:
// The Minimum is = 10
