#include<stdio.h>
int main(){
    int a = 100,b;
    b = sizeof(a);
    printf("\n The size of %d",b);
    b = sizeof(double);
    printf("\n The size of %d",b);
    b = sizeof(123.L);
    printf("\n The size of %d",b);
    b = sizeof(123.45);
    printf("\n The size of %d",b);
    b = sizeof(123.45f);
    printf("\n The size of %d",b);
    return 0;
}