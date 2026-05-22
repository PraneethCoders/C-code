/*  Print Pattern
	    0
      1 0 1
    2 1 0 1 2 
  3 2 1 0 1 2 3
4 3 2 1 0 1 2 3 4 
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,j,k;
	printf("Enter any value of N:\n");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(k=n;k>=i;k--)
		{
			printf("  ");
		}
		for(j=i;j>=0;j--)
		{
			printf(" %d",j);
		}
		for(j=1;j<=i;j++)
		{
			printf(" %d",j);
		}
		printf("\n");
	}
	
}
// Output:
// 	Enter the value::5
// 		    0
// 	      1 0 1
// 	    2 1 0 1 2 
// 	  3 2 1 0 1 2 3
// 	4 3 2 1 0 1 2 3 4