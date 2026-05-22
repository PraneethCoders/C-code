// Find Reverse Number Of Given Number
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,rev=0,s;
	printf("n::");
	scanf("%d",&n);
	while(n>0)
	{
	   s=n%10;
	   rev=rev*10+s;
	   n=n/10;
	}
	printf("rev:%d",rev);
}
// Output:
// 	n::526
// 	rev:625