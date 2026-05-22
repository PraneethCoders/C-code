//  Program to convert temperature from degree centigrade to Fahrenheit
#include<stdio.h>

int main(){
	float celsius,fahrenheit;
	printf("enter temp in celsius :");
	scanf("%f",&celsius);
	fahrenheit = (1.8 * celsius) + 32;
	printf("\nTemperature in Fahrenheit %f",fahrenheit);
	return 0;
}
// Output:
// 	Enter temp in Celsius : 32
// 	Temperature in Fahrenheit : 89.59998