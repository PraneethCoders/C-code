/*
1
1 4
1 4 9
1 4 9 16
1 4 9 16 25
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,j;
	printf("Enter any value:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d",j*j);
        }
	printf("\n");
	}
}
// Output:
// 	Enter the value::5
// 	1
// 	1 4
// 	1 4 9
// 	1 4 9 16
// 	1 4 9 16 25