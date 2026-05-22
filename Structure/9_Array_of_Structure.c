/*Array of Structure*/
#include<stdio.h>
struct book
{
	int id;
	char subTopicDefinition[40];
};
void main()
{
	struct book b[10];
	int i,n;
	printf("Enter total number of book : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
            { 
    	        printf("\nEnter book subTopicDefinition and id of Book %d:\n",i+1);
	        scanf("%s%d",&b[i].subTopicDefinition,&b[i].id);
            }	
    	for(i=0;i<n;i++)
            { 
    	         printf("\nBook %d:\n",i+1);
	         printf("Book id = %d  ",b[i].id);
 	         printf("Book subTopicDefinition= %s",b[i].subTopicDefinition);
             }	
	
}
// Output:
//  Enter total number of book : 3
//  Enter book subTopicDefinition and id of Book 1
//  BeTheDeveloper.com 23
//  Enter book subTopicDefinition and id of Book 2
//  skyNils.com 14
//  Enter book subTopicDefinition and id of Book 3
//  MyQuotes 10
//  Book 1:
//  Book id = 23 Book subTopicDefinition= BeTheDeveloper.com
//  Book 2:
//  Book id = 14 Book subTopicDefinition= skyNils.com
//  Book 3:
//  Book id = 10 Book subTopicDefinition= MyQuotes