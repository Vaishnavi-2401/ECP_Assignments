//Write a program to accept number and check whether the number is +ve, -ve and zero.



#include<stdio.h>

int main()

{

	int num;

	printf("Enter the number : ");
	scanf("%d",&num);

	if(num < 0)

	{

		printf("Number is Negative");

	}

	else if(num > 0)

	{

		printf("Number is Positive");

	}

	else

	{

		printf("Number is Zero");

	}

	return 0;

}
