/*Get string from user without displaying  it on console)*/
#include<stdio.h>
int main()
{
    char str[100],ch;
    int n,count=0;
    printf("\nEnter String : ");
    while(1)
    { 
        ch=getch();
        if(ch==13)//13 is ASCII value of \n
        {
            break;
        }
  	    str[count]=ch;
  	    count++;
    }
    printf("\nEntered String : %s",str);
    return 0;
}
// Output:
//  Enter String : Programming
//  Entered String : Programming