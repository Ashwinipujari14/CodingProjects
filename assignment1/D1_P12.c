//To check the input character is vowel or consonant

#include<stdio.h>

int main()
{
	char c =0;
	printf("Enter a character :");
	scanf("%c", &c);

	if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' )
	{
		printf("the entered character is a vowel");
	}
	else if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' )
	{
		printf("the entered character is a vowel");
	}
	else
	{
		printf("The Entered character is consonant");
	}
	return 0;
}
