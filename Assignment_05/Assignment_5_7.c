//Write a function to sort the array using selection or bubble sort.



#include<stdio.h>

void print_array(int* A, int n)
{

    for(int i = 0; i < n; i++)
    {

        printf("%d ", A[i]);

    }

    printf("\n");

}

void bubble_sort(int *A,int n)
{

    int i,j;
    int temp;

    for(i = 0; i < n - 1; i++)
    {

      for(j = 0; j < n - 1 - i; j++)
	  {

          if(A[j] > A[j + 1])
		  {

            temp = A[j];
            A[j] = A[j + 1];
            A[j + 1] = temp;
            
          }
      }
    }
}

int main()

{

    int A[] = {3, 5, 2, 13, 12};

    int n = 5;

    print_array(A, n);

    bubble_sort(A, n);

    print_array(A, n);

    return 0;

}

