//  Show Actual value and Address of Actual value
#include<stdio.h>
#include<conio.h>
void main()
{
	int a=23;
	int *p;
	clrscr();
	p=&a;
	printf("Address of a : %u",&a);
	printf("\nAddress of p : %u",p);
	printf("\nValue of a : %d",a);
	printf("\nValue of *p : %u",*p);
	getch();
}
// Output:
// 	Address of a : 65524
// 	Address of p : 65524
// 	Value of a : 23
// 	Value of *p : 23