//Write a function to calculate factorial of a given number using recursion.



#include<stdio.h>

int multiply_numbers(int n);
int main()

{

    int num;

    printf("Enter the positive integer : ");
    scanf("%d", &num);

    printf("Factorial of %d : %d", num, multiply_numbers(num));

    return 0;

}

int multiply_numbers(int num)
{

    if(num >= 1)

        return num * multiply_numbers(num - 1);

    else

        return 1;

}
