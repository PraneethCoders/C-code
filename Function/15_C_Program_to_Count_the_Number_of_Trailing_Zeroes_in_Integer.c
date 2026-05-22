/*
  * C Program to Count the Number of Trailing Zeroes in Integer
  */
#include <stdio.h>
int main() {
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0) {
        if (num & 1) {
            break;
        }
        count++;
        num >>= 1;
    }
    printf("The number of trailing zeros is: %d\n", count);
    return 0;
}
// Output: 
//  enter the number:128
//  7
//  enter the number:-127
//  0