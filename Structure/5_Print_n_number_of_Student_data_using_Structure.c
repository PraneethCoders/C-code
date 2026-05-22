// Print n number of Student data using Structer
#include<stdio.h>
#include<conio.h>
struct student
{
	int rollno;
	char subTopicDefinition[20];
};
void main()
{
	student s[10];
	int i,n;
	printf("How many students?");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	
		printf("Student#%d:Rollno and Name?",i);
		scanf("%d%s",&s[i].rollno,s[i].subTopicDefinition);
	}
	printf("You have entered\n");
	for(i=0;i<n;i++)
	{
		printf("student#%d:Rollno:%d Name:%s\n",i,s [i].rollno,s[i].subTopicDefinition);
	}
}
// Output:
// 	How many students?3
// 	Student#0:Rollno and Name?11 Akash
// 	Student#1:Rollno and Name?22 Bhavin
// 	Student#2:Rollno and Name?33 Dipak