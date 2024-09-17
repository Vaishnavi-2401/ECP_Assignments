//Write a program to accept a number and print unique pairs of numbers such that multiplication of the pair is given number



#include<stdio.h>

int main()

{

    int num, i = 1, x;

    printf("Enter the number : ");
    scanf("%d",&num);

    x = num;
    
    while(i < num)

    {
        
        if (num % i == 0)
		
		{

            printf("%d * %d = %d \n", i, num / i, x);

		}

        i++;    
            
    }

    return 0;

}
