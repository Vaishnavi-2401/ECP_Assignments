//Modify above program (18) to accept a range i.e. two numbers and print tables of numbers within the range.



#include<stdio.h>

int main()

{

    int i, j, num1, num2;

    printf("Enter the range : ");
    scanf("%d%d", &num1, &num2);

    int num;

    for(i = num1; i <= num2; i++)

    {

        num = i;

        for(j = 1; j <= 10; j++)

        {

            printf("%d    ", ( num * j ));

        }

        printf("\n");

    }

    return 0;

}
