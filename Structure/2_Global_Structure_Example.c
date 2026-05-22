//  Global Structure Example
#include <stdio.h>
#include <conio.h>
/* Global Structure */
struct Distance
{
	int feet;
	float inches;
};
struct Distance d1; /* 	Global variable	*/

int main ()
{
	struct Distance d2; 	/* Local variable */

	d1.feet = 23;
	d1.inches = 7.5;

	d2.feet = 14;
	d2.inches = 2.5;

	printf( "\n %d\'-%f\"", d1.feet, d1.inches );
	printf( "\n %d\'-%f\"", d2.feet, d2.inches );

	return 0;
}
// Output:
//  12'-9.500000"
//  14'-2.500000"