//Write a function to reverse the array elements.



#include<stdio.h>

void rev_array(int arr[], int start, int end)
{

  int temp;

  while(start < end)
  {

    temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    start++;
	end--;

  }

}

void print_array(int arr[], int size)
{

  int i;

  for (i = 0; i < size; i++)
  {

    printf("%d ", arr[i]);

  }

  printf("\n");

}

int main()

{

  int arr[] = {1, 2, 3, 4, 5, 6};

  int n = sizeof(arr) / sizeof(arr[0]);

  print_array(arr, n);

  rev_array(arr, 0, n - 1);

  printf("Reversed array : ");

  print_array(arr, n);

  return 0;

}
