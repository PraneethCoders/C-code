/* Print Pattern

 1
 1 2
 1 2 3
 1 2 3 4
 1 2 3 4 5

*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	
	i=1;
	while(i<=5)
	{
		j=1;
		while(j<=i)
		{
			printf("%d",j);
			j++;
		}
		i++;
		printf("\n");
	}
}
// Output:
// 	1
// 	1 2
// 	1 2 3
// 	1 2 3 4
// 	1 2 3 4 5