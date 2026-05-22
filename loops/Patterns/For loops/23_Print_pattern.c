/*  Print Pattern
    	a
      a b
    a b c
  a b c d
a b c d e
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	char ch='a'-1;
	int i,j,k;

	for(i=1;i<=5;i++)
	{
		for(k=1;k<=5-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%c",ch+j);
		}
		printf("\n");
	}
    
}
// Output:
// 		    a
// 	      a b
// 	    a b c
// 	  a b c d
// 	a b c d e