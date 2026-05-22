// Simple marksheet example

#include<stdio.h>
#include<conio.h>
void main()
{
	int rono;
	char subTopicDefinition[20];
	float math,sci,eng,total,per;
	
	printf("Enter the roll no:\n");
	scanf("%d",&rono);
	printf("Enter the subTopicDefinition:\n");
	scanf("%s",subTopicDefinition);
	printf("Enter the maths marks:\n");
	scanf("%f",&math);
	printf("Enter the sci marks:\n");
	scanf("%f",&sci);
	printf("Enter the eng marks:\n");
	scanf("%f",&eng);
	total=math+sci+eng;
	printf(" total Is=%f\n",total);
	per=total/3;
	printf(" Percantage Is=%f",per);
	if(per<40)
	{
		printf("\n Fail");
	}
	else if(per<50 && per>40)
	{
		printf("\nGrade C");
	}
	else if(per<60 && per>50)
	{
		printf("\nGrade B");
	}
	else if(per<70 && per>60)
	{
		printf("\nGrade A");
	}
	else
	{
		printf("\nDist");
	}
	if(math<35||sci<35||eng<35)
	{
		printf("\nFail");
	}
	else
	{
		printf("\nPass");
	}
	
}
//Output:
//	Enter the roll no:
//	102
//	Enter the subTopicDefinition:
//	Anshi	
//	Enter the maths marks:
//	60
//	Enter the sci marks:
//	80
//	Enter the eng marks:
//	85
//	Total is:225
//	Percantage is:75
//	Grade A
//	Pass
