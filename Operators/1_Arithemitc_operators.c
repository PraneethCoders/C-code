#include <stdio.h>

int main(){
    int a,b;                     // variables to store user input
    int sum,sub,mul,rem,idiv;    // integer results
    float rdiv;                  // floating-point result

    printf("Enter value of A");  // prompt user for first number
    scanf("%d",&a);              // read integer into a
    printf("Enter value of B");  // prompt user for second number
    scanf("%d",&b);              // read integer into b

    // perform and display arithmetic operations
    printf("\n sum = %d",sum = a + b);          // addition
    printf("\n sub = %d",sub = a - b);          // subtraction
    printf("\n mul = %d",mul = a * b);          // multiplication
    printf("\n idiv = %d",idiv = a / b);        // integer division (truncates result)
    printf("\n rem = %d",rem = a % b);          // remainder (modulus)
    printf("\n rdiv = %f",rdiv  = (float)a / (float)b); // real division (decimal result)

    return 0;
}

/* 
   Example run when A = 10, B = 3:

   sum = 13        // 10 + 3
   sub = 7         // 10 - 3
   mul = 30        // 10 * 3
   idiv = 3        // 10 / 3 (integer division, discards fraction)
   rem = 1         // 10 % 3 (remainder after division)
   rdiv = 3.333333 // 10 / 3 as floating-point division
*/
