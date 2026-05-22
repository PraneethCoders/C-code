/* Print Pattern
         E
       D E
     C D E
   B C D E
 A B C D E
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	char ch='A'-1;
	int i,j,k;
    
	for(i=5;i>=1;i--)
	{
		for(k=1;k<i;k++)
		{
			printf(" ");
		}
		for(j=i;j<=5;j++)
		{
			printf("%c",ch+j);
		}
		printf("\n");
	}
}
// Output:
// 		     E
// 	       D E
//       C D E
// 	   B C D E
// 	 A B C D E