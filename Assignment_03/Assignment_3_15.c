//Modify the menu driven program for four function calculator. Add a menu item to choose option exit.



#include<stdio.h>

int main()

{

    int num1, num2, ch;
    char choice;

    printf("Enter the two numbers : ");
    scanf("%d%d",&num1,&num2);

    do

	{

        printf("Press 1 to add two numbers : \n");
        printf("Press 2 to subtract two numbers : \n ");
        printf("Press 3 to multiply two numbers : \n");
        printf("Press 4 to divide two numbers : \n");
        scanf("%d",&ch);

    switch(ch)

    {
 
        case 1 : printf("Sum : %d", num1 + num2);
 		         break;

        case 2 : printf("Subtract : %d", num1 - num2);
	        	 break;

        case 3 : printf("Multiply : %d", num1 * num2);
 		         break;

        case 4 : if(num2 == 0)
					{

		            	printf("Denominator cannot be zero");

					}
               	  else

				    {

		          		printf("Divide : %d", num1 / num2);
	        	        break;

					}

        default : printf("Wrong choice!");

    }

    printf("Do you want to continue? (Press y/n) : ");
    scanf(" %c",&choice);

    }

	while (choice=='y');
    
    return 0;

}

