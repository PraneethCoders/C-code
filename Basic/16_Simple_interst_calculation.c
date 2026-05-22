#include<stdio.h>
int main(){
    float i,p,r,n;
    printf("enter the value p\n");
    scanf("%f",&p);
    printf("enter the value r\n");
    scanf("%f",&r);
    printf("enter the value n\n");
    scanf("%f",&n);
    i = (p * r * n) / 100;
    printf("Interest::%.1f",i);
    return 0;
}