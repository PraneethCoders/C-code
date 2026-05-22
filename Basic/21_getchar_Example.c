#include<stdio.h>

int main(){
	char a,b;
	printf("\nEnter one character\n");
	scanf("%c",&a);
	printf("Input character is ==> %c",a);
	fflush(stdin);//to clear input buffer
	printf("\nEnter second character\n");
	scanf("%c",&b);
	b = getchar();
	printf("\nASCII value of character(%c)is=> %d",b,b);
	return 0;
}