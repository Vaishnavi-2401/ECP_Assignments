//Write a program to display Armstrong Numbers between 1 to 500



#include <stdio.h>

int main()

{

    int num, sum, i, a, b;

    printf("The Armstrong numbers in between 1 to 500 are : ");

    for(i = 1; i <= 500; i++)

    {

        a = i;

        sum = 0;

        while(a != 0)

        {

            b = a % 10;
            sum = sum + a * a * a;
            a = a / 10;
        }

        if(sum == i)

		{

            printf("%d ", i);

		}

    }

    return 0;

}
