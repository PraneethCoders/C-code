//  read char values from File using getc() or fgetc() function
#include <stdio.h>
#include <conio.h>

int main()
{
	FILE *fp;
	char ch;
	clrscr();

	fp = fopen( "file/data-1.txt", "r" );

	printf( "String : " );
	ch = getc( fp );	/*  ch = fgutc( fp );   */
	while( ch != EOF )
	{
		printf( "%c", ch );
		ch = getc( fp );   /*  ch = fgutc( fp );   */
	}

   	fclose( fp );
	getch();
   	return 0;
}
// Output:
//  String : C Programming Examples