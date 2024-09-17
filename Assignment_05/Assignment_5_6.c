//Write a function to remove duplicate elements from the array. After processing the array should store only the unique elements consecutively. Also function should return the number of unique elements into the array.



#include <stdio.h>

int remove_duplicates(int arr[], int size) 

{
    int unique_Size = 0; 

    for(int i = 0; i < size; i++) 
	{

        int is_duplicate = 0; 

        for(int j = 0; j < unique_Size; j++) 
		{

            if(arr[i] == arr[j]) 
			{

                is_duplicate = 1;

                break; 

            }

        }

        if(!is_duplicate) 
		{

            arr[unique_Size] = arr[i]; 

            unique_Size++; 

        }
    }

    return unique_Size; 
}

void accept_array(int arr[], int size) 
{

    printf("Enter %d numbers : \n", size);

    for(int i = 0; i < size; i++) 
	{

        printf("Number %d : ", i + 1);
        scanf("%d", &arr[i]); 

    }
}

void print_array(int arr[], int size) 
{

    printf("Array elements : ");

    for(int i = 0; i < size; i++) 
	{

        printf("%d ", arr[i]); 

    }

    printf("\n"); 

}

int main() 

{

    int size = 7;       
    int arr[size];    

    accept_array(arr, size);

    printf("Original array : ");
    print_array(arr, size);

    int new_Size = remove_duplicates(arr, size);

    printf("Array after removing duplicates : ");
    print_array(arr, new_Size);

    printf("Number of unique elements : %d\n", new_Size);

    return 0;

}
