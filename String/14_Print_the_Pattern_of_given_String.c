// Print The Pattern Of Given String
#include<stdio.h>
#include<conio.h>
void main()
{
	int i=0,j=0;
	char s[40];
	printf("\n\n\t\t Enter the word  U want to Format:>>");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c",s[j]);
		}
		printf("\n");
	}
}
// Output:
// 	Enter the word  U want to Format:>>hello
// 	h
// 	h e
// 	h e l
// 	h e l l
// 	h e l l o