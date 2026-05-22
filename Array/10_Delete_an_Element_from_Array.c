// Delete an Element from Array
#include<stdio.h>
#include<conio.h>
void main()
{
	int m[10],del,i,j,n;
	clrscr();
	printf("How many elements ?");
	scanf("%d",&n);
	printf("\nEnter %d elements\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m[i]);
	}
	printf("\nEnter number for delete:");
	scanf("%d",&del);
	for(i=0;i<n;i++)
	{
		if(m[i]==del)break;
	}
	for(j=i;j<n;j++)
	{
		m[j]=m[j+1];
	}
	n--;
	printf("\nAfter deletion\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",m[i]);
	}
	getch();
}
//Output:
//	How many elements?5
//	Enter 5 elements
//	1
//	20
//	10
//	30
//	60
//	Enter element for delete
//	20
//	After deletion
//	1
//	10
//	30
//	60
