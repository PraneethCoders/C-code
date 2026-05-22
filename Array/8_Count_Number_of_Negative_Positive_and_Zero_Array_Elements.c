// Count Number of Negative,Positive and Zero Array Elements
#include<stdio.h>
#include<conio.h>
void main()
{
	int m[10],i,pos=0,neg=0,zero=0,n;
	printf("How many numbers ?");
	scanf("%d",&n);
	printf("\nEnter %d integer elements \n",n);
	for(i=0;i<n;i++)
	{
		printf("\n");
		scanf("%d",&m[i]);
		if(m[i]>0)
		{
			pos++;
		}
		else if(m[i]<0)
		{
			neg++;
		}
		else 
		{
			zero++;
		}
	}
	printf("\npositive elements=%d\n",pos);
	printf("\nnegative elements=%d\n",neg);
	printf("\nzero elements=%d\n",zero);
}
//Output:
//	How many numbers ?5
//	Enter 5 integer elements
//	1
//	2
//	0
//	-3
//	0
//	positive elements=2
//	negative elements=1
//	zero elements=2
