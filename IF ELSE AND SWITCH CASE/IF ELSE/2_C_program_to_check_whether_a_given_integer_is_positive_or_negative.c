/*  
 * C program to check whether a given integer is positive 
 * or negative  */
 #include <stdio.h>
 void main()
 {
     int number;
	printf("Enter a number ");
	scanf("%d", &number);
       	if (number >= 0)
	{
	    printf("%d is a positive number ", number);
	}
	else {
	    printf("%d is a negative number ", number);
	}
 }

//Output:
//  Enter a number
// -1
// -1 is a negative number
// Enter a number
// 14
// 14 is a positive number
