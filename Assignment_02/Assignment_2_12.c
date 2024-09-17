//Write a program to display number of days in the given month and year using switch case statement.



#include <stdio.h>

int main()

{
    int month,year,num=0;

    printf("Enter the year : ");
    scanf("%d",&year);
    printf("Enter the month number : ");
    scanf("%d", &month);
    
    if(year % 4 == 0)
    {
        if( year % 100 == 0)
        {
            if ( year % 400 == 0)
            {
                printf("%d is a Leap Year day \n", year);
                num=0;
            }
            else
            {
                printf("%d is not a Leap Year day \n", year);
                num=1;
            }
        }
        else
        {
            printf("%d is a Leap Year day \n", year);
            num=0;
        }
    }
    else
    {
        printf("%d is not a Leap Year day \n", year);
        num=1;
    }

    switch(month)

    {

        case 1: 
            printf("31 days");
            break;

        case 2: 
            if(num!=1)
                printf("29 days \n");
            else    
                printf("28 days \n");
            break;

        case 3: 
            printf("31 days");
            break;

        case 4: 
            printf("30 days");
            break;

        case 5: 
            printf("31 days");
            break;

        case 6: 
            printf("30 days");
            break;

        case 7: 
            printf("31 days");
            break;

        case 8: 
            printf("31 days");
            break;

        case 9: 
            printf("30 days");
            break;

        case 10: 
            printf("31 days");
            break;

        case 11: 
            printf("30 days");
            break;

        case 12: 
            printf("31 days");
            break;

        default: 
            printf("Invalid input!");

    }

    return 0;
}
