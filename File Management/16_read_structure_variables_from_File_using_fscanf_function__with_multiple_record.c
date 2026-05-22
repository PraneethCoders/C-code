// read structure variables from File using fscanf() function  with multiple record
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

	fp = fopen( "students", "r" );

   	while( fscanf( fp, "%d %s %f", &s.rno, s.allTopicName, &s.marks) != EOF )
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