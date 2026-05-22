/* Print Pattern
E D C B A
D C B A
C B A
B A
A
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	char ch='A'-1;
	int i,j;
	
	for(i=5;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		{
			printf("%c",ch+j);
		}
		printf("\n");
	}
	
}
// Output:
// 	E D C B A
// 	D C B A
// 	C B A
// 	B A
// 	A