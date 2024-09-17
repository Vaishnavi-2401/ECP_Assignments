//Write a function to print Pascal triangle of given number of rows.



#include <stdio.h>

void print_triangle(int rows)

{

    int space, i, j, cal =1;

    for(i = 0; i < rows; i++)            
    {

        for(space = 1; space <= rows - i; space++) 
		{

            printf("  ");

		}
 
        for(j = 0; j <= i; j++)

        {

            if(j == 0 || i == 0)

                cal = 1;

            else

                cal = cal * (i - j + 1) / j; 
 
            printf("%4d", cal);

        }

        printf("\n");

    }

}

int main()

{

    int rows, cal = 1, space, i, j;
 
    printf("Enter number of rows : ");
    scanf("%d",&rows);
    
    print_triangle(rows);
    
    return 0;

}
