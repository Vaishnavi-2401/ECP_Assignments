//Write a function to implement four function calculator. Function would take operands and operator as arguments and returns result



#include<stdio.h>

void cal(int n1, int n2 , char op)

{

    if(op == '+')

	{

        printf("Addition : %d %c %d = %d", n1, op, n2, n1 + n2);

	}
	else if(op == '-')

	{

        printf("Subtracion : %d %c %d = %d", n1, op, n2, n1 - n2);

	}
    else if(op == '*')

	{

        printf("Multiplication : %d %c %d = %d", n1, op, n2, n1 * n2);

	}
    else

	{

        printf("Division : %d %c %d = %d", n1, op, n2, n1 / n2);

	}

}

int main()

{

    char ch;
    int n1, n2;

    printf("Enter choice : ");
    scanf("%c",&ch);

    printf("Enter the two Numbers : ");
    scanf("%d%d", &n1, &n2);

    cal(n1, n2, ch);
    
    return 0;

}
