/* Print Pattern
1 2 3 4 5
  2 3 4 5
    3 4 5
      4 5
        5
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,k;
	
	printf("Enter the value::");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(k=1;k<i;k++)
		{
			printf(" ");
		}
		for(j=i;j<=n;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	
}
// Output:
// 	Enter the value::5
// 	1 2 3 4 5
// 	  2 3 4 5
// 	    3 4 5
// 	      4 5
// 	        5