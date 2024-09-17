//Write a function to calculate factorial of a given number.



#include<stdio.h>

int factorial(int num) 

{

    int fact = 1;

    for (int i = 1; i <= num; i++) 

	{

        fact = fact * i;

    }

    return fact;

}

int main()

{

    int n, res;
  
    printf("Enter the number : ");
    scanf("%d", &n);

    res = factorial(n);
    
    printf("Factorial of %d : %d\n", n, res);

    return 0;

}
