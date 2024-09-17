//Write a program to print the tables of the numbers from 1 to 10.



#include <stdio.h>
 
int main()

{

    int i, j;
	int num;
  
    for(i = 1; i <= 10; i++) 

    {

        num = i;

        for(j = 1; j <= 10; j++)

        {

            printf("%d \t", ( num * j ));

        }
  
        printf("\n");

    }

    return 0;

}
