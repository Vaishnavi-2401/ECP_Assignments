//Write a program to accept a number and print the number in character, decimal, octal and hex formats.



#include<stdio.h>

int main()

{

	int num;

	printf("Enter the Number : ");
	scanf("%d",&num);

	printf("Character Value : %c \n",num,num);
	printf("Octal Value : %o \n",num);
	printf("Hexadecimal Value : %x \n",num);

	return 0;

}
