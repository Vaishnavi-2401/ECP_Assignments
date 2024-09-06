/*
Write a program to Accept two numbers and
a. find its sum.
b. find its difference.
c. find its product.
*/



#include<stdio.h>

int main()

{

	int num1, num2, sum, diff, product;

	printf("Enter the two numbers : ");
	scanf("%d %d",&num1,&num2);

	sum = num1 + num2;
	printf("Addition : %d \n",sum);

	diff = num1 - num2;
	printf("Difference : %d \n",diff);

	product = num1 * num2;
	printf("Product : %d \n",product);

	return 0;

}
