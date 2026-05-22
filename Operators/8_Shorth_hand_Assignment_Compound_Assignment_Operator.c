#include<stdio.h>
int main(){
    int num = 10;
    printf("\n Num : %d",num);
    num += 10;
    printf("\n Num += 10 : %d",num);

    num -= 5;
    printf("\n Num -= 5 : %d",num);

    num *= 2;
    printf("\n Num *= 2: %d",num);

    num /= 3;
    printf("\n Num /= 3 : %d",num);

    num %= 3;
    printf("\n Num % = 3 : %1.f",num);
    return 0;
}