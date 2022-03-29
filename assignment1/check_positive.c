//check function and take if it is positive or negative 
// if positive then check prime function
//if negative then prompt to another number

#include<stdio.h>

int check(int num);
void check_prompt();
void check_prime(int);
int main()
{
	int num=0;
	int res;
	printf("Enter a number :");
	scanf("%d" ,&num);
	res =check(num);
	if(res==0)
	{
		check_prime(res);
	}
	
}

int check(int z)
{
	if(z>0)
	{
		printf("the entered number is positive\n");
		return 0;
	}
	else
	{
		printf("the entered number is negative\n");
		check_prompt();
		return 1;
	}
}


void check_prompt()
{
	printf("the entered number is invalid .please enter another number\n");
}


void check_prime(int x)
{
	if(x%2==0)
	{
		printf("The given number is  not prime\n");
		
	}
	else
	{
		printf("the given number is prime\n");
	}
}







