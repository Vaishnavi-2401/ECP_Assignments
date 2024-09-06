//Write a program to accept an integer value and print its table.



#include<stdio.h>

int main()

{

	int num, i, res;

	printf("Enter the Number : ");
	scanf("%d", &num);

	printf("Table for %d : \n", num);

	for (i = 1; i <= 10; i++)

	{

	res = num * i;

	printf("%d * %d = %d \n",num, i, res);

	}

	return 0;
}
