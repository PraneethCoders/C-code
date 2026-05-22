/*
1^1+2^2+3^3+...+n^2 Enter N:4
sum=30	
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,sum=0;

	printf("1^1+2^2+3^3+...+n^2 Enter N:");
	scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			sum=sum+(i*i);
		}
		printf("sum=%d",sum);
        
}
// Output:
// 	1^1+2^2+3^3+...+n^2 Enter N:4
// 	sum=30