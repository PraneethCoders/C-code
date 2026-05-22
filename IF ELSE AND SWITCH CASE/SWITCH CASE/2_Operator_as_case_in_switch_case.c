// Operator as case in switch case
#include<stdio.h>
#include<conio.h>
void main()
{
	char op;
	float num1,num2,res;
	clrscr();
	printf("Enter first number:>>\n");
	scanf("%f",&num1);
	printf("Enter second number:>>\n");
	scanf("%f",&num2);
	printf("Operation(+,-,*,/):>>\n");
	fflush(stdin);
	scanf("%c",&op);
	switch(op)
	{
		case '+':
		{
			res=num1+num2;
			break;
		}
		case '-':
		{
			res=num1-num2;
			break;
		}
		case '*':
		{
			res=num1*num2;
			break;
		}
		case '/':
		{
			res=num1/num2;
			break;
		}
		default:
		{
			printf("Invalid choice...");
		}
	}
	printf("Result::%f",res);
	getch();
}

//Output:
//	Enter first number:>>
//	56
//	Enter second number:>>
//	10
//	Operation(+,-,*,/):>>
//	*
//	Result::560
