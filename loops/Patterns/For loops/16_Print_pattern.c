/* Print Pattern
            1
           2 2
          3 3 3
         4 4 4 4
        5 5 5 5 5
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,n;

	for(i=1;i<=5;i++)
	{
		for(k=1;k<=n-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf(" %d",i);
		}
		printf("\n");
	}
	
}
// Output:
// 	            1
// 	           2 2
// 	          3 3 3
// 	         4 4 4 4
// 	        5 5 5 5 5