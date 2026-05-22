//  malloc( ) function with Dynamic Array
#include <stdio.h>
#include <conio.h>
#include <malloc.h>

int main()
{
	int *p; // Declare a pointer to an integer, which will store the address of the dynamically allocated array
	int i, n, s; // Declare integer variables: i (loop counter), n (number of elements), s (sum of elements)
	clrscr(); // Clear the console screen (non-standard function, may need to be removed or replaced)

	printf(" Enter Number of Terms : "); // Prompt the user to enter the number of elements in the array
	scanf("%d", &n); // Read the number of elements from the user and store it in the variable 'n'

	// Dynamically allocate memory for 'n' integers using malloc()
	// malloc() returns a void pointer, so we cast it to an integer pointer (int *)
	p = (int *) malloc( n * sizeof(int) ); 

	// Check if memory allocation was successful
	if( !p ) // If 'p' is NULL, memory allocation failed
		printf("\nUnable to allocate size \n"); // Print an error message
	else // If memory allocation was successful
	{
		// Get values from the user and store them in the dynamically allocated array
		for( i=0 ; i<n ; i++ )
		{
			printf(" Enter Value : "); // Prompt the user to enter a value
			scanf("%d", (p+i) ); // Read the value and store it at the address (p+i), which represents the i-th element of the array
		}

		// Print the values stored in the dynamically allocated array and calculate their sum
		printf(" Values are : ");
		s = 0; // Initialize the sum variable 's' to 0
		for( i=0 ; i<n ; i++ )
		{
			printf("  %d", *(p+i) ); // Print the value at the address (p+i), which represents the i-th element of the array
			s = s + *(p+i); // Add the value at the address (p+i) to the sum 's'
		}
		printf("\n Sum of elements = %d", s ); // Print the sum of the elements
	}

	free( p ); // Free the dynamically allocated memory pointed to by 'p'

	getch(); // Wait for a key press before exiting (non-standard function, may need to be removed or replaced)
	return 0; // Indicate successful program execution
}
// Output:
//  Enter Number of Terms : 5
//  Enter Value : 20
//  Enter Value : 40
//  Enter Value : 60
//  Enter Value : 80
//  Enter Value : 100
//  Values are :  20  40  60  80  100
//  Sum of elements = 300