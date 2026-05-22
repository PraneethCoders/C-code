// The Bubble Sort Example

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void bubble(char *items, int count);

int main(void)
{
  char s[255];

  printf("Enter a string:");
  gets(s);
  bubble(s, strlen(s));
  printf("The sorted string is: %s.\n", s);

  return 0;
}


void bubble(char *items, int count)
{
  register int i, j;
  register char t;

  for(i = 1; i < count; ++i)
    for( j = count-1; j >= i; --j) {
      if(items[j - 1] > items[ j ]) {
        /* exchange elements */
        t = items[j - 1];
        items[j - 1] = items[ j ];
        items[ j ] = t;
      }
    }
}
// Output:
// Enter a string: 
// Enter a string: programming
// The sorted string is: aggimmnoprr