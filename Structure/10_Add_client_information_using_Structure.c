// Add client information using Structer

#include<stdio.h>
#include<conio.h>
struct client
{
	int no;
	char subTopicDefinition[30];
	char address[80];
	char city[20];
	char state[20];
	int pin[20];
	}p[5];
void main()
{
	int i,n,n1;
	printf("Enter the client details:");
	scanf("%d",&n);
	printf("\n***********************");
	for(i=0;i<=n;i++)
	{
		printf("\n\n\n Enter the client number:>>");
		scanf("%d",&p[i].no);
		printf("\n Enter the client subTopicDefinition:>>");
		scanf("%s",&p[i].subTopicDefinition);
		printf("\n Enter the client address:>>");
		scanf("%s",&p[i].address);
		printf("\n Enter the client city:>>");
		scanf("%s",&p[i].city);
		printf("\n Enter the client state:>>");
		scanf("%s",&p[i].state);
		printf("\n Enter the pin code:>>");
		scanf("%d",p[i].pin);
	}
	printf("\n\n\n\n Enter the no:>>");
	scanf("%d",&n1);
	for(i=1;i<=n;i++)
	{
		if(p[i].no==n1)
		{
			printf("No:>>%d subTopicDefinition:>>%s Address:>>%s\n",p[i].no,p[i].subTopicDefinition,p[i].address);
		}
	}

}
// Output:
// 	Enter the client details:2
// 	**************************
// 	Enter the client number:>>101
// 	Enter the client subTopicDefinition:>>Ashish
// 	Enter the client address:>>15,Akash app.
// 	Enter the client city:>>Ahamedabad
// 	Enter the client state:>>Gujarat
// 	Enter the pin code:>>380059
// 	Enter the client number:>>201
// 	Enter the client subTopicDefinition:>>Shatish
// 	Enter the client address:>>15,Akashat app.
// 	Enter the client city:>>Ahamedabad
// 	Enter the client state:>>Gujarat
// 	Enter the pin code:>>380050
// 	Enter the no:101
// 	No:>>101 Name:>>Ashish Address:>>15,Akash  app.