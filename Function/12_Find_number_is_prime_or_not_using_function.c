//  Find number is prime or not using function
#include<stdio.h>
#include<conio.h>
#include <stdio.h>
#include <math.h>

int is_prime(int n) {
    if (n <= 1) {
        return 0; // 0 and 1 are not prime
    }else if (n <= 3) {
        return 1; // 2 and 3 are prime
    }if(n % 2 == 0 || n % 3 == 0) {
        return 0; // Divisible by 2 or 3
    }
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return 0;
        }
    }
    return 1; // Is prime
}
int main() {
    int n;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (is_prime(n)) {
        printf("%d is a prime number\n", n);
    } else {
        printf("%d is not a prime number\n", n);
    }

    return 0;
}
// Output:
// 	Enter the Value of N:>>3
// 	3 is Prime