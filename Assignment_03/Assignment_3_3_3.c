//Write a program to accept a number and Check whether given number is numeric palindrome or not



#include <stdio.h>

int main()

{

    int num, rev=0, rem, original;

    printf("Enter an integer : ");
    scanf("%d", &num);

    original = num;

    while (num != 0)

    {

        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;

    }

    if (original == rev)
	{
        printf("%d is a numeric palindrome", original);

	}

    else
	{

        printf("%d is not a numeric palindrome", original);
		
	}

    return 0;

}
