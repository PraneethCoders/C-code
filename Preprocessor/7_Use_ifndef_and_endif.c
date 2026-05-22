//  use Compiler Control Directives ( #ifndef and #endif )
#include <stdio.h> 
#include <conio.h>

#define  INDIA  1

// #define  USA  1

#ifndef   USA
    #define  PI   3.14159
#endif

#ifndef   INDIA
  	#define   PI   3.14
#endif

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
