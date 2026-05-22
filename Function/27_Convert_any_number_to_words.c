/*Convert any number to words*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void checkRange(int num);
void checkRange1(int num);
void checkRange2(int num);
void checkRange3(int num);
void checkRange4(int num);

void checkDigit1(int num);
void checkDigit2(int num);
void checkDigit3(int num1,int num2);

int main()
{

 int num;

 printf("Enter a number : ");
 scanf("%d",&num);
 printf("Entered number in words : ");
 if(num<=100)
   checkRange1(num);
 else if(num>100 && num<1000)
   checkRange2(num);
 else if(num>=1000 && num<=100000)
   checkRange3(num);
 else if(num>100000 && num<=10000000)
   checkRange4(num);
 else
   checkRange(num);
 return 0;
}
void checkRange(int num)
{
  printf("Entered number should be between 0 to 10000000");     
}
void checkRange1(int num)
{
 int x,y,z;
 if(num>=0 && num<=10)
    checkDigit1(num);
 else if(num>10 && num<20)
 {
    x=num%10;
    checkDigit2(x);
 }
 else if(num>=20 && num<=100)
 {
    y=num/10;
    z=num%10;
    checkDigit3(y,z);
 }
}
void checkRange2(int num)
{
 int x,y,z;
 y=num/100;
 checkDigit1(y);
 printf(" Hundred ");
 x=num%100;
 checkRange1(x);
}
void checkRange3(int num)
{
 int x,y,z;
 if(num==1000)
 {
   printf(" Thousand ");
   exit(0);
 }
 else if(num==100000)
 {
   printf("Lakh");
   exit(0);
 }
 else
 {
   x=num/1000;
   checkRange1(x);
   printf(" Thousand ");
   z=num%1000;
   if(z<=99)
     checkRange1(z);
   else
     checkRange2(z);
 }
}
void checkRange4(int num)
{
 int x,y;
 if(num==10000000)
 {
   printf("One Crore");
   exit(0);
 }
 x=num/100000;
 checkRange1(x);
 printf(" Lakhs ");
 y=num%100000;
 if(y==0)
   exit(0);
 else if(y<=99)
   checkRange1(y);
 else if(y>99 && y<=999)
   checkRange2(y);
 else
   checkRange3(y);
}
void checkDigit1(int num)
{
 switch(num)
 {
  case 0: printf("Zero"); break;
  case 1: printf("One"); break;
  case 2: printf("Two"); break;
  case 3: printf("Three"); break;
  case 4: printf("Four"); break;
  case 5: printf("Five"); break;
  case 6: printf("Six"); break;
  case 7: printf("Seven"); break;
  case 8: printf("Eight"); break;
  case 9: printf("Nine"); break;
  case 10: printf("Ten"); break;
  default: printf("");
 }
}
void checkDigit2(int num)
{
 switch(num)
 {
  case 1: printf("Eleven"); break;
  case 2: printf("Twelve"); break;
  case 3: printf("Thirteen"); break;
  case 4: printf("Fourteen"); break;
  case 5: printf("Fifteen"); break;
  case 6: printf("Sixteen"); break;
  case 7: printf("Seventeen"); break;
  case 8: printf("Eighteen"); break;
  case 9: printf("Nineteen"); break;
  default: printf("");

 }
}
void checkDigit3(int num1,int num2)
{
 switch(num1)
 {
  case 2: printf("Twenty "); break;
  case 3: printf("Thirty "); break;
  case 4: printf("Forty "); break;
  case 5: printf("Fifty "); break;
  case 6: printf("Sixty "); break;
  case 7: printf("Seventy "); break;
  case 8: printf("Eighty "); break;
  case 9: printf("Ninety "); break;
  case 10: printf("Hundred"); break;
  default: printf("");
 }
 checkDigit1(num2);
}
//Output:
// Enter a number : 1500
// Entered number in words : One  Thousand Five  Hundred
