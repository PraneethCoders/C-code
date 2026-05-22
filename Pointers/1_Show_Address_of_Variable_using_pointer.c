// Show Address of Variable using pointer
#include<stdio.h>
#include<conio.h>
void main()
{
	int a=12;
	float b=24.25;
	char c='a';
	clrscr();
	printf("\n Address of A : %u",&a);
	printf("\n Address of B : %u",&b);
	printf("\n Address of C : %u",&c);
	getch();
}
// Output:
// 	Address of A : 65524
// 	Address of B : 65520
// 	Address of C : 65519