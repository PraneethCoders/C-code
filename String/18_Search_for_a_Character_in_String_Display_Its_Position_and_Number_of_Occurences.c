//  Search for a Character in String Display Its Position and Number of Occurences
#include<stdio.h>
#include<conio.h>
void main()
{
	int i=0,c=0;
	char s[25],dis;
	printf(" Enter the string:>>");
	gets(s);
	printf("\n enter the character U want to find:>>");
	scanf("%c",&dis);
	printf("\n The position U want to find are as below:>>");
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==dis)
		{
			printf("\n%d",i);
			c++;
		}
	}
	 printf("\n number of time occurrence:=%d",c);
}
// Output:
// 	Enter the string:>>how are you
// 	enter the character U want to find:>>o
// 	The position U want to find are as below:>>
// 	1
// 	9
// 	number of time occurrence:=2