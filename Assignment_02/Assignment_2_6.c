//Write a program to accept a 5 digit number and check whether it is a numeric palindrome.



#include<stdio.h>

int main()

{

	int num, n, rem, rev = 0;

	printf("Enter the number : ");
	scanf("%d", &num);
	n = num;

	while(num !=0)

	{

		rem = num % 10;
		rev = rev * 10 + rem;
		num = num / 10;

	}

	printf("Reversed number : %d \n", rev);

	if(n == rev)

	{

		printf("Number is Palindrome");

	}

	else

	{

		printf("Number is not Palindrome");

	}

	return 0;

}
