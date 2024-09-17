/*
Print following pattern
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
*/



#include <stdio.h>

int main()

{

    int i = 0, j = 0;

    printf("Pattern : ");

    for(i = 0; i < 5; i++)

    {

        printf("\n");

        for(j = 0; j < 5; j++)

		{

            printf(" * ");

		}

    }

    return 0;

}
