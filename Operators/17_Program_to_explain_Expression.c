//  Explain Expression
#include <stdio.h> 
#include <conio.h> 
int  main() 
{ 
	int w, x, y, z, p;
		
	printf( " Enter 4 Integers : " );
	scanf( "%d %d %d %d", &w, &x, &y, &z );
	
	p = (w + x) / (y - z);
	
	printf( "\n Value of P = %d", p );

	return 0;
}
//Output:
//  Enter 4 Integers : 10 20 9 6
//  Value of P = 10
