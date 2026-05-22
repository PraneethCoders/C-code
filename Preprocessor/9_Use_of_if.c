//  use #error Preprocessor
#include <stdio.h> 
#include <conio.h>

#define  MAX  1

int main () 
{
	int a = 40, b = 20;
	clrscr();

	#if MAX == 1
		printf( "\n Maximum = %d",  (a>b?a:b) );
	#else
		printf( "\n Minimum = %d",  (a<b?a:b) );
	#endif

	getch();
	return 0;
}
//Output:
// Maximum = 40
