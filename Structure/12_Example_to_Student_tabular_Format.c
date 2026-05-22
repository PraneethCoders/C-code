// Example to Student tabilar Formate
#include<stdio.h>
#include<conio.h>
struct studentResult
{
	int no;
	char subTopicDefinition[20];
	int sub[3];
	int total;
}stu[3];
void main()
{
	int i,j,k,l;
	clrscr();
	for(i=0;i<3;i++)
	{
		
		printf("\n\n\t\t Enter The Data For Student		[%d]:>>",i);

		printf("\n\t Enter No:>>");
		scanf("%d",&stu[i].no);

		printf("\n\t Enter Name:>>");
		scanf("%s",&stu[i].subTopicDefinition);

		printf("\n\t\t\t Enter Subject Marks");
		for(j=0;j<3;j++)
		{
			printf("\n\t Subject[%d]:>>",j);
			scanf("%d",&stu[i].sub[j]);
		}
		for(k=0;k<3;k++)
		{
			stu[k].total=0;
			for(l=0;l<3;l++)
			{
				stu[k].total=stu[k].total+stu				[k].sub[i];
			}
		}
	}
	printf("\n\n\n\t\t\tSTUDENT TABILAR FORMATE");
	printf("\n\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	printf("\n No \t\t Name\t\t\t Total");
	for(i=0;i<3;i++)
	{
		printf("\n\n\n%d\t\t%s\t\t\t%d",stu[i].no,stu [i].subTopicDefinition,stu[i].total);
	}

}
// Output:
// 		Enter The Data For Student	
// 	1	Abhishek	180
// 	2	Kishan		150
// 	3	Kaushal		130