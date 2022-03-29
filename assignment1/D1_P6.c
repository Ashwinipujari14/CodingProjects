//Program to calculate simple Interest

#include<stdio.h>

int main()
{
	int princ , year;
	float simple_Interest , rate;
	
	printf(" Enter the principle amount and year :");
	scanf("%d%d" ,&princ , &year);
	
	printf(" Enter the rate :");
	scanf("%f" , &rate);
	
	simple_Interest = (float)( princ * rate * year) / 100;
	printf("The simple Interest is : %f" , simple_Interest);
	return 0;
	
}
