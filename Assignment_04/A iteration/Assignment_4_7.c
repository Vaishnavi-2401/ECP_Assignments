//Write a function to print given number of terms of Fibonacci series.



#include<stdio.h>

void print_fib(int rows)

{

   printf("Fibonacci series : ");

    int i, a = 0 ,b = 1, c = 0;

    for (i = 1; i <= rows; i++)
	{

        printf("%d ", c);

        a = b;     
        b = c;     
        c = a + b; 

    }

}

int main()

{

    int num;
 
    printf("Enter the number : ");
    scanf("%d",&num);
    
    print_fib(num);
    
    return 0;

}
