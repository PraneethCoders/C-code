/* Print Pattern

            1
          1 2
        1 2 3
      1 2 3 4
    1 2 3 4 5

*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,k;
	
	printf("Enter the value::\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=n-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	
}
// Output:
// 	Enter the value::5
// 	            1
// 	          1 2
// 	        1 2 3
// 	      1 2 3 4
// 	    1 2 3 4 5