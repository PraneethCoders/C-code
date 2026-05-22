#include<stdio.h>
int main(){
    int a,b,r;
    printf("enter the value a:\n");
    scanf("%d",&a);
    b = a / 30;
    printf("Month::%d\n",b);
    r = a%30;
    printf("Remaining Days::%d",r);
    return 0;
}