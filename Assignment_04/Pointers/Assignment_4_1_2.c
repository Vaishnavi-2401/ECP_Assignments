//Write a function to calculate sum and product into a single function without using global variables



#include<stdio.h>

void add_pro(int n1,int n2 ,int *sum,int *pro)
{

    *sum = n1 + n2;
    *pro = n1 * n2;

}

int main()

{

    int n1, n2, sum = 0 , pro = 0;

    printf("Enter the two numbers : ");
    scanf("%d%d",&n1, &n2);

    add_pro(n1, n2, &sum, &pro);

    printf("Addition : %d \n", sum);

    printf("Product : %d \n", pro);
    
    return 0;

}
