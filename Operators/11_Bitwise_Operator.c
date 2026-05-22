#include<stdio.h>
int main(){
    int a = 3,b = 6,c;
    printf("\n a = %d",a);
    printf("\n b = %d",b);
    c = a & b;
    printf("\n a & b = %d",c);
    c = a | b;
    printf("\n a | b = %d",c);
    c = a ^ b;
    printf("\n a ^ b = %d",c);
    c = ~a;
    printf("\n ~a = %d",c);
    c = a << 3;
    printf("\n a << 3 = %d",c);
    c = a >> 2;
    printf("\n a >> 2 = %d",c);
    return 0;
}