//Write a program to accept a number and Calculate sum of digits of integer


#include <stdio.h>

int main()

{
     int num, sum = 0;

     printf("Enter the number : ");
     scanf("%d", &num);

     while (num != 0)

     {

         sum += num % 10;
         num = num / 10;

     }

     printf("Sum of digits = %d", sum);

     return 0;
}
