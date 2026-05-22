// Find number is even or odd
#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	
	printf("Enter Any Number : \n");
	scanf("%d",&a);
	printf("----------------------\n");
	if(a%2==0)
	{
		printf("\nNumber is Even.");
	}
	else
	{
		printf("\nNumber is Odd.");
	}
	return 0;
}
//Output:
//	Enter Any Number :
//	125
//	----------------------
//	Number is odd.
