#include <stdio.h> 
#include <conio.h>
#include <stdlib.h>

int main() {
    int *p;
    clrscr();

    // Allocate memory for a single integer
    p = (int *) malloc(1 * sizeof(int)); 

    // Check if memory allocation was successful
    if (p == NULL) {
        printf("\n Memory allocation failed. \n");
        return 1; // Indicate an error
    }

    *p = 23; // Assign a value to the allocated memory

    printf("\n Value : %d", *p);
    free(p); // Release the allocated memory

    getch();
    return 0;
}
// Output:
//  Value : 23