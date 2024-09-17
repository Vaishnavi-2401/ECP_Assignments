//Write a function to check whether a given byte has even parity. If not set MSB bit to make it even parity.



# include <stdio.h>


int getParity( int n)
{
    int parity = 0;
    while (n)
    {
        parity = !parity;
        n      = n & (n - 1);
    }       
    return parity;
}
 
 void bin(unsigned n)
{
    unsigned i;
    for (i = 1 << 8; i > 0; i = i / 2)
        (n & i) ? printf("1") : printf("0");
}

int main()
{
    int n ;
    printf("Enter the num :");
    scanf("%d",&n);
    
    if((getParity(n) == 0))
    {
        printf("Parity of no %d = even Parity \n",  n);
        bin(n);
    }
    else 
    {
        printf("Parity of no %d = odd Parity \n",  n);
        bin(n);
        n = (n ^ 1) ;
        printf("\n");
        bin(n);
    }
        
    return 0;
    
}
