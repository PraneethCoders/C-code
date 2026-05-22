// Check Given Number Is Armstrong Or Not
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,s,sum=0,temp;
	printf("n::");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		s=n%10;
		sum=sum+(s*s*s);
		n=n/10;
	}
	if(sum==temp)
	{
 		printf("Number Is Armstrong");
	}
	else
	{
 	 	printf("Number Is Not Armstrong");
	}
}
// Output:
// 	n::153
// 	Number Is Armstrong