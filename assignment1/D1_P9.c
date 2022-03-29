// To find largest number among two numbers

# include <stdio.h>

int main()
{
	int num1 = 0, num2 =0;
	printf("Enter two numbers : ");
	scanf("%d%d" , &num1 , &num2);
	
	if(num1>num2)
	{
		printf("The largest number is : %d" , num1);
	}
	else
	{
		printf("The largest number is : %d" , num2);	
	}
	return 0;
}
