//Write a program to create four function calculator. Four functions are +, - , *, /



#include<stdio.h>

int main()

{
	
	int num1 , num2 , res ;
	char op;

	printf("Enter the two numbers : ");
	scanf("%d %d",&num1, &num2);

	printf("Enter the Operator : ");
	scanf("%*c%c",&op);

	switch(op)

	{

		case '+' :
				 res =  num1 + num2;
				 printf("Addition : %d \n", res);
				 break;

		case '-' :
				 res = num1 - num2;
				 printf("Subtraction : %d \n", res);
				 break;

		case '*' :
				 res = num1 * num2;
				 printf("Multiplication : %d \n", res);
				 break;

		case '/' :
				 res = num1 / num2;
				 if(num2 != 0)
				  {
					printf("Division : %d \n", res);
				  }
				  else
				  {
					printf("Division by zero is not possible \n");
				  }
				  break;

	   default :
	   		   printf("Invalid Operator \n");
	   		   break;

	}

	return 0;
}
