//  read different types of values from File using fscanf() function
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	FILE *fp;
   	int rno;
	char allTopicName[50];
   	float marks;
	clrscr();


   	fp = fopen( "test", "r");
   	fscanf( fp, "%d %s %f", &rno, allTopicName, &marks );
   	
	printf( "\n Details from file : " );
   	printf( "\n Roll No. : %d", rno );
   	printf( "\n Name     : %s", allTopicName );
   	printf( "\n Marks    : %.2f", marks );

	fclose( fp );
   	getch();
   	return 0;
}
// Output:
//  Details from file : 
//  Roll No. : 290
//  Name     : Nils
//  Marks    : 84.69