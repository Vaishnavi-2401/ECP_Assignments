/*
Write a program to accept a character c and display category of the input character.
ALPHABET : c is a letter (65 to 90 or 97 to 122)
UPPERCASE : c is an uppercase letter (65 to 90)
LOWERCASE : c is a lowercase letter (97 to 122)
DIGIT : c is a digit (48 to 57)
SPACE : c is a space(32), tab(9), carriage return(13), new line(10)
OTHER : Not listed above
*/



#include<stdio.h>

int main()

{

	char ch;

	printf("Enter any character : ");
	scanf("%c", &ch);

	if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
	{	
    	printf("'%c' is ALPHABET", ch);
	}
	
    if (ch >= 97 && ch <= 122)
	{
      	printf("'%c' is LOWERCASE", ch);
	}

    else if (ch >= 65 && ch <= 90)
	{
		printf("'%c' is UPPERCASE", ch);
  	}

  	else if (ch >= 48 && ch <= 57)
  	{
    	printf("'%c' is DIGIT", ch);
  	}

	else if (ch == ' ')
  	{
    	printf("space : (%d)", ' ');
  	}

  	else if (ch == '\n')
  	{
    	printf("new line : (%d)", '\n');
  	}

  	else if (ch == '\t')
  	{
    	printf("tab : (%d)", '\t');
  	}

  	else if (ch == '\r')
  	{
    	printf("carriage Return : (%d)", '\t');
  	}

	else
  	{
    	printf("Not listed above");
  	}

	return 0;

}
