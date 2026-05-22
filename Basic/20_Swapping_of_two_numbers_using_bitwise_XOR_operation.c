#include<stdio.h>
int main(){
    long i,k;
    printf("Enter two integers \n");
    scanf("%ld %ld",&i,&k);
    printf("Before swapping\ni = %ld\nk = %ld",i,k);
    i = i ^ k;
    k = i ^ k;
    i = i ^ k;
    printf("After swapping\ni = %ld\nk = %ld",i,k);
    return 0;
}