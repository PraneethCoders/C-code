//Find input is number,character (Lower or upper) or other symbol
#include<stdio.h>
void main()
{
     char n;
     printf("Enter a Character: "); 
     scanf("%c",&n);
     if(n>=48&&n<=57)//ASCII value of 0-9 is 48-57
     {
     	printf("Number");
     }
     else if(n>=65&&n<=90)//ASCII value of A-Z is 65-90
     {
     	printf("Upper case");
     }
     else if(n>=97&&n<=122)//ASCII value of a-z is 97-122
     {
     	printf("Lower case");
     }
     else 
     {
     	printf("Other symbol");
     }
}
//Output:
//  Enter a Character: N
//  Upper case
