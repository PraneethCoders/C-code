// Program to explain Operator Precedence
#include <stdio.h> 
#include <conio.h>

int main() 
{ 
	float result;
	
	result = 4.0 + 3.0 * 8.0 / 4.0;
	printf( "\n%f", result );

	result = 1.0 / 2.0 + 3.0;
	printf( "\n%f", result );

	result = (1.0 + 2.0) / 3.0;
	printf( "\n%f", result );

	result = (1.0 + 2.0 / 3.0) + 4.0;
	printf( "\n%f", result );

	return 0;
}
//Output: 
// 10.000000
// 3.500000
// 1.000000
// 5.666667
