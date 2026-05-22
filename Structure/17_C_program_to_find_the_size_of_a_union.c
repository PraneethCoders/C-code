/* C program to find the size of a union  */
 #include <stdio.h> 
 void main()
 {
     union sample
     {
         int   m;
         float n;
         char  ch;
     };
     union sample u;
  
     printf("The size of union = %d", sizeof(u));

     u.m = 25;
     printf("%d %f %c", u.m, u.n, u.ch);

     u.n = 0.2;
     printf("%d %f %c", u.m, u.n, u.ch);

     u.ch = 'p';
     printf("%d %f %c", u.m, u.n, u.ch);

 }
// Output:
//  The size of union = 4
//  25 0.000000 
//  1045220557 0.200000
//  1045220464 0.199999