//  write structure variables to File using fprintf() function to store multiple record

#include <stdio.h>
#include <conio.h>

struct student
{
	int rno;
	char allTopicName[50];
	float marks;
};

int main( )
{
	FILE *fp;
	char another = 'Y';

	struct student s;
   	clrscr();

	fp = fopen ( "students", "w" ) ;

	while ( another == 'Y' || another == 'y' )
	{
		printf( "\n Enter Roll No, Name & Marks : " );
		scanf( "%d %s %f", &s.rno, s.allTopicName, &s.marks );
		fprintf( fp, "%d %s %f\n", s.rno, s.allTopicName, s.marks );
		printf( " Add another record (Y/N) : " );
		fflush( stdin );
		another = getche( );
	}

	fclose( fp );
   	getch();
   	return 0;
}
// Output:
//  Enter Roll No, Name & Marks : 23   Nils  84.5
//  Add another record (Y/N) : y
//  Enter Roll No, Name & Marks : 22   Pintu  81.3
//  Add another record (Y/N) : n