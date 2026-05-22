#include <stdio.h>

int main() {
    // Declare integer variables
    int a = 10, b = 3, c, r;
    // Declare float variable for division
    float d;

    // Display values of a and b
    printf("A = %d, B = %d\n", a, b);
    // Perform addition
    printf("Sum = %d\n",c = a + b);
    // Perform subtraction
    printf("Subtraction = %d\n",c = a - b);
    // Perform multiplication
    printf("Multiplication = %d\n",c = a * b);
    // Perform division (typecast to float for accurate result)
    printf("Division = %.3f\n",d = (float)a / b);
    // Find remainder using modulus operator
    printf("Remainder = %d\n",r = a % b);

    // End of program
    return 0;
}
