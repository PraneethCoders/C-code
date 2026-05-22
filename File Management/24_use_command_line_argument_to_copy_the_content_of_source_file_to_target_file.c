// use command line argument to copy the content of source file to target file
#include <stdio.h>
#include <conio.h>
#include <process.h>

int main( int  argc, char  *argv[ ] )
{
	FILE  *fs, *ft;
	char  ch;
	clrscr();

	if( argc != 3 )
	{
		puts( "Improper Number of Arguments." );
		exit( 1 );
	}

	fs = fopen( argv[1], "r" );
	if ( fs == NULL )
	{
		puts( "Unable to Open Source File." );
		exit( 1 ) ;
	}

	ft = fopen ( argv[2], "w" );
	if ( ft == NULL )
	{
		puts( "Unable to Open Target File." );
		fclose( fs );
		exit( 1 );
	}

	while( 1 )
	{
		ch = fgetc( fs );

		if( ch == EOF )
			break;
		else
			fputc( ch, ft ) ;
	}

	fclose( fs ) ;
	fclose( ft ) ;

	getch();
	return 0;
}
// Output:
//  C:\files>file123 demo myfiledemo