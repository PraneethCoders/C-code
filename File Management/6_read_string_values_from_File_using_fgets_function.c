//  read string values from File using fgets() function
#include <stdio.h>
#include <conio.h>

int main()
{
	FILE *fp;
	char s[50];
	clrscr();

	fp = fopen( "file/data-1.txt", "r" );

	printf( "\n String = " );
	fgets( s, 49, fp );
	printf( "%s", s );

	fclose( fp );
   	getch();
   	return 0;
}
// Output:
//  String = C Programmming Examples