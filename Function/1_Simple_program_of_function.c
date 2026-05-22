// Simple program of function
#include<stdio.h>
void printline();
int main()
{
	printline();
	printf("\n It is The Programming \n");
	printline();
}
void printline(void)
{
	for(int i=1;i<23;i++)
	{
		printf("-");
	}
}
// Output:
// 	-----------------------
// 	It is The Programming
// 	-----------------------