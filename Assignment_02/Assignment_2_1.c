/*
Write a program to accept two numbers and display division of the two numbers.
Check for divide by zero error.
If divider is zero then display appropriate error message.
*/


#include<stdio.h>

int main()

{

	int num1, num2;
	float res;

	printf("Enter the two numbers :");
	scanf("%d%d",&num1, &num2);

	if(num2 != 0)

	{
		
		res = num1 / num2;
		printf("Division : %.4lf \n", res);

	}

	else

	{
		
		printf("Division by Zero is not possible!");

	}

	return 0;

}
