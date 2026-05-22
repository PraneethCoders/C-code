// goto statement forword jump
#include<stdio.h>

int main(){
	int a = 10;
	printf("\n Nils Patel");
	if (a == 10)
	{
		goto LABEL;
	}
	printf("\n This simple");
	printf("\n Program");
	LABEL:
	printf("\n goto statement");
	printf("\n Forword jump");

	return 0;
}
// Output:
//  Nils Patel
//  go to statement
//  Forword jump