//Write a program to find maximum of two numbers using : Conditional Operator


#include<stdio.h>

int main()

{

	int num1, num2, res;

	printf("Enter the two numbers : ");
	scanf("%d%d \n", &num1, &num2);

	res = (num1 > num2) ? num1 : num2;

	printf("Maximum number is : %d \n", res);

	return 0;

}
