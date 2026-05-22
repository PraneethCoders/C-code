//  write integer values to File using putw() function

#include <stdio.h>
#include <conio.h>

int main()
{
	FILE *fp;
	int n;
   	clrscr();
	fp = fopen( "file/data-1.txt", "w" );

	while( 1 )
	{
		printf( " Enter Number ( -1 to end ) : " );
		scanf( "%d", &n );
		if( n == -1 )
			break;
		putw( n, fp );
	}

	fclose( fp );
   	getch();
   	return 0;
}

// Output:
//  Enter Number ( -1 to end ) : 20
//  Enter Number ( -1 to end ) : 40
//  Enter Number ( -1 to end ) : 50
//  Enter Number ( -1 to end ) : -1