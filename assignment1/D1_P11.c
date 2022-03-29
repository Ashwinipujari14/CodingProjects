//To check input character is alphabet or digit

#include<stdio.h>

int main()
{
	char c = 0;
	printf(" Enter a charcter :");
	scanf("%c" ,&c);
	
	if(c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
	{
		printf("The entered character is a alphabet  :%c" , c);
	}
	else if( c >= '0' && c <= '9')
	{
		printf("The entered character is a number  : %c " , c);
	}
	else 
	{
		printf("The entered character is a special symbol");
	}
	return 0;
}
