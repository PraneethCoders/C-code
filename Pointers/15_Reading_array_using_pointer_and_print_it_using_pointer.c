/*Reading array using pointer and print it using pointer*/
#include<stdio.h>
int main(){
   int  i;
   int arr[10];
   int *ptr;
   ptr=arr;
   printf("Enter 5 Elements ");
   for(i=0;i<5;i++)
   { 
   	  scanf("%d",ptr);
		 ptr++; 
   }
   ptr=arr;//Again initializing base address of array otherwise
            // pointer will point to the next address after reading 
			//and print garbage value
    printf("Entered Numbers:\n");
    for(i=0;i<5;i++)
   { 
   	  printf("%d\n",*ptr);
		 ptr++; 
   }
}
// Output:
//  Enter 5 Elements 
//  1 2 3 4 5 
//  Entered Numbers:
//  1
//  2
//  3
//  4
//  5