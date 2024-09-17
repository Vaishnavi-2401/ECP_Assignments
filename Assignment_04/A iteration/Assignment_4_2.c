//Write a function to calculate power.



#include<stdio.h>

int power(int base, int expo)

{

    int res = 1;

    for(expo; expo > 0; expo--)

    {

        res = res * base;
    }

    return res;

}

int main()

{

    int base, expo;

    printf("Enter the base number : ");
    scanf("%d", &base);

    printf("Enter an exponent : ");
    scanf("%d", &expo);

    int result = power(base, expo);

    printf("Answer : %d", result);

    return 0;

}
