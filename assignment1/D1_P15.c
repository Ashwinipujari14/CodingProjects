//Menu driven program of all arithmetic operations


#include<stdio.h>
#include<conio.h>

int main()
{
	int choice =0 , num1 = 0 , num2 = 0;
	
	printf("Enter two numbers :");
	scanf("%d%d" , &num1 , &num2);
	
	do
	{
		printf("\nEnter your choice :\n 1.addition\n 2.Substraction \n 3.Multiplication \n 4.Division \n 5.Modulus \n 6.exit");
		scanf("%d" , &choice);
		
		switch(choice)
		{
			case 1 : printf("\nAddition is : %d \n" , num1 + num2);
					 break;
					 
			case 2 : printf("\nSubstraction is : %d \n " , num1 - num2);
					 break;
					 
			case 3 : printf("\nMultiplication is : %d \n" , num1 * num2);
					 break;
					 
			case 4 : printf("\nDivision is : %d \n" , num1 / num2);
					 break;		 
			
			case 5 : printf("\nModulus is : %d \n" , num1 % num2);
					 break;
					
			case 6 : printf("\nProgram Terminated\n");
					 exit(0);
					 
			default : printf("\nInvalid choice\n ");
					 break;
		}
		
	}while(choice !=0);
	return 0;
	
}
