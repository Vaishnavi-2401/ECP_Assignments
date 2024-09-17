//Write a function to display given number in binary format.



#include<stdio.h>
void bin(unsigned n)
{
    unsigned i;
    for (i = 1 << 8; i > 0; i = i / 2)
        (n & i) ? printf("1") : printf("0");
}
 
int main(void)
{
    int n1;
    printf("Enter the No :");
    scanf("%d",&n1);
    bin(n1);
    printf("\n");
    
    return 0;
}
