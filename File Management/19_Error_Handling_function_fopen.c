//  Error Handling function fopen()
#include <stdio.h>
#include <conio.h>

int main()
{
	FILE *fp;
	int n;
	clrscr();

	fp = fopen( "file/data-1.txt", "r" );

	if( fp == NULL )
	{
		printf( "\n File can not open." );
	}
	else
	{
		printf( "\n File is opened." );
	}

	fclose( fp );
	getch();
   	return 0;
}
// Output:
//  File is opened.