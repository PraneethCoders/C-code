//  Anonymous Structure Example
#include <stdio.h>
#include <conio.h>
//  struct Dist
struct
{
	int feet;
	float inches;
}d1, d2 = {23, 7.5};

int main()
{
	d1.feet = 14;
	d1.inches = 8.5;

	printf( "\n d1 : %d\'-%.1f\"", d1.feet, d1.inches);
	printf( "\n d2 : %d\'-%.1f\"", d2.feet, d2.inches);
   	return 0;
}
// Output:
//  d1 : 14'-8.5"
//  d2 : 23'-7.5"