// Print series  1 10 2 9 3 8 4 7 5 6 6 5 7 4 8 3 9 2 10 1
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a=1,b=10;
	i=1;
	while(i<=10)
	{
		printf("%d\n",a);
		a++;
		printf("%d\n",b);
		b--;
		i++;
	}
}
// Output:
// 	1 10 2 9 3 8 4 7 5 6 6 5 7 4 8 3 9 2 10 1