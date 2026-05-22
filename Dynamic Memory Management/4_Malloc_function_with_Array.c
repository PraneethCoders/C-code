#include <stdio.h> 
#include <conio.h>
#include <stdlib.h>

int main() {
    int *p;
    int i;
    clrscr();
    // Allocate memory for 5 integers
    p = (int *)malloc(5 * sizeof(int)); 
    // Check if memory allocation was successful
    if (p == NULL) {
        printf("\n Unable to allocate memory.\n");
        exit(1); // Exit the program if allocation fails
    }
    // Get values from the user
    for (i = 0; i < 5; i++) {
        printf(" Enter Value : ");
        scanf("%d", (p + i)); 
    }
    // Print the values
    printf("\n Values are : ");
    for (i = 0; i < 5; i++) {
        printf(" %d", *(p + i)); 
    }

    // Free the allocated memory
    free(p); 

    getch();
    return 0;
}
// Output:
//   Enter Value : 10
//   Enter Value : 23
//   Enter Value : 15
//   Enter Value : 45
//   Enter Value : 50
//   Values are : 10 23 15 45 50