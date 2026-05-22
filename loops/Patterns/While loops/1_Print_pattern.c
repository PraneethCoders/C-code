/* Print Pattern
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
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
			printf("%d",i);
			j++;
		}
	 i++;
	}
	
}
// Output:
// 		   1
//         2 2
//         3 3 3
//         4 4 4 4
//         5 5 5 5 5