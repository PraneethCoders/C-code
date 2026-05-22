/* Print Pattern

            5
          4 4
        3 3 3
      2 2 2 2
    1 1 1 1 1

*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;

	for(i=5;i>=1;i--)
	{
		for(k=1;k<i;k++)
		{
		printf(" ");
		}
	for(j=i;j<=5;j++)
		{
		printf("%d",i);
		}
	printf("\n");
	}

}
// Output:
// 	            5
// 	          4 4
// 	        3 3 3
// 	      2 2 2 2
// 	    1 1 1 1 1