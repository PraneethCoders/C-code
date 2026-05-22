//Find maximum number between two
#include<stdio.h>
int main(){
    int a,b,max;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    if(a > b)
         max = a;
    else
         max = b;
    printf("Max is %d",max));
    return 0;
}
//Output:
// Enter two numbers : 12 34
// Max is 34
