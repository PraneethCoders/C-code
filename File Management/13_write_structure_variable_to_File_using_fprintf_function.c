// write structure variable to File using fprintf() function

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

	fp = fopen( "students", "w" );

	printf( " Enter Roll No. : " );
   	scanf( "%d", &s.rno );
   	printf( " Enter Name : " );
   	fflush( stdin );
   	gets( s.allTopicName );
   	printf( " Enter Marks : " );
	scanf( "%f", &s.marks );

   	fprintf( fp, "%d %s %f\n", s.rno, s.allTopicName, s.marks );

	fclose( fp ) ;
   	getch();
   	return 0;
}
// Output:
//  Enter Roll No. : 23
//  Enter Name : Nils
//  Enter Marks : 92.5