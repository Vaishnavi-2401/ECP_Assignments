//Write a function to indicate whether given number is prime or not. Write another function to print prime numbers in the given range.



#include<stdio.h>

int check_prime(int n);
void print_Primes(int lower_Limit, int upper_Limit);

int main()

{

    int num;

    printf("Enter the Positive number : \n");
    scanf("%d", &num);

    check_prime(num);

    int lower, upper;

    printf("Enter the range to print prime no : \n");
    scanf("%d%d", &lower, &upper);
    print_Primes(lower, upper);

    return 0;
}

void print_Primes(int lower_Limit, int upper_Limit)
{
    printf("All prime numbers between %d to %d : \n", lower_Limit, upper_Limit);

    while(lower_Limit <= upper_Limit)

    {
       
        if(check_prime(lower_Limit))
		{

            printf("%d \n", lower_Limit);

        }

        lower_Limit++;

    }

}

int check_prime(int n)

{
    int i, flag = 0;

    for(i = 2; i <= n / 2; ++i)
    {

        if(n % i == 0)

        {

            flag = 1;

            break;

        }

    }

    if(flag == 0)
    {

        printf("%d is a prime number\n", n);

    }

    else
    {

        printf("%d is not a prime number\n", n);

    }

}
