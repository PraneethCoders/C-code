// display first N natural number using do-while loop
#include <stdio.h>
#include <conio.h>
int main()
{
	int  i, n;
	printf( " Enter Number : " );
	scanf( "%d", &n );

	i = 1;
	do
	{
		printf("  %d", i );
		i++;
	} while( i <= n  );
    
	return 0;
}
// Output:
//  Enter Number : 5
//   1  2  3  4  5