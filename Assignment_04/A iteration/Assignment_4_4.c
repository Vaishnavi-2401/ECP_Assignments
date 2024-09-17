//In above program, division may fail if denominator is zero. Use global variable as an error flag to avoid this problem.



#include<stdio.h>

int error_flag = 0;

float cal(float num1, float num2, char op)

{

    float res = 0;

    if(op == '+') 
	{

        res = num1 + num2;

    }
	else if(op == '-')
	{

        res = num1 - num2;

    }
	else if(op == '*')
	{

        res = num1 * num2;

    }
	else if(op == '/')
	{

        if(num2 != 0)

		{

            res = num1 / num2;

        }
		else
		{

            error_flag = 1;

        }

    }
	else
	{

        error_flag = 1;

    }

    return res;

}

int main()

{

    float num1, num2, result;
    char op;


    printf("Enter the two numbers : ");
    scanf("%f%f", &num1, &num2);

    printf("Enter the operator : ");
    scanf(" %c", &op);

    result = cal(num1, num2, op);

    if(error_flag == 1)
	{

        printf("Division by zero is not possible");

    }
	else
	{

        printf("The result of %.2f %c %.2f : %.2f\n", num1, num2, op,  result);

    }

    return 0;

}
