//Write a program to accept a number and print all factors excluding the number



#include <stdio.h>

int main()

{
    int num, i = 1;

    printf("Enter the positive integer number : ");
    scanf("%d", &num);

    printf("factors of %d are : ", num);

    while (i < num)

    {

        if (num % i == 0)
        {

            printf("%d ", i);

        }

        ++i;

    }

    return 0;

}
