// Automatic or Implicit Type Conversion
#include <stdio.h> 
#include <conio.h>
int  main()
{
	int  a = 10, b = 20;
	float c = 10.50;
	long d = 20L, e;
	
	e = ((a + c) * d) + b;

	printf( "\n Value of e ::: %ld", e );

	return 0;
}
//Output:
// Value of e ::: 430
