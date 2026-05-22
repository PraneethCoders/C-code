// Addition operation on Pointer
#include<stdio.h>
#include<conio.h>
void main()
{
	int p;
	int *ptr;
	ptr=&p;
	printf("enter value:");
	scanf("%d",ptr);
	*ptr=*ptr+5;
	printf("\n value of p is:%d",p);
	printf("\n value of *ptr :%d",*ptr);
}
// Output:
// 	enter value:5
// 	value of p is:10
// 	value of *ptr :10