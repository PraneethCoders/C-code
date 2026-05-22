/* 
 * C program to illustrate the concept of unions 
 */
 #include <stdio.h>
 void main()
 {
     union number
     {
         int  n1;
         float n2;
     };
     union number x;
  
     printf("Enter the value of n1: ");
     scanf("%d", &x.n1);

     printf("Value of n1 = %d", x.n1);
     printf("Enter the value of n2: ");
     scanf("%f", &x.n2);
     printf("Value of n2 = %f", x.n2);
 }
// Output:
//  Enter the value of n1: 10
//  Value of n1 = 10
//  Enter the value of n2: 50
//  Value of n2 = 50.000000