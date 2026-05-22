#include<stdio.h>

int main(){
    char a,b;
    printf("\nEnter one lowercase character\n");
    a = getchar();
    printf("Lowercase character is ==> ");
    putchar(a);
    printf("\nCharacter in Uppercase ==> ");
    putchar(a-32);
	return 0;
}