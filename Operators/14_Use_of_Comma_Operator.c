//  sizeof operator

#include <stdio.h>
#include <conio.h>

int  main()
{ 
	clrscr();
   	
	printf( "The size of an int is:\t\t" );
   	printf( "%d bytes.\n", sizeof(int) );

   	printf( "The size of a short int is:\t" );
   	printf( "%d bytes.\n", sizeof(short) );

   	printf( "The size of a long int is:\t" );;
   	printf( "%d bytes.\n", sizeof(long) );

   	printf( "The size of a char is:\t\t" );
   	printf(  "%d bytes.\n", sizeof(char) );

   	printf( "The size of a float is:\t\t" );
   	printf(  "%d bytes.\n", sizeof(float) );

   	printf( "The size of a double is:\t" );
   	printf(  "%d bytes.\n", sizeof(double) );

   	getch();
	return 0;
}

// Output: 

// //  The size of an int is:			4 bytes.
// //  The size of a short int is:		2 bytes.
// //  The size of a long int is:		4 bytes.
// //  The size of a char is:			1 bytes.
// //  The size of a float is:		4 bytes.
// //  The size of a double is:		8 bytes.