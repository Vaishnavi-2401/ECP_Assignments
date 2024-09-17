//Write a program to accept a number and check whether it is Prime no.



#include <stdio.h>

int main()

{

    int num, flag = 0, num1, i;

    printf("Enter the number : ");
    scanf("%d", &num);

    num1 = num / 2;

    for(i = 2; i <= num1; i++)

    {

        if (num % i == 0)

        {

            printf("Number is not prime");

            flag = 1;
            break;

        }

    }

    if (flag == 0)

	{

        printf("Number is prime");

	}

    return 0;

}
