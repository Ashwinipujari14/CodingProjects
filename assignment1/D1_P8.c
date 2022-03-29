// To check whether a person is eligible for voting or not.when age is given or input from user
#include<stdio.h>

int main()
{
	int age;
	printf("Enter an age of a person ");
	scanf("%d" , &age);
	
	if( age <= 18 )
	{
		printf(" Not Eligible for voting ");
	}
	else
	{
		printf(" Eligible for voting !!!");
	}
	return 0;
}
