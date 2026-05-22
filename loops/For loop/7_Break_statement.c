// Break statement
#include <stdio.h> 
#include <conio.h>
int  main() 
{ 
	int i;

	for( i=1 ; i<=10 ; i++ )
	{
		if(i == 5)
		{
			break;
		}
		printf( "%d\t", i );
	}

	return 0;
}
// Output:
//  1 	2	3	4