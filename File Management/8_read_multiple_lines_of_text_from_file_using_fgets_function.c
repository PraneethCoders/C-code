//  read multiple lines of text from file using fgets() function
#include <stdio.h>
#include <conio.h>

int main()
{
	FILE *fp;
	char s[50];
	clrscr();

	fp = fopen( "file/data-1.txt", "r" );

	printf( " Entered Text : \n" );
	fgets( s, 49, fp );
	while( !feof( fp ) )
	{
		printf( "%s", s );
		fgets( s, 49, fp );
	}

	fclose( fp );
   	getch();
   	return 0;
}
// Output:
//  Entered Text : 
//  C
//  Programming
//  Examples