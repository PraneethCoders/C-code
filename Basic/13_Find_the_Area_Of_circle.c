#include<stdio.h>
#define PI 3.142
int main(){
    float r,a;
    printf("enter the radius:\n");
    scanf("%f",&r);
    a = PI * r * r;
    printf("Area of Circle is %.2f",a);
    return 0;
}