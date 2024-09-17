//Write a function to implement four function calculator. The return value indicates the error. The result is returned via out-parameter.



#include<stdio.h>

int add_pro(int n1, int n2, int *add, int *sub, int *mul, int *div)

{

    *add = n1 + n2;
    *sub = n1 - n2;
    *mul = n1 * n2;

    if(n2 == 0)
    {

        return 1;

    }
    else

        *div = n1 / n2 ;
    
}

int main()

{

    int n1, n2, add = 0, sub = 0, mul = 0, div = 0, res = 0;

    printf("Enter the two numbers : ");
    scanf("%d%d",&n1, &n2);

    res = add_pro(n1, n2, &add, &sub, &mul, &div);

    printf("Addition : %d \n", add);
    printf("Subtraction : %d \n",sub);
    printf("Multiplication : %d \n",mul);
    
    if(res == 1)
	{

        printf("Division by zero is not possible");

	}
    else
	{

        printf("Division : %d \n",div);

	}
    
    return 0;

}
