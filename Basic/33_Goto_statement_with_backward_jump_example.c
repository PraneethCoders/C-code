// goto statement with backward jump
#include<stdio.h>

int main(){
	int i = 1;
	Label:
	printf(" %d",i);
	i++;
	if (i <= 10)
	{
		goto Label;
	}
	
	return 0;
}
// Output:
//   1  2  3  4  5  6  7  8  9  10