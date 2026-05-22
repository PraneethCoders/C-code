// Insert an Element in Array
#include<stdio.h>
#include<conio.h>
void main()
{
	int m[10],ins,i,n,pos;
	clrscr();
	printf("How many elements ?");
	scanf("%d",&n);
	printf("\nEnter %d elements: \n",n);
	for(i=0;i<n;i++)
	{
		printf("\n");
		scanf("%d",&m[i]);
	}
	printf("\nEnter number to be inserted:");
	scanf("\n%d",&ins);
	printf("\nEnter position:");
	scanf("\n%d",&pos);
	for(i=n;i>pos;i--)
	{
		m[i]=m[i-1];
	}
	m[pos]=ins;
	n++;
	printf("\nArray after insertion\n");
	for(i=0;i<n;i++)
	{
		printf("\n%d\n",m[i]);
	}
	getch();
}
//Output:
//	How many elements:5
//	Enter 5 elementes:
//	1
//	2
//	5
//	6
//	4
// 	Enter number to be inserted:3
//	Enter position:2
//	Array after insertion
//	1
//	2
//	3
//	5
//	6
//	4
