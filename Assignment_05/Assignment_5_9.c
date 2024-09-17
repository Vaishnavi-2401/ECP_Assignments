//Write a function to search the given number into the array using binary search and return the index of the element. If element is not found it should return -1.



#include<stdio.h>

int binary_Search(int arr[], int l, int r, int x)

{

	if (r >= l)
	{

		int mid = l + (r - l) / 2;

		if(arr[mid] == x)
			return mid;

		if (arr[mid] > x)
			return binary_Search(arr, l, mid - 1, x);

		return binary_Search(arr, mid + 1, r, x);

	}

	return -1;

}

int main(void)

{

	int arr[] = {2, 3, 4, 10, 40};

	int n = sizeof(arr) / sizeof(arr[0]);

	int x = 10;

	int res = binary_Search(arr, 0, n - 1, x);

	(res == -1) ? printf("Element is not present in array %d\n", res) : printf("Element is present at index %d\n", res);

	return 0;

}
