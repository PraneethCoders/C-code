// find LCM and HCF of Two Number
#include <stdio.h> 
#include <conio.h>
int main() 
{ 
	int a, b, g, hcf, i, lcm;

	printf( " Enter Two Numbers : " );
	scanf( "%d %d", &a, &b );

	if(a > b)
		g = a;
	else
		g = b;
	
	for(i=g ; i<=(a*b) ; i++)
	{
		if((i%a == 0) && (i%b == 0))
		{
			lcm = i;
			break;
		}
	}

	printf( "\n The LCM of given Numbers is = %d", lcm );
	hcf = (a * b) / lcm;
	printf( "\n The HCF of given Numbers is = %d", hcf );

	return 0;
}
// Output:
//  Enter Two Numbers : 12 18
//  The LCM of given Numbers is = 36
//  The HCF of given Numbers is = 6