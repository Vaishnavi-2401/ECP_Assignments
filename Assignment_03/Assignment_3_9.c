//Write a program to accept two numbers and find its GCD (greatest common divisor) using Euclidean algorithm.



#include <stdio.h>

int main()

{

    int num1, num2, res = 0;

    printf("Enter the number : ");
    scanf("%d %d", &num1, &num2);

    while (num2 != 0)

    {

        res = num1 % num2;

        printf("%d %% %d = %d \n", num1, num2, res);
        num1 = num2;
        num2 = res;

    }

    printf("GCD is : %d", num1);

    return 0;

}
