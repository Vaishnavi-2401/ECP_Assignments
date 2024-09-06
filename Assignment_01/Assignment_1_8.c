//Write a program to accept three integer numbers and find its average.



#include<stdio.h>

int main()

{
	int num1, num2, num3;
	float avg;

	printf("Enter the three Numbers : ");
	scanf("%d %d %d", &num1, &num2, &num3);

	avg = (num1 + num2 + num3) / 3.0f;

	printf("Average = %.2f \n", avg);

	return 0;

}
