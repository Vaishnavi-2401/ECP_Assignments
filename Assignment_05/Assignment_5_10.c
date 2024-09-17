//Write a function to search the given number into the array using linear search and return the address of the element. If element is not found it should return NULL.



#include<stdio.h>

int *linear_Search(int arr[], int size, int key)

{

    for(int i = 0; i < size; ++i)
    {

        if(arr[i] == key)
        {

            return &arr[i];

        }

    }

    return NULL;

}

int main()

{
    
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int size = sizeof(arr) / sizeof(arr[0]);

    int key = 6;

    int *res = linear_Search(arr, size, key);

    if (res != NULL)
    {

        printf("Element %d found at address: %p\n", key, (void *)res);

    }
    else
    {

        printf("Element %d not found in the array\n", key);

    }

    return 0;

}
