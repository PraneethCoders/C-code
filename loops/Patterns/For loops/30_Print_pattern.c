/* Print pattern
*               *
* *           * *
* * *       * * *
* * * *   * * * *
* * * * * * * * *
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,k,j;

	printf("Enter any value:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		for(k=1;k<2*(n-i);k++)
		{
			printf("  ");
		}
		for(j=1;j<=i;j++)
		{
			if(i==n&&j==n);
			else
			{
				printf("* ");
			}
		}
		printf("\n");
	}
	
}
// Output:
// 	Enter the value::5
// 	*               *
// 	* *           * *
// 	* * *       * * *
// 	* * * *   * * * *
// 	* * * * * * * * *