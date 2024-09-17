//Write a program to accept a number and print its prime factors.



#include <stdio.h>

void print_Prime_Factors(int num)

{

    for(int i = 2; i <= num; i++)

	{

        while (num % i == 0) 

		{

            printf("%d ", i);

            num = num / i;

        }

    }

}

int main() 

{

    int n;

    printf("Enter the number : ");
    scanf("%d", &n);

    printf("Prime factors are : ");

    print_Prime_Factors(n);

    return 0;

}
