//Write a function to calculate sum and product into a single function Using global variables



#include<stdio.h>

int res, res1;
void add_pro(int n1, int n2)
{

    res = n1 + n2;
	res1 = n1 * n2;

}

int main()

{

    int n1, n2;

    printf("Enter the two numbers : ");
    scanf("%d%d", &n1, &n2);
    
    add_pro(n1, n2);
    printf("Sum : %d \n", res);

    add_pro(n1, n2);
    printf("Product : %d \n", res1);

    return 0;

}
