//  write multiple lines of text to File using fputs() function
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	FILE *fp;
	char s[50];
	clrscr();

	fp = fopen( "file/data-1.txt", "w" );

	printf( " Enter Lines of Text : \n" );
	gets( s );

	while( strlen(s) > 0 )
	{
		fputs( s, fp );
		fputs( "\n", fp );
		gets( s );
	}

	fclose( fp );
   	getch();
   	return 0;
}
// Output:
//  Enter Lines of Text : 
//  C
//  Programming
//  Examples