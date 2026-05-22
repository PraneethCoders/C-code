// Convert Total Seconds Into Hours,Minutes And Remaining Seconds
#include<stdio.h>
#include<conio.h>
void main()
{
	int ts,h=0,m=0,s;
	printf("Enter total sec");
	scanf("%d",&ts);
	while(ts>=60)
	{
	      m++;
	      while(m>=60)
	      {
	 	     h++;
	      	     m=m-60;
	      }
	      ts=ts-60;
	}
	printf("\nHH:MM:SS = %d:%d:%d",h,m,ts);
}
// Output:
// 	Enter total sec:
// 	3600
// 	HH:MM:SS = 01:00:00