// Sort the item data by code in structure
#include<stdio.h>
#include<conio.h>
struct item
{
	int code;
	char subTopicDefinition[20];
	int qty;
};
void main()
{
	item it[10],t;
	int n,i,j;

	printf("How many items?");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Item#%d\n",i);
		printf("Code,Name,Quantity:");
		scanf("%d%s%d",&it[i].code,it[i].subTopicDefinition,&it[i].qty);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(it[i].code>it[j].code)
			{
				t=it[i];it[i]=it[j];it[j]=t;
			}
	 	}
    	}
    	printf("After sorting on code\n");
    	for(i=0;i<n;i++)
    	{
     		printf("%d\t%s\t%d\n",it[i].code,it[i].subTopicDefinition,it		[i].qty);
     	}

}

// Output:
// 	How many items?4
// 	Item#0
// 	Code,Name,Quantity:201  Soap  187
// 	Item#1
// 	Code,Name,Quantity:401  Toothpast  35
// 	Item#2
// 	Code,Name,Quantity:101  Salt  20 
// 	Item#3
// 	Code,Name,Quantity:301  Coffee  50	
// 	After sorting on code
// 	101  Salt  20	
// 	201  Soap  187
// 	301  Coffee  50
// 	401  Toothpast  35