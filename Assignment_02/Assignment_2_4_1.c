//Write a program to find maximum of two numbers using : If – else


#include<stdio.h>

int main()

{

	int num1, num2;

	printf("Enter the two numbers : ");
	scanf("%d%d\n", &num1, &num2);

	if(num1 > num2)

	{

		printf("Num1 is Maximum");

	}

	else

	{

		printf("Num2 is Maximum");

	}

	return 0;

}
