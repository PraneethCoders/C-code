/* Find LCM and GCD of two number */
#include<stdio.h>
int main()
{
	int a,b,t1,t2,lcm,gcd;
	printf("Enter two number: ");
	scanf("%d%d",&a,&b);
	t1=a;
	t2=b;
	while(t1!=t2)
	{
		if(t1>t2)
		{
			t1=t1-t2;
		}
		else
		{
			t2=t2-t1;
		}
	}
	gcd=t1;
	lcm=(a*b)/gcd;
	printf("LCM = %d , GCD = %d",lcm,gcd);
	return 0;
}
// Output:
//  Enter two number: 25 15
//  LCM = 75 , GCD = 5