// Chech Character of String How many time repeted
#include<stdio.h>
#include<conio.h>
void main()
{
	char str[50],i,j,a,b=0;
	printf("Enter any subTopicDefinition:>>");
	gets(str);
	a=strlen(str);
	for(i=0;i<a;i++)
	{
	 	for(j=0;j<a;j++)
		{
			if(str[i]==str[j])
			b++; 
		}
		printf("%c=%d",str[i],b);
		b=0;
       	 	printf("\n");
	}
}
// Output:
// 	Enter any subTopicDefinition:>>Hello
// 	H=1
// 	e=1
// 	l=2
// 	l=2
// 	o=1