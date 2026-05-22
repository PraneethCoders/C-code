/*Check given number is prime number or not*/
#include<stdio.h>
void main(){
int num,i,count=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(i=2;i<=num/2;i++){
        if(num%i==0){
         count++;
            break;
        }
    }
   if(count==0 && num!= 1)
        printf("%d is a prime number",num);
   else
      printf("%d is not a prime number",num);
   return 0;
}
// Output:
//  Enter a number: 7
//  7 is a prime number