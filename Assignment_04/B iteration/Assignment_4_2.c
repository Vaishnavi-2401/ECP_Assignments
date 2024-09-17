//Write a function to calculate power using recursion.


#include<stdio.h>

int power(int n1, int n2);
int main()

{

    int base, num, res;

    printf("Enter base number : ");
    scanf("%d", &base);

    printf("Enter power number (positive integer) : ");
    scanf("%d", &num);

    res = power(base, num);

    printf("%d ^ %d = %d", base, num, res);

    return 0;

}

int power(int base, int num)
{

    if(num != 0)

        return(base * power(base, num - 1));

    else

        return 1;

}
