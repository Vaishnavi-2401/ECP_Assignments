//Write a function to count number of ‘1’ bits into a given number.



#include <stdio.h>
 
int countSetBits(int n)
{
    int count = 0;
    while (n) 
    {
        count =count +( n & 1 );
        n >>= 1;
    }
    return count;
}
 
int main()
{
    int i ;
    printf("Enter the No : ");
    scanf("%d",&i);
    printf("No of 1s in %d is : %d",i, countSetBits(i));
    return 0;
}
