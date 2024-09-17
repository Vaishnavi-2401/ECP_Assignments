/*
Write a program to display number of days in the given year. Check condition for leap year.
A year is a leap year if it is divisible by 4 but not by 100, except that years divisible by 400 are leap years.
----- Using Conditional Operator
*/


#include <stdio.h>

int main()

{
    int year, res;

    printf("Enter the year : ");
    scanf("%d",&year);
    
   	res = (year % 4 == 0 && year % 100 != 0) ? printf("leap year") : (year % 400 == 0) ? printf("leap year") : printf("Not a leap year");

   return 0;

}
