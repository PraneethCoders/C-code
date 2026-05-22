// Use of comma opearor
#include <stdio.h>

int main() {
    int m, n;
    printf("Program to comma operator\n\n");
    printf("Enter the value of N: ");
    scanf("%d", &n);

    // Using comma operator: first expression is evaluated, then second
    m = (n + 5, n + 10);

    printf("\nAfter use of comma operator value is %d\n", m);
    return 0;
}
// Output:
//  Program to comma operator
// 	Enter the value of N  
// 	5
// 	After use of comma operator value is 10
