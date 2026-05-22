// find sum two array
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],b[10],c[10],i,n;
	clrscr();
	printf("Enter size of array:");
	scanf("%d",&n);
	printf("Enter %d elements of array A\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter %d elements of array B\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		c[i]=a[i]+b[i];
	}
	printf("third array \n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",c[i]);
	}
	getch();
}
//Output:
//	Enter size of array:5
//	Enter 5 elements of array A
//	5	
//	2
//	3
//	4
//	6	
//	Enter 5 elements of array B
//	5
//	2
//	3
//	4
//	6
//	third array
//	10
//	4
//	6
//	8
//	12
