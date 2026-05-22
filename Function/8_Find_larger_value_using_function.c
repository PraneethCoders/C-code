// Find larger value using function
int mx(int,int,int);
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,ans;
	
	printf("\n Enter The Value of A,B,C:>>\n");
	scanf("%d%d%d",&a,&b,&c);
	ans=mx(a,b,c);
	printf("The  Maximum Number Is:>>%d",ans);
	
}
int mx(int i,int j,int k)
{
	int g;
	g=((i<j)?((i>k)?i:k):(j>k)?j:k);
	return g;
}
// Output:
// 	Enter The Value of A,B,C:>>
// 	85	
// 	69	
// 	87
// 	The Maximum Number Is:>>87
