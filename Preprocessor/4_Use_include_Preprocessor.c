//  use #include Preprocessor
//  Save this file as "myheader.h" in current directory.
int add( int x, int y)
{
	int s;
	s = x + y;
	return s;
}
int sub( int x, int y)
{
	int d;
	d = x - y;
	return d;
}
//Coding : 
//  Save this file with .cpp file extension.
#include <stdio.h> 
#include <conio.h>

#include "myheader.h"

int main () 
{
	int a = 30, b = 20, res;
	clrscr();

	res = add( a, b );
	printf( "\n Sum = %d",  res );

	res = sub( a, b );
	printf( "\n Difference = %d",  res );

	getch();
	return 0;
}
//Output:
//
// Sum = 50
// Difference =  10
