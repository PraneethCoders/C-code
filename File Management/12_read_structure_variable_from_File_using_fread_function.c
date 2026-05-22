//  read structure variable from File using fread() function
#include <stdio.h>
#include <conio.h>
#include <process.h>

struct student
{
	int rno;
	char allTopicName[50];
	float marks;
};

int main( )
{
	FILE *fp;

	struct student s;

	fp = fopen( "students", "rb" );
   	fread( &s, sizeof( s ), 1, fp );

	printf( "\n Roll No.    : %d", s.rno );
   	printf( "\n Enter Name  : %s", s.allTopicName );
   	printf( "\n Enter Marks : %.2f", s.marks );

	fclose( fp ) ;
   	getch();
   	return 0;
}

// Output:
//  Roll No.    : 290
//  Enter Name  : Nils
//  Enter Marks : 84.69