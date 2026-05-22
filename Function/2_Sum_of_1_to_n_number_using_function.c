//  Sum of 1 to n number using function
#include<stdio.h>
#include<conio.h>
void main()
{
	int addn(int);
	int n,ans;
	printf("Enter value n:>>");
	scanf("%d",&n);
	ans = addn(n);
	printf("Answer = %d",ans);
}
int addn(int m)
{
	int total=0;
	for(int i=1;i<=m;i++)
	{
		total+=i;
	}
       return total;
}
// Output:
// 	Enter value n:>>5
// 	Answer=15