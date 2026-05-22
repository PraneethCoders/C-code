//  show the use of Command-line arguments

#include <stdio.h>
#include <conio.h>

int  main( int argc, char *argv[ ] )
{
  	int i;
	clrscr();

	printf( "\n Program Name: %s\n", argv[0] );

  	for( i=1 ; i<argc ; i++ )
	{
    	printf( "\n Argument %d : %s", i, argv[i] );
	}

	getch();
	return 0;
}

// Output:

//  Program Name: C:\file\demo.exe


//  Program Name: C:\file\demo.exe

//  Argument 1  :  AA
//  Argument 2  :  AB
//  Argument 3  :  BC
//  Argument 4  :  DA