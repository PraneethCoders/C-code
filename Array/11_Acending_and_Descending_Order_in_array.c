// Acending and Descending Order in array
#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[10],tmp[10],i,j,temp;
	for(i=0;i<10;i++)
	{
		printf("\nEnter value of %d Elements:",i+1);
		scanf("%d",&arr[i]);
		tmp[i]=arr[i];
	}
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("\n-------------------------------------------");
	printf("\n Original\tAccending\tDescending");
	printf("\n-------------------------------------------");
	for(i=0,j=9;i<10;i++,j--)
	{
		printf("\n%d\t\t%d\t\t%d",tmp[i],arr[i],arr[j]);
	}
	printf("\n-------------------------------------------");
	printf("\n\n\n press any key-----");
}
//Output:
//	Enter value of 1 Elements:10
//	Enter value of 2 Elements:20
//	Enter value of 3 Elements:23
//	Enter value of 4 Elements:52
//	Enter value of 5 Elements:1
//	Enter value of 6 Elements:30
//	Enter value of 7 Elements:40
//	Enter value of 8 Elements:55
//	Enter value of 9 Elements:3
//	Enter value of 10 Elements:2
//	-------------------------------------------
//	Original	Accending	Descending
//	-------------------------------------------
//	10		1		55
//	20		2		52
//	23		3		40		
//	52		10		30
//	1		20		23	
//	30		23		20
//	40		30		10
//	55		40		3
//	3		52		2
//	2		55		1
