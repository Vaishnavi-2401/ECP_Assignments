//Write a program to display number of days in the given month and year using : Logical Operators



#include<stdio.h>

int main()

{

	int month, year, num;

    printf("Enter month number : ");
    scanf("%d", &month);

    printf("Enter the year : ");
    scanf("%d", &year);

	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)

	{

    	printf("31 days");

	}

    else if (month == 4 || month == 6 || month == 9 || month == 11)

	{

    	printf("30 days");

	}

    else

    {

        if (month == 2 && num == 0)

		{

        	printf("28 days");

		}

        else
		
		{

        	 printf("29 days");

    	}

	}

    return 0;

}
