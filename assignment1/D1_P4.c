//to find a cube of a given number without pow function

#include<stdio.h>

int main()
{
	int num , cube;
	printf("enter a number :");
	scanf("%d" , &num );
	cube= num * num * num;
	printf("the cube of entered number is:%d " , cube);
	return 0;
}

