// Find sum of array

#include<stdio.h>
int main()
{
	int num[10],sum;
	
	printf("Enter the 10 number:\n");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&num[i]);
		sum+=num[i];
	}
	printf("sum=%d",sum);
	
}
// Output:
// 	Enter the 10 number:
// 	10
// 	20
// 	30
// 	40
// 	50
// 	60
// 	70
// 	90
// 	80
// 	100
// 	sum=550