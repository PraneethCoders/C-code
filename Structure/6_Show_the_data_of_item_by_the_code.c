//  Show the data of item by the code
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
	item it[10];
	int n,i,icode,flag=0;
	clrscr();
	printf("How many item?");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Item#%d\n",i);
		printf("Code,Name,Quantity:");
		scanf("%d%s%d",&it[i].code,it[i].subTopicDefinition,&it[i].qty);
	}
       	printf("Enter item code for the item you want to view:");
       	scanf("%d",&icode);
       	for(i=0;i<n;i++)
	{
		if(it[i].code==icode)
		{
			 flag=1;
			 printf("subTopicDefinition:%s\t Quantity:%d\n",it [i].subTopicDefinition,it[i].qty);
			 break;
		 }
	 }
	 if(flag==0)
	 {
		printf("Item not found...");
	 }

}
// Output:
// 	How many Items?2
// 	Item#0
// 	Code,Name,Quantity:101 Salt 45
// 	Item#1
// 	Code,Name,Quantity:201 Tea 20
// 	Enter item code for the item you want to view:201
// 	Name:Tea Quantity:20