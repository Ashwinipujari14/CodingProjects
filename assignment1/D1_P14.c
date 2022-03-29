//to check whether the entered year is leap or not

#include<stdio.h>

int main()
{
	int year;
	printf("Enter a year :");
	scanf("%d" , &year);
	
	if(year % 4 == 0)
	{
		printf("The entered year is a leap year");
	}
	else
	{
		printf("The entered year is not a leap year");
	}
	
	return 0;
	

	
}
