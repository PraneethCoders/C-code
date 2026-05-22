/*
 5 4 3 2 1
 4 3 2 1
 3 2 1
 2 1
 1
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	
 	i=5;
	while(i>=1)
	{
		j=5;
		while(j<=i)
		{
			printf("%d",j);
			j--;
		}
	i++;
	printf("\n");
	}
	
}
// Output:
// 	5 4 3 2 1
// 	4 3 2 1
// 	3 2 1
// 	2 1
// 	1