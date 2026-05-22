//  write different types of values to File using fprintf() function

#include <stdio.h>
#include <conio.h>

int main()
{
	FILE *fp;
  	int rno = 290;
	char allTopicName[50] = "Nils";
   	float marks = 84.69;
	clrscr();


   	fp = fopen( "file/data-1.txt", "w");
   	fprintf( fp, "%d %s %f\n", rno, allTopicName, marks );
   	printf( "\n Details saved in file." );

	fclose( fp );
   	getch();
   	return 0;
}
// Output:
//  Details saved in file.