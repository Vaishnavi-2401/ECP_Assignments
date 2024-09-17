//Write a program to accept integer values of base and index and calculate power of base to index.



#include <stdio.h>

int main()

{

    int base, index, i, res = 1;

    printf("Enter Base and Index : ");
    scanf("%d%d", &base, &index);

    for (i = 1; i <= index; i++)

    {

        res = res * base;

    }

    printf("Power of %d ^ %d is %d", base, index, res);

    return 0;

}
