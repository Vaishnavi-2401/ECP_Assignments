//Write a function to check whether given character is alphabet or not. If it is alphabet, perform its bitwise XOR operation with value 32 and observe the result.



#include <stdio.h>

void check_char(char ch)
{
    int n;
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("'%c' is alphabet.", ch);
        n = ch ^ 32 ;
        printf("%d",n);
        
    }
    else
        printf("Its Not alphabet :");
    
}

int main()
{
    char ch;
    printf("Enter any character : ");
    scanf("%c", &ch);


    check_char(ch);
    
    
    return 0;
}
