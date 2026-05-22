// Print series 1 -4  9 -16 25 -36 49 -64 81 -100
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
			printf("-%d\t",i*i);
		}
		else
		{
			printf("%d\t",i*i);
		}
	i++;
	}
}
// Output:
// 	1 -4  9 -16 25 -36 49 -64 81 -100