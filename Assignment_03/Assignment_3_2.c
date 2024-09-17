#include<stdio.h>

int main()

{

    int num = 1, n;
    
    printf("Enter the number : ");
    scanf("%d",&n);
    
    while(num <= 10)
    
    {
    
        printf(" %d * %d = %d \n",num ,n, num * n);
        
        num++;
        
    }
    
    return 0;
    
}
