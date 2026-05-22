// Show revers of given string using function
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	void revstr(char[]);
	char str[80];
	printf("Enter a String :");
	scanf("%[^\n]",str);
	revstr(str);
	printf("%s",str);
}
void revstr(char s[])
{
	int i,j;
	char temp;
	for(i=0,j=strlen(s)-1;i<strlen(s)/2;i++,j--)
	{
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;
	}
}
//Output:
//	Enter string:hello
//	olleh
