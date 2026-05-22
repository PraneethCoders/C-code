// Find Sum Of First And Last Digit Of Given Number
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,s,sum=0;
	printf("n::");
	scanf("%d",&n);
	sum=n%10;

	while(n>0)
	{
		s=n%10;
	     	n=n/10;
	}
	sum=sum+s;
	printf("sum:%d",sum);
}
// Output:
// 	n::1256
// 	sum:7