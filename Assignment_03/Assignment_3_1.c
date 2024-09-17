


#include <stdio.h>

int main()

{

    char ch;
    int num;
    
    printf("Enter the character : ");
    scanf("%c",&ch);
    printf("Enter the Number : ");
    scanf("%d",&num);
    
    while(num != 0)
    
    {
    
        printf("%c",ch);
        
        num--;
        
    }

    return 0;
    
}
