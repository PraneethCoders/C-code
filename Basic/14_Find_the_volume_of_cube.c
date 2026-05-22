#include<stdio.h>
int main(){
    int l,b,h,v;
    printf("enter the value of l:\n");
    scanf("%d",&l);
    printf("enter the value of b:\n");
    scanf("%d",&b);
    printf("enter the value of h:\n");
    scanf("%d",&h);
    v = l * b * h;
    printf("Volume Of Cube::%d",v);
    return 0;
}