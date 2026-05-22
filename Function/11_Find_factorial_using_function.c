//  Find factorial using function
int fact(int);
#include<stdio.h>
#include<conio.h>
void main()
{
	int ans,n;
	
	printf("\n\n\t\tEnter The Value of N:>>");
	scanf("%d",&n);
	ans=fact(n);
     	printf("\n\t\t Your Factorial is:>>%d",ans);
       	
}
int fact(int n)
{
	int facto=1;
	if(n==1)
	{
		return facto;
	}
	else
	{
		facto=n*fact(n-1);
		return(facto);
	}
}
// Output:
// 	Enter The Value of N:>>5
// 	Your Factorial is:>>120
