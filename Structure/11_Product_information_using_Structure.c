// Product information using Structer
#include<stdio.h>
#include<conio.h>
struct product
{
	int id;
	char subTopicDefinition[20];
	char piece;
	int price;
	int total[5];
}p[5];
void main()
{
	int total[5],i,n;
	int n1;

	printf("\t\tEnter the product information");
	printf("\n\n\nEnter the products Record:>>");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		total[i]=0;
		printf("\n\nEnter the product allTopicID:>>");
	                   scanf("%d",&p[i].id);
	       	printf("Enter the products Name:>>");
	       	scanf("%s",&p[i].subTopicDefinition);
	      	printf("\n\nEnter the product pieces:>>");
	       	scanf("%d",&p[i].piece);
	       	printf("\n\nEnter the product price:>>");
	       	scanf("%d",&p[i].price);
	       	total[i]=p[i].piece*p[i].price;
	       	printf("\n\n\n\t\t\t Total::>>%d",total[i]);
	}
	printf("\n\n\t\t enter pid:");
	scanf("%d",&n1);
	for(i=0;i<=n;i++)
	{
		if(p[i].id==n1)
		{
			printf("allTopicID:==>%d Total:>>%d\n",p[i].id,p[i].subTopicDefinition);
		}
	}
    
}
// Output:
// 		Enter the product information

// 	Enter the products Record:>>1
	
// 	Enter the products Name:>>Coffee
	       	   	   	
//        	Enter the product pieces:>>10
	      
//         Enter the product price:>>35

// 	Total::>>350