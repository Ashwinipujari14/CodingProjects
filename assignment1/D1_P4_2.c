//to find a cube of a given number with pow function

#include<stdio.h>
#include<math.h>

int main()
{
	int num , cube;
	printf("enter a number :");
	scanf("%d" , &num );
	
	cube= pow(num , 3);
	printf("the cube of entered number is:%d " , cube);
	return 0;
}

