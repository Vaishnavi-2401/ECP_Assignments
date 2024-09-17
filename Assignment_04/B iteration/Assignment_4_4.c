//Write a function to calculate nth term of the Fibonacci series using recursion. Write another function to print given number of terms of Fibonacci series.



#include<stdio.h>

int fib(int num)

{

    if(num == 0) 
	{

        return 0;

    } 
	else if(num == 1) 
	{

        return 1;

    } 
	else 
	{

        return fib(num - 1) + fib(num - 2);

    }

}

void print_Fibonacci_Series(int terms) 
{

    for(int i = 0; i < terms; i++) 
	{

        printf("%d ", fib(i));

    }

    printf("\n");

}

int main() 

{
    int terms;

    printf("Enter the number of terms in the Fibonacci series : ");
    scanf("%d", &terms);

    if(terms < 0) 
	{

        printf("Number of terms cannot be negative\n");

    } 
	else 
	{

        print_Fibonacci_Series(terms);

    }

    return 0;

}

