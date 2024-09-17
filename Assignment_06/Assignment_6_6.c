//Write a function to which accepts a number, base and character pointer and converts number to a string i.e. simulate itoa().char* itoa(int value, char *string, int base);



#include <stdio.h>

char* itoa(int value, char *string, int base) 
{
    if (base < 2 || base > 36) 
	{
        *string = '\0';  
        return string;
    }

    char digits[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char buffer[33];  
    int i = 0;      
    int isNegative = 0;

    if (value == 0) 
	{
        string[0] = '0';
        string[1] = '\0';
        return string;
    }

    if (value < 0 && base == 10) 
	{
        isNegative = 1;
        value = -value;
    }

    while (value > 0) 
	{
        buffer[i++] = digits[value % base];
        value /= base;
    }

    if (isNegative) 
	{
        buffer[i++] = '-';
    }

    buffer[i] = '\0';

    int j;
    for (j = 0; j < i; j++) 
	{
        string[j] = buffer[i - j - 1];
    }
    string[i] = '\0';

    return string;
}

int main()

{

    char buffer[33];  

    printf("itoa(1234, buffer, 10) = %s\n", itoa(1234, buffer, 10)); 
    printf("itoa(-1234, buffer, 10) = %s\n", itoa(-1234, buffer, 10)); 
    printf("itoa(255, buffer, 16) = %s\n", itoa(255, buffer, 16));   
    printf("itoa(255, buffer, 2) = %s\n", itoa(255, buffer, 2)); 
    printf("itoa(0, buffer, 10) = %s\n", itoa(0, buffer, 10));      

    return 0;
}
