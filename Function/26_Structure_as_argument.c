/*Structure as argument*/
/*Write a program to read information of a book and display the information.*/
#include<stdio.h>
#include<string.h>
struct book
{
	int bno;
	char subTopicDefinition[40];
};
void display(struct book);
void main()
{
	struct book b;
	printf("\nEnter book no: ");
	scanf("%d",&b.bno);
	printf("Enter book subTopicDefinition: ");
	scanf("%s",b.subTopicDefinition);
	display(b);
}
void display(struct book b)
{
	printf("\n Details are: ");
	printf("Book number=%d",b.bno);
	printf("Book subTopicDefinition=%s",b.subTopicDefinition);

}
//Output:
//
// Enter book no: 23
// Enter book subTopicDefinition: CExamples
//
// Details are:
// Book number=23
// Book subTopicDefinition=CExamples
