// Binary Search example
#include <stdio.h> 
#include <conio.h>

int  main() 
{
	int num[10], i, beg, end, mid, pos = -1, value;

	printf( " Enter Ten Numbers in Ascending Order::: \n" );
	for( i=0 ; i<10 ; i++ )
	{
		scanf( "%d", &num[i] );
	}

	printf( " Enter the number to be searched ::: " );
	scanf( "%d", &value );

	beg = 0;
	end = 10 - 1;
	while(beg <= end)
	{
		mid = (beg + end) / 2;
		if( value == num[mid] )
		{
			pos = mid + 1;
			break;
		}
		else if ( value >= num[mid] )
			beg = mid + 1;
		else
			end = mid - 1;
	}

	if( pos == -1 )
	{
		printf( "\n The element %d not found.", value );
	}
	else
	{
		printf( "\n The position of %d is ::: %d" , value, pos );
	}

	return 0;
}
//Output:
//
// Enter Ten Numbers in Ascending Order::: 
// 1  5  13  24  25  36  47  58  69  100
// Enter the number to be searched ::: 36
//
// The position of 36 is ::: 6
