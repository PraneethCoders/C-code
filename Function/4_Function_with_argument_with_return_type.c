// Function with argument with return type
#include<stdio.h>
#include<conio.h>
int soo(int);
int main()
{
	int n,ans;
	printf("\n\n Enter The Value of N:>>");
	scanf("%d",&n);
	ans=soo(n);
	printf("\n The Sum is :>>%d",ans);
}
int soo(int i)
{
	int j,k=0;
	for(j=1;j<=i;j+=2)
	{
		k+=j;
	}
        return k;
}
// Output:
// 	Enter The Value of N:>>
// 	2
// 	1