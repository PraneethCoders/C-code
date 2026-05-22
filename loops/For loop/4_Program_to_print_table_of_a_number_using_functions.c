//Program to print table of a number using functions.
#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,r;
  printf("Enter a no for table: ");
  scanf("%d",&n);
  for(i=1;i<=10;i++)
  {
    r=n*i;
    printf("%dx%d=%d\n",n,i,r);
  }

} 
// Output:
//  Enter a no for table: 5
//  5x1=5
//  5x2=10
//  5x3=15
//  5x4=20
//  5x5=25
//  5x6=30
//  5x7=35
//  5x8=40
//  5x9=45
//  5x10=50