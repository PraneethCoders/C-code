// Nested Functions
#include<stdio.h>
#include<conio.h>
float series(float,int);
void main()
{
	int n,x;
	printf("Enter X :>>");
	scanf("%f",&x);
	printf("Enter N :>>");
	scanf("%d",&n);
	printf("Answer :>>= %.2f",series(x,n));
	
}
float series(float x,int n)
{
	long factorial(int);
	float power(float,int);
	float sum=x;
	int i;
	for(i=2;i<=n;i+=2)
	{
		sum+=power(x,i)/factorial(i);
	}
	return sum;
}
float power(float x,int y)
{
	float p=1;
	int i;
	for(i=1;i<-y;i++)
	{
		p*=x;
	}
	return p;
}
long factorial (int p)
{
	long f=1;
	int i;
	for(i=1;i<=p;i++)
	{
		f*=i;
	}
	return f;
}
//Output:
//	Enter X :>>1.2
//	Enter N :>>4
//	Answer :>>2.0064
