// Transpose of matrix

#include <stdio.h>

void readMatrix(int n, int array[10][10]) {
    printf("Enter %d*%d matrix\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &array[i][j]);
        }
    }
}

void printMatrix(int n, int array[10][10]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }
}

void transposeMatrix(int n, int array[10][10]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", array[j][i]);
        }
        printf("\n");
    }
}

int main() {
    int n, array[10][10];

    printf("Enter N: ");
    scanf("%d", &n);

    readMatrix(n, array);

    printf("Original matrix\n");
    printMatrix(n, array);

    printf("Transpose matrix\n");
    transposeMatrix(n, array);

    return 0;
}
//Output:
//	Enter N:3
//	Enter 3*3 matrix
//	1
//	2
//	3
//	4
//	5
//	6
//	7
//	8
//	9
//	Original matrix
//	1  2  3
// 	4  5  6 
// 	7  8  9
//	Transpose matrix
//	1  4  7 
//  2  5  8
//	3  6  9
