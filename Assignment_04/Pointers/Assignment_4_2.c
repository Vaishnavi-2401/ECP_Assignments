//Write a function to swap two numbers.



#include<stdio.h>

void swap(int *, int *);

int main()

{

    int n1, n2;

    printf("Enter the two numbers : ");
    scanf("%d%d", &n1, &n2);	

    printf("Before swapping : n1 = %d, n2 = %d \n", n1, n2);
    swap(&n1, &n2);

    printf("After swapping : n1 = %d, n2 = %d \n", n1, n2);

    return 0;

}

void swap(int *p, int *q)
{

    int tmp;

    tmp = *p;
    *p=*q;    
    *q=tmp;   

}
