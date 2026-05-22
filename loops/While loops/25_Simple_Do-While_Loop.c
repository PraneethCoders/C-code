//Simple Do-While Loop
#include <stdio.h> 
#include <conio.h>
int main() 
{ 
	int n = 0;

	do
	{
		printf( " Enter No.( 0 for exit) :: " );
		scanf( "%d", &n );
	}while( n != 0 );

	return 0;
}
// Output:
//  Enter No.( 0 for exit) :: 2
//  Enter No.( 0 for exit) :: 6
//  Enter No.( 0 for exit) :: 9
//  Enter No.( 0 for exit) :: 0