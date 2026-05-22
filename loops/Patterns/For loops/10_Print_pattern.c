/* Print pattern
1 2 3 4 5
  1 2 3 4
    1 2 3
      1 2
        1
        
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,k;

	printf("Enter the value::\n");
	scanf("%d",&n);
	for(i=5;i>=1;i--)
	{
		for(k=1;k<=n-i;k++)
		{
			printf(" ");
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
// 	1 2 3 4 5
// 	  1 2 3 4
// 	    1 2 3
// 	      1 2
// 	        1