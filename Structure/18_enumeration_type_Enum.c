// enumeration type ( enum )
#include <stdio.h> 
#include <conio.h>

enum days_of_week { sun, mon, tue, wed, thur, fri, sat };

int main () 
{
	enum days_of_week day1, day2;
   	int diff;

	day1 = mon;
	day2 = thur;

	diff = day2 - day1;

	printf( " Days between day1 & day2 = %d \n", diff );

	if( day1 < day2 )
		printf( " Day1 comes before Day2." );

	return 0;
}
// Output:

//  Days between day1 & day2 = 3
//  Day1 comes before Day2.