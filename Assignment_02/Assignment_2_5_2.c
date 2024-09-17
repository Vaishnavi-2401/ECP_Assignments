//Write a program to find maximum of three numbers using : Conditional Operator


#include<stdio.h>

int main()

{

	int num1, num2, num3, res;

	printf("Enter the three numbers :");
	scanf("%d%d%d \n", &num1, &num2, &num3);

	res = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

	printf("Maximum Number is : %d \n", res);

	return 0;

}
