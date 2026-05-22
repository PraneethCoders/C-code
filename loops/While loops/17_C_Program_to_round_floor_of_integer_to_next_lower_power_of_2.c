/* C Program to round floor of integer to next lower power of 2  */
 #include <stdio.h>
 #define NUM_BITS_INT 32
 int count = 0;
 void main()
 {
     int temp, n, bit, i = 0;
  
     printf("Enter a number : ");
     scanf("%d", &n);
     temp = n;
     while (i < NUM_BITS_INT)
     {
         bit = temp & 0x80000000;
         if (bit == -0x80000000) 
         {
             bit = 1;
         }
         printf("%d", bit);
         temp = temp << 1;
         i++;
     }
 }
// Output: 
//  Enter a number : 128
//  00000000000000000000000010000000
//  Enter a number : 7
//     00000000000000000000000000000111
//  Enter a number : -127
//  11111111111111111111111110000001