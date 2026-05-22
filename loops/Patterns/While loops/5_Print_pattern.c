/* Print Pattern
 5
 4 4
 3 3 3
 2 2 2 2
 1 1 1 1 1
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;

	i=5;
	while(i>=1)
	{
		j=i;
		while(j<=5)
		{
			printf("%d",i);
			j++;
		}
	i--;
	}
	
}
// Output:
// 	5
// 	4 4
// 	3 3 3
// 	2 2 2 2
// 	1 1 1 1 1