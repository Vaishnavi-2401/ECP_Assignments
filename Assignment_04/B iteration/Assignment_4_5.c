//Write a function to print a given number in binary format.



#include<stdio.h>

void get_Binary(int);
int main()

{

	int num = 0;

	printf("Enter an integer number : ");
	scanf("%d",&num);

	printf("Binary value of %d : ", num);
	get_Binary(num);

	return 0;

}

void get_Binary(int n)
{

	int loop;

	for(loop=15; loop>=0; loop--)
	{

		if((1 << loop) & n)
		{

			printf("1");

		}
		else
		{

			printf("0");

		}

	}

}
