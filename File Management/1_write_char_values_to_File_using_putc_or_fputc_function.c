//  write char values to File using putc() or fputc() function

#include <stdio.h>
#include <conio.h>

int main()
{
	FILE *fp;
	char ch;
   	clrscr();
	fp = fopen( "file/data-1.txt", "w" );

	printf( " Enter String ( ctrl+z to end ) : " );
	ch = getchar();
	while( ch != EOF )
	{
		putc( ch, fp );	/*  fputc( ch, fp );  */
		ch = getchar();
	}

	fclose( fp );
   	getch();
   	return 0;
}

//Output:
//Enter String ( ctrl+z to end ) : C Programming Examples^Z
