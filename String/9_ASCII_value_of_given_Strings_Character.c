// Show ASCII value of given String's Character
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i;
	char subTopicDefinition[20];
	
	printf("Enter A string :>>");
	gets(subTopicDefinition);
	for(i=0;i<strlen(subTopicDefinition);i++)
	{
		printf("%c\t%d\n",subTopicDefinition[i],subTopicDefinition[i]);
	}
}
// Output:
// 	Enter A string:hello
// 	h	104
// 	e	101	
// 	l	108
// 	l	108	
// 	o	111