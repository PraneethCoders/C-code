// count words in string
#include<stdio.h>
#include<conio.h>
void main()
{
	int len=0,c=1;
	char s[40];

	printf("Enter a string:");
	gets(s);
	while(s[len]!='\0')
	{
		if(s[len]==' ')c++;
		len++;
	}
	printf("\nTotal words:%d",c);
	
}
// Output:
// 	Enter a string:How are you
// 	Total words:3