//  Simple Macro Substitution (#define)
#include <stdio.h> 
#include <conio.h>

#define  PI  3.14159

int main () 
{
	float r, a;
	clrscr();

	printf( " Enter Radius : " );
	scanf( "%f", &r );

	a = PI * r * r;

	printf( "\n Area of Circle : %f",  a );

	getch();
	return 0;
}
//Output:
// Enter Radius : 10
// Area of Circle : 314.158997
