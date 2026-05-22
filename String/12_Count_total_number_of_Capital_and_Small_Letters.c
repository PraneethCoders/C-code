/*Count Total number of Capital and Small Letters */
#include<stdio.h>
void  main()
{
int upper=0,lower=0,i=0;
char ch[50];
int i;
printf("Enter a String : ");
gets(ch);
while(ch[i]!='\0')
  {
  if(ch[i]>='A' && ch[i]<='Z')
     upper++;
  if(ch[i]>='a' && ch[i]<='z')
     lower++;
  i++;
  }
 printf("\nUppercase Letters are: %d",upper);
 printf("\nLowercase Letters are : %d",lower);
}
// Output:
//  Enter a String : NiLS
//  Uppercase Letters are: 3
//  Lowercase Letters are: 1