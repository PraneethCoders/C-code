// Find factorial of given number
#include<stdio.h>
#include<conio.h>
void main()
{
	long int a,m=1;
	printf("a::");
	scanf("%ld",&a);

	while(a>0)
	{
		m=a*m;
		a--;
	}
	printf("fact:%ld",m);
}
// Output:
// 	a::5
// 	fact:120