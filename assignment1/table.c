//Print a multiplication table

#include<stdio.h>
void table();
int main()
{
	table();
	return 0;
}

void table()
{
	int i,j;
	for(j=2;j<=10;j++)
	{

		for(i=1;i<=10;i++)
	{
		printf("%d  *  %d = %d\n" , j , i, j*i);
	}
}
}
