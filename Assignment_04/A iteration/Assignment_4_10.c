//Write function to check whether given year is leap or not. Write another function to print number of days in given month.



#include<stdio.h>

int check_year(int year)

{

    if(year % 400 == 0)
        return 1;

    else if(year % 100 == 0)
        return 2;

    else if(year % 4 == 0)
        return 1;

    return 2;

}

void no_days(int m, int y)

{
    if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 12)
    {

        printf("The month has %d days \n", 31);

    }
    else if(m == 4 || m == 6 || m == 10 || m == 11 || m == 9)
    {

        printf("month has 30 days \n");

    }
    else if(m == 2 && check_year(y) == 1)
    {

        printf("month has 28 days \n");

    }
    else
        (m == 2 && check_year(y) == 2);
    {

        printf("month has 29 days \n");

    }

}

int main()

{

    int y, res;

    printf("Enter the year : ");
    scanf("%d", &y);

    res = check_year(y);

    if(res == 1)
	{

        printf("leap year \n");

	}
    else
	{

        printf("Non-leap year \n");

	}

    int month;

    printf("Enter the month : ");
    scanf("%d", &month);

    if(month <= 12 || month > 1)
        no_days(month, y);

    else
	{

        printf("Invalid month");
	
	}

    return 0;

}
