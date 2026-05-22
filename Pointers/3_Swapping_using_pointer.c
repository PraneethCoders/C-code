// Swapping using pointer
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	int *x,*y,t;
	clrscr();
	printf("Enter the value:");
	scanf("%d%d",&a,&b);
	printf("\n\n");
		x=&a;
		y=&b;
		t=*y;
		*y=*x;
		*x=t;
	printf("x:%d\nY:%d",*x,*y);
	getch();
}
// Output:
// 	Enter the value:85 96
// 	x=96
// 	Y=85