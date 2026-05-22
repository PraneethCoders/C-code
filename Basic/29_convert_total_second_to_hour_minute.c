// Program to read total seconds and convert it into hour, min and sec
#include<stdio.h>

int main(){
	int ts,h,m,s;
	printf("Enter Total sec: ");
	scanf("%d",&ts);
	h = ts /3600;
	ts = ts %3600;
	m = ts / 60;
	s = ts % 60;
	printf("Hour  = %d min = %d sec = %d",h,m,s);
	return 0;
}
// Output:
//  Enter total sec: 3690
//  hour = 1  min = 1, sec= 30