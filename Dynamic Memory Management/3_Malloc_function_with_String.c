//  malloc() function with String

#include <stdio.h> 
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main () 
{
	char s1[25] = "Nils Patel";
	int len = strlen(s1);
	char *ps;
	clrscr();

	ps = ( char* ) malloc( ( len+1 ) * sizeof( int ) );
	strcpy( ps, s1 );

	printf( "\n ps = %s",  ps );
	free( ps );

	getch();
	return 0;
}
// Output:
//  ps = Nils Patel