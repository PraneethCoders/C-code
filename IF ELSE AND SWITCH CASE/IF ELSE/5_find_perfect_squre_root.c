// find perfect squre root

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int n,a;
	
	printf("Enter the value of N:\n");
	scanf("%d",&n);
	a=sqrt(n);
	if(n-(a*a)==0)
		printf("\n\n\nIt is perfect squre");
	else
		printf("\n\n\nIt is not perfect squre");
	
}
//Output:
//	Enter the value of N:
//	25
//	It is petfect squre
