/*
Write a program to display number of days in the given year. Check condition for leap year. 
A year is a leap year if it is divisible by 4 but not by 100, except that years divisible by 400 are leap years.
----- Using logical operators
*/



#include <stdio.h>

int main()

{

    int year;

    printf("Enter the year : ");
    scanf("%d",&year);
    
    if((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))

	{
        printf("It is a leap year", year);
	
	}

    else

	{

        printf("It is not a leap year", year);   

	}

	return 0;
	
}
