// find HCF and LCM of Two Number
#include <stdio.h> 
#include <conio.h>
 
int main() 
{ 
	int a, b, s, hcf, i, lcm;

	printf(  " Enter Two Numbers : " );
	scanf( "%d %d", &a, &b );

	if(a < b)
		s = a;
	else
		s = b;
	
	for(i=1 ; i<=s ; i++)
	{
		if((a%i == 0) && (b%i == 0))
		{
			hcf = i;
		}
	}

	printf( "\n The HCF of given Numbers is = %d", hcf );
	lcm = (a * b) / hcf;
	printf( "\n The LCM of given Numbers is = %d", lcm );

	return 0;
}
// Output:
//  Enter Two Numbers : 12 18
//  The HCF of given Numbers is = 6
//  The LCM of given Numbers is = 36