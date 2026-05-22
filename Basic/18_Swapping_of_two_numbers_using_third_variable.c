#include<stdio.h>
int main(){
    int a,b,temp;
    printf("enter the value of A\n");
    scanf("%d",&a);
    printf("enter the value of B\n");
    scanf("%d",&b);
    printf("\nBefore swapping\n");
    printf("A::%d\nB::%d",a,b);
    temp = b;
    b = a;
    a = temp;
    printf("\nAfter swapping\n");
    printf("A::%d\nB::%d",a,b);
    return 0;
}