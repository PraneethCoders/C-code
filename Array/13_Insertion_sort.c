// Insertion sort
#include <stdio.h>
int main() {
	int n, array[10],temp;
	printf("Enter number of elements\n");
	scanf("%d", &n);
	printf("Enter %d integers\n", n);
	for (int i = 0; i < n; i++) {

		scanf("%d", &array[i]);

	}
	for (int i = 1; i <= n - 1; i++) {
		 int j = i;
		while (j > 0 && array[j] < array[j - 1]) {
			temp = array[j];
			array[j] = array[j - 1];
			array[j - 1] = temp;
			j--;
		}
	}
	printf("Sorted list in ascending order:\n");
	for (int i = 0; i <= n - 1; i++) {
		printf("%d\n", array[i]);
	}
	return 0;
}
//Output:
//
// Enter number of elements 5
// Enter 5 integers 
// 20
// 90
// 0
// -23
// 78
// Sorted list in ascending order:
// -23
// 0
// 20
// 78
// 90
