// Linear Search
#include <stdio.h>

int main()
{
   int array[50], search, c, n;
 
   printf("Enter the number of elements in array\n");
   scanf("%d",&n);
 
   printf("Enter %d integer(s)\n", n);
 
   for (c = 0; c < n; c++)
      scanf("%d", &array[c]);
 
   printf("Enter the number to search\n");
   scanf("%d", &search);
 
   for (c = 0; c < n; c++)
   {
      if (array[c] == search)     /* if required element found */
      {
         printf("%d is present at location %d.\n", search, c+1);
         break;
      }
   }
   if (c == n)
      printf("%d is not present in array.\n", search);
 
   return 0;
}
//Output:
// Enter the number of elements in array 5
// Enter 5 integer(s)
// 10 23 78 34 21
//
// Enter the number to search 78
// 78 is present at location 3
