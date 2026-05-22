// Function with argument with return type
#include<stdio.h>
#include<conio.h>
int sos(int);
void main()
{
	int n,ans;
	// clrscr();
	printf("\n Enter The Value of N:>>");
	scanf("%d",&n);
	ans=sos(n);
	printf("\n The Sum is:>>%d",ans);
	// getch();
}
int sos(int i)
{
	int j=1,k=0;
	for(j=1;j<=i;j++)
	{
		k=j*j;
	}
	return k;
}
// Output:
// 	Enter The Value of N:>>
// 	5
// 	The Sum is:>>25