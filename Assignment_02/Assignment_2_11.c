/*
Write a program to accept a point in Cartesian co-ordinate system and decide the quadrant in which the point lies.
Also check for special cases point lies on +- x-axis, +- y-axis, origin.
*/



#include <stdio.h>

int main()

{

	int num1, num2;

	printf("Enter the values for X and Y coordinate : ");
	scanf("%d%d", &num1, &num2);

	if (num1 > 0 && num2 > 0)
	{
		printf("The coordinate point (%d,%d) lies in the First quandrant", num1, num2);
	}

	else if (num1 < 0 && num2 > 0)
	{
		printf("The coordinate point (%d,%d) lies in the Second quandrant", num1, num2);
	}

	else if (num1 < 0 && num2 < 0)
	{
		printf("The coordinate point (%d, %d) lies in the Third quandrant", num1, num2);
	}

	else if (num1 > 0 && num2 < 0)
	{
		printf("The coordinate point (%d,%d) lies in the Fourth quandrant", num1, num2);
	}

	else if (num1 == 0 && num2 == 0)
	{
		printf("The coordinate point (%d,%d) lies at the origin", num1, num2);
	}

	return 0;

}
