//Write a function to calculate maximum of the array elements. Write another function to calculate maximum of the array elements.



#include<stdio.h>

int largest(int arr[], int n)

{

	int max = arr[0];

	for(int i = 1; i < n; i++)

		if(arr[i] > max)

			max = arr[i];
  
	return max;

}

int main()

{
	int arr[] = {10, 324, 45, 90, 98};

	int n = sizeof(arr) / sizeof(arr[0]);

	printf("Largest number in given array : %d \n", largest(arr, n));

	return 0;

}
