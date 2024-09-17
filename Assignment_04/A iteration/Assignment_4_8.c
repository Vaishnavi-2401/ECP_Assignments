//Write a function to return next term of Fibonacci series with each call to the function.



#include<stdio.h>

int next_fib()

{

    static int first = 0, second = 1, next;

    next = first + second;
    first = second;
    second = next;

    return next;

}

int main()

{

    int num;

    printf("Enter the number : ");
    scanf("%d", &num);

    printf("Fibonacci Series : ");

    for(int i = 0; i < num; ++i)
    {

        printf("%d ", next_fib());

    }

    return 0;

}
