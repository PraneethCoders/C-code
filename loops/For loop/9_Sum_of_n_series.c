/* Sum of 1 + 2 +.....+ n series */
#include<stdio.h>
main(){
    int n,i;
    int sum=0;
    printf("Enter the n i.e. max values of series: ");
    scanf("%d",&n);
    sum = (n * (n + 1)) / 2;
    printf("Sum of the series: ");
    for(i =1;i <= n;i++){
         if (i!=n) 
             printf("%d + ",i);
         else
             printf("%d = %d ",i,sum);
    }
}
// Output:
//  Enter the n i.e. max values of series: 10
//  Sum of the series: 55
//  1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 = 55