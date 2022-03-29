//To convert uppercase character to lowercase character and vice versa

#include<stdio.h>

int main()
{
	char c = 0;
	printf("Enter a character :");
	scanf("%c" , &c);
	
	if( c >= 'A' && c <='Z')
	{
		c=c+32;
		printf("The character in lower case %c" ,c);
	}
	else if( c >='a' && c <= 'z')
	{
		c = c-32;
		printf(" The entered charcter in uppercase %c" , c);
	}
	else
	{
		printf("Invalid input");
	}
	return 0;
}
