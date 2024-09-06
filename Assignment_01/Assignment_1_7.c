/*
Write a program to accept a 4 digit number and
a. Display face value of each decimal digit
b. Display place value of each decimal digit
c. Display no in reverse order by changing decimal place values
If user enters a 4 digit number 9361 output should be
a. 9 3 6 1
b. 9361 = 9 000 + 300 + 60 + 9
c. 1639
*/



#include <stdio.h>

int main()

{

    int num, num1, num2, num3, num4;

    printf("Enter 4 digit number : ");
    scanf("%d", &num);

    num1 = num % 10;
    num = num / 10;
    num2 = num % 10;
    num = num / 10;
    num3 = num % 10;
    num = num / 10;
    num4 = num % 10;

    printf("Face value : %d %d %d %d \n", num4, num3, num2, num1);
    printf("Place Value :%4d %4d %4d %4d \n", num4 * 1000, num3 * 100, num2 * 10, num1 * 1);
    printf("Reverse : %d %d %d %d \n", num1, num2, num3, num4);

    return 0;

}
