/* Print pattern
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

	for(i=5;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
    
}
// Output:
// 	5 4 3 2 1
// 	4 3 2 1
// 	3 2 1
// 	2 1
// 	1