//  use Random access function fseek( ), ftell( ) and rewind( )  function
#include <stdio.h>
#include <conio.h>

int  main()
{
	FILE *fp;
	char ch;
	long n;
	clrscr();

	fp = fopen( "demo", "w" );
	printf( " Enter String ( ctrl+z to end ) : " );
	ch = getchar();
	while( ch != EOF )
	{
		putc( ch, fp );
		ch = getchar();
	}
	fclose( fp );

	fp = fopen( "demo", "r" );
	printf( "\nChar - Pos" );

	n = 0L;
	while( feof(fp) == 0 )
	{
		fseek(fp, n, 0);
		printf("\n%3c  - %2d", fgetc(fp), ftell(fp) );
		n = n + 1L;
	}

	rewind(fp);
	printf("\n String : ");
	ch = fgetc( fp );
	while( ch != EOF )
	{
		printf( "%c", ch );
		ch = fgetc( fp );
	}

	fclose( fp );
	getch();
	return 0;
}

// Output:
//  Enter String ( ctrl+z to end ) : Nils

//  Char  -  Pos
//    N   -   0
//    i   -   1
//    l   -   2
//    s   -   3
//        -   4
//   String  :  Nils