//Write a program to find maximum of three numbers using : If – else



#include<stdio.h>

int main()

{

	int num1, num2, num3;

	printf("Enter the three numbers : ");
	scanf("%d%d%d", &num1, &num2, &num3);

	if(num1 > num2)

	{

		if(num1 > num3)

		{	

			printf("Num 1 is Maximum");

		}

		else

		{

			printf("Num 3 is Maximum");

		}

	}

	else if(num2 > num1)

	{

		if(num2 > num3)

		{

			printf("Num 2 is Maximum");

		}

		else

		{

			printf("Num 3 is Maximum");

		}

	}	

	return 0;

}
