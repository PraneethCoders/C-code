// Store sum of any two number in address of another variable
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	int *p1,*p2,*p3;
	p1=&a;
	p2=&b;
	printf("Enter Two value:");
	scanf("%d%d",p1,p2);
	p3=&c;
	*p3=*p1+*p2;
	printf("\n Sum of two no is:>>%d",*p3);
	
}
// Output:
// 	Enter Tow Value:85 52
// 	Sum of two no is:>>137