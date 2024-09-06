//Print the ASCII value of user entered character in decimal, hex, octal format and also print the character for user entered ASCII value.



#include<stdio.h>

int main()

{

	char ch;
	int num;

	printf("Enter the Character : ");
	scanf("%c", &ch);
	
	printf("ASCII value in Decimal format : %d \n",ch);
	printf("ASCII value in Hexadecimal format : %x \n",ch);
	printf("ASCII value in Octal format : %o \n",ch);

	printf("Enter the ASCII value : ");
	scanf("%d", &num);

	printf("Character : %c \n",num);

	return 0;

}
