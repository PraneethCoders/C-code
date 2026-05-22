// use Compiler Control Directives ( #undef )
#include <stdio.h> 
#include <conio.h>

#define  VAL  40

#ifdef   VAL
	#undef  VAL          
#endif

#define VAL 50      

int main () 
{
	clrscr();

	printf( "\n Value = %d",  VAL );   

	getch();
	return 0;	
}
//Output:
// Value = 50
