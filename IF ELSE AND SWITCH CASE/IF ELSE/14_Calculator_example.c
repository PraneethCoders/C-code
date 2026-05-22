#include<stdio.h>

// Function for addition
float add(float x, float y) {
    return x + y;
}

// Function for subtraction
float subtract(float x, float y) {
    return x - y;
}

// Function for multiplication
float multiply(float x, float y) {
    return x * y;
}

// Function for division (with zero check)
float divide(float x, float y) {
    if(y != 0)
        return x / y;
    else {
        printf("Error: Division by zero not allowed!\n");
        return 0; // return 0 as fallback
    }
}

int main() {
    char op;
    float a, b, result;

    // Input numbers
    printf("Enter no of A:\n");
    scanf("%f", &a);
    printf("Enter no of B:\n");
    scanf("%f", &b);

    // Input operator
    printf("Operator [+,-,*,/]::\n");
    scanf(" %c", &op);  // space before %c skips newline

    // Call appropriate function
    result = (op == '+') ? add(a, b) :
             (op == '-') ? subtract(a, b) :
             (op == '*') ? multiply(a, b) :
             (op == '/') ? divide(a, b) : 0;

    // Print result or error
    (op == '+' || op == '-' || op == '*' || (op == '/' && b != 0)) ?
        printf("Result:>> %.2f\n", result) :
        printf("Invalid Choice!\n");

    return 0;
}

//Output:
//	Enter no of A:
//	10
//	Enter no of B:
//	20
//	Operator [+,-,*,/]::
//	*
//	Result:>>200.00
