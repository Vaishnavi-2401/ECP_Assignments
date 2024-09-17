//Write a function to print a given character for a given number of times.



#include<stdio.h>

void print(char c,int n)

{

    int i;

    for(i = 0 ; i < n ; i++)
	{

        printf("Char %d times : %c \n", i, c);

	}

}

int main()

{

    int t;
    char c;

    printf("Enter the character : ");
    scanf("%c",&c);

    printf("How many number of times : ");
    scanf("%d",&t);
    
    print(c, t);

    return 0;

}
