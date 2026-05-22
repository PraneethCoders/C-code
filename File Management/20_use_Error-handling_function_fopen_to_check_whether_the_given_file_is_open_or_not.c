//  use Error-handling function fopen( ) to check whether the given file is open or not
#include <stdio.h>
#include <conio.h>
#include <process.h>

int main( )
{
	FILE  *fp ;
	clrscr();

	fp = fopen( "text.txt", "r" ) ;
	if ( fp == NULL )
	{
		puts( "\n Unable to Open File." ) ;
      	getch();
		exit( 1 ) ;
	}

	getch();
	return 0;
}
// Output:
//  Unable to Open File.