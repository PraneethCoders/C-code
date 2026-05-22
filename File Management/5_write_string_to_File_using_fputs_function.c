//  write string to File using fputs() function
#include <stdio.h>
#include <conio.h>

int main()
{
	FILE *fp;
	char s[50];
	clrscr();

	fp = fopen( "file/data-1.txt", "w" );

	printf( " Enter String : " );
	gets( s );

	fputs( s, fp );
	fputs( "\n", fp );

	fclose( fp );
   	getch();
   	return 0;
}
// Output:
//  Enter String : C Programming Examples