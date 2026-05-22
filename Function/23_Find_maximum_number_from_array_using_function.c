// Find maximum number from array using function
#include<stdio.h>
#include<conio.h>
void main()
{
	int max(int[],int);
	int arr[1],n,i;
	printf("How many elements ?");
	scanf("%d",&n);
	printf("n\n\t\t\tEnter %d elements below\n\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("MAXIMUM :=%d",max(arr,n));
	
}
int max(int m[],int p)
{
	int maximum=0,i;
	for(i=0;i<p;i++)
	{
		if(m[i]>maximum)maximum=m[i];
	}
	return maximum;
}
//Output:
//	How many elements ?5
//	Enter 5 Elements below
//	52
//	63
//	96
//	85
//	36
//	MAXIMUM :96
