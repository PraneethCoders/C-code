// Find even odd numbers between 1 to 100
#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	i=1;
	while(i<=10)
	{
		if(i%2==0)
		{
			printf("%d is Even\n",i);
		}
		else
		{
			printf("%d is Odd\n",i);
		}
	i++;
	}
}
// Output:
// 	1  is Odd
// 	2  is Even
// 	3  is Odd
// 	4  is Even
// 	5  is Odd
// 	6  is Even
// 	7  is Odd
// 	8  is Even
// 	9  is Odd
// 	10  is Even