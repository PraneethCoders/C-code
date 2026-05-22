//   read integer values from File using getw() function
#include <stdio.h>
#include <conio.h>

int main()
{
	FILE *fp;
	int n;
	clrscr();

	fp = fopen( "file/data-1.txt", "r" );

	printf( "\n Numbers are :" );
	n = getw( fp );
	while( n != EOF )
	{
		printf( "  %d", n );
		n = getw( fp );
	}

	fclose( fp );
	getch();
   	return 0;
}
// Output:
//  Numbers are :  20  40  50