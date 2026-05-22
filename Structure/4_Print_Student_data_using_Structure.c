// Print Student data using Structer
#include<stdio.h>
#include<conio.h>
struct student
{
	int rollno;
	char subTopicDefinition[20];
};
void main()
{
	student s1,s2;
	printf("Enter rollno and subTopicDefinition for first student:");
	scanf("%d%s",&s1.rollno,s1.subTopicDefinition);
	printf("Enter rollno and subTopicDefinition for second student:");
	scanf("%d%s",&s2.rollno,s2.subTopicDefinition);
	printf("Student#1:%d\t%s\n",s1.rollno,s1.subTopicDefinition);
	printf("Student#2:%d\t%s\n",s2.rollno,s2.subTopicDefinition);
}
// Output:
// 	Enter rollno and subTopicDefinition for first student:
// 	11  Akash
// 	Enter rollno and subTopicDefinition for second student:
// 	22  Bhavin
// 	Student#1:11	Akash
// 	Student#2:22	Bhavin