// enum example
#include <stdio.h>
#include <conio.h>

enum Colors { Red, Green, Blue };

int main()
{
	enum Colors c1, c2;
	int d;

	c1 = Red;
	c2 = Green;

	d = c2 - c1;
	printf( "\n Difference = %d", d );

	if( c1 < c2 )
		printf( "\n RED comes before GREEN." );
	else
		printf( "\n GREEN comes before RED." );

	return 0;
}
// Output:
//  Difference = 1
//  RED comes before GREEN.