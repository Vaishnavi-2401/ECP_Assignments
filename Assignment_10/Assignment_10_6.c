//Write a function to swap two numbers using XOR operation.



#include <stdio.h>

void swap_no(int *n1 ,int *n2)
{
    *n1 = *n1 ^ *n2 ;
    *n2 = *n1 ^ *n2 ;
    *n1 = *n1 ^ *n2 ;
}

int main()
{
    int a , b ;
    printf("Enter No a :");
    scanf("%d",&a);
    printf("Enter No b :");
    scanf("%d",&b);
    swap_no(&a,&b);
    printf("After Swap :\n");
    printf("No  a : %d \n",a);
    printf("No  a : %d \n",b);

    return 0;
}
