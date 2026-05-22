// Shift inputed data by two bits to the left
#include<stdio.h>

int main(){
	int x,y;
	printf("Read the integer from keyboard :-");
	scanf("%d",&x);
	x <<= 2; //left shift operator
	y = x;
	printf("\nThe left shifted data is = %d",y);
	return 0;
}
// Output:
//  Read the integer from keyboard :-10
//  The left shifted data is = 40