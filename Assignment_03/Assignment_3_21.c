//Write a program to display First 5 prime numbers after a given number.


#include <stdio.h>

int main()

{

    int num, i, count, is_Prime;

    printf("Enter the Number : ");
    scanf("%d", &num);

    for(i = num + 1, count = 0; count < 5;)

    {

        is_Prime = 1;

        for(int j = 2; j * j <= i; j++)

        {

            if(i % j == 0)

            {

                is_Prime = 0;
                break;

            }

        }

        if (is_Prime)

        {

            printf("%d ", i);

            count++;

        }

        i++;

    }

    return 0;

}
