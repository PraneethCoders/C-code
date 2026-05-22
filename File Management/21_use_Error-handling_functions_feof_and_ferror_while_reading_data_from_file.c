//  use Error-handling functions feof( ) and ferror( ) while reading data from file
#include <stdio.h>
#include <conio.h>

int main( )
{
	FILE  *fp ;
	char  ch ;
	clrscr() ;

	fp = fopen( "mydemo", "r" ) ;
	printf( "\n " );
	while( !feof ( fp ) )
	{
		ch = fgetc( fp ) ;
		if( ferror( fp ) )
		{
			printf( "\n Error in Reading File." ) ;
			break ;
		}
		else
			printf( "%c", ch ) ;
	}

	fclose( fp ) ;

	getch();
	return 0;
}
// Output:
//  Error in Reading File.