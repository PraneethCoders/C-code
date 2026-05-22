/* Print Pattern
5 4 3 2 1
  4 3 2 1
    3 2 1
      2 1
        1

*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,k;
	
	printf("Enter the value::");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(k=1;k<=n-i;k++)
		{
			printf(" ");
		}
		for(j=i;j>=1;j--)
		{
			printf(" %d",j);
		}
		printf("\n");
	}
	
}
// Output:
// 	Enter the value::5
// 	5 4 3 2 1
// 	  4 3 2 1
// 	    3 2 1
// 	      2 1
// 	        1