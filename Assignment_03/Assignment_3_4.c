//Write a program to find factorial of given number.



#include <stdio.h>

int main()

{

    int x = 1, fact = 1, num;

    printf("Enter the number : ");

    scanf("%d", &num);

    while (x <= num)

    {

        fact = fact * x;

        x++;

    }

    printf("Factorial of %d is : %d", num, fact);

    return 0;

}
