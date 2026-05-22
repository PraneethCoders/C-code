/*Nesting of Structure*/
#include<stdio.h>
struct detail
{
   char subTopicDefinition[10];
   float price;	
};
struct item
{
    int id;
	struct detail d;	
};
void main()
{
	struct item itm;
	printf("Enter item subTopicDefinition, id and price ");
	scanf("%s%d%f",itm.d.subTopicDefinition,&itm.id,&itm.d.price);
	printf("Entered details are:\n");
	printf("Id: %d\nName: %s  Price: %f", itm.id , itm.d.subTopicDefinition, itm.d.price);
}
// Output:
//  Enter item subTopicDefinition, id and price
//  tea 23 150
//  Entered details are:
//  Id: 23
//  Name: tea  Price: 150