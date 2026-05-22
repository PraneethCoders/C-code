//  Sort a String Character by Character using function
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	void sortstr(char[]);
	char str[80];
	
	printf("Enter A String:>>");
	gets(str);
	sortstr(str);
	printf("%s",str);
	
}
void sortstr(char s[ ])
{
	int i,j;
	char temp;
	for(i=0;i<strlen(s)-1;i++)
	{
		for(j=i+1;j<strlen(s);j++)
		{
			if(s[i]>s[j])
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		  }
	}
}
//Output:
//	Enter A string:>>Abhishek
//	Abehhiks
