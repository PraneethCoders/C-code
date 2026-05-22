#include<stdio.h>
int main(){
    int r,p;
    float a;
    printf("enter the value a:\n");
    scanf("%f",&a);
    r = a;
    printf("Total Rupees:%d\n",r);
    p = (a - r)*100;
    printf("Total Paisa:%d\n",p);
    return 0;
}