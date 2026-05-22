// Calculate the total number of capital, small and special Character from Given String
#include<stdio.h>
#include<conio.h>
void main()
{
	char m[40];
	int cap=0,small=0,spec=0,i;
	clrscr();
	printf("Enter a string:>>");
	gets(m);
	for(i=0;i<strlen(m);i++)
	{
		if(m[i]>='A'&&m[i]<='Z')
		{
			cap++;
		}
		else if(m[i]>='a'&&m[i]<='z')
		{
			small++;
		}
		else 
		{
			spec++;
		}
	}
	printf("\ncapital letters:%d\n",cap);
	printf("small letters:%d\n",small);
	printf("special letters:%d\n",spec);
	getch();
}
// Output:
// 	Enter a string:>>how ARE you 123
// 	capital letters:3
// 	small letters:6
// 	special letters:5