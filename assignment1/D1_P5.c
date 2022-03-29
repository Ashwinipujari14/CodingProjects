// To find Quotient and Reminder .
//Read divisor and dividend and then find the quotient and reminder,
// result will be printed on the screen


#include<stdio.h>

int main()
{
	int divisor , dividend , quotient, reminder ;
	printf("Enter the divisor and dividend :");
	scanf("%d%d" , &divisor , &dividend);
	quotient = divisor / dividend;
	reminder = divisor % dividend;
	printf("The quotient  is : %d and reminder is : %d" ,quotient , reminder);
	return 0;
}
