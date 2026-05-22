// program to multiply given number by 4 using bitwise operators
#include<stdio.h>

int main(){
	long number,tempnum;
	printf("enter an integer");
	scanf("%ld",&number);
	tempnum = number;
	number  = number << 2;
	printf("%ld x 4 = %ld",tempnum,number);
	return 0;
}
// Output:
//  Enter an integer
//  450
//  450 x 4 = 1800