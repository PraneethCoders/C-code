#include <stdio.h>

int main() {
    int a, b;
    float c;

    printf("Enter the value of A\n");
    if (scanf("%d", &a) != 1) return 1;

    printf("Enter the value of B\n");
    if (scanf("%d", &b) != 1) return 1;

    printf("Enter the value of C\n");
    if (scanf(" %f", &c) != 1) return 1;

    printf("\n\nA: %d\nB: %d\nC: %.2f", a, b, c);
    return 0;
}
