//Write a function to search the given number into the array using linear search and return the index of the element. If element is not found it should return -1.



#include<stdio.h>

int search(int arr[], int n, int x)

{

	int i;

	for(i = 0; i < n; i++)

		if(arr[i] == x)

			return i;

	return -1;

}

int main(void)

{

	int arr[] = { 2, 3, 4, 10, 40 };

	int x = 10;
	
	int n = sizeof(arr) / sizeof(arr[0]);

  	int res = search(arr, n, x);

	(res == -1) ? printf("Element is not present in array %d\n",res) : printf("Element is present at index %d\n", res);

	return 0;

}
