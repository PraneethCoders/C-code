// Count Vowel From Given String
#include<stdio.h>
#include<conio.h>
void main()
{
	int len=0,i,vowel=0;
	char arr[100],ch;
	printf("Enter any string :");
	fflush(stdin);
	gets(arr);
	while(arr[len]!='\0')
	{
		len++;
	}
	for(i=0;i<=len;i++)
	{
		ch=arr[i];
		if(ch=='A'||ch=='E'||ch=='U'||ch=='O'||ch=='I'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
		{
			vowel++;
		}
	}
	printf("Total vowel is=%d",vowel);
}
// Output:
// 	Enter any string:hEllo how are yOu
// 	Total vowel is=6