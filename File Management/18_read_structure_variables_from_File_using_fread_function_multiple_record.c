// read structure variables from File using fread() function multiple record

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

	struct student s;
   	clrscr();

	fp = fopen( "students", "rb" );

   	while( fread( &s, sizeof( s ), 1, fp ) == 1 )
   	{
   		printf( "\n\n Roll No.    : %d", s.rno );
   		printf( "\n Enter Name  : %s", s.allTopicName );
   		printf( "\n Enter Marks : %.2f", s.marks );
   	}

	fclose( fp );
   	getch();
   	return 0;
}

// Output:

//  Roll No.    : 23
//  Enter Name  : Nils
//  Enter Marks : 84.5

//  Roll No.    : 22
//  Enter Name  : Pintu
//  Enter Marks : 81.3