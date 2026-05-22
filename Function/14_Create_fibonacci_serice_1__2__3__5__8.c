//  Create fibonacci serice 1  2  3  5  8
#include<stdio.h>
#include<conio.h>
void fibo(int n);
void fibo(int m)
{
	int t1=0,t2=1,t3;
	for(int i=1;i<=m;i++){
	while(i<=m){
		t3 = t1+t2;
		t1 = t2;
		t2 = t3;
		printf("%d ",t3);
		i++;
		}
	}
}
int main()
{
	int n;
	printf("Enter The Value of n:>>");
	scanf("%d",&n);
	fibo(n);
}
// Output:
// 	Enter The Value of n:>>5
// 	1  2  3  5  8