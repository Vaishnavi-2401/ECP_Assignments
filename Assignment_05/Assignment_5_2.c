//Write a function to accept array elements from the user. Write another function to print array elements.



#include<stdio.h>

void print(int arr[], int n);

int main()

{

  int arr[5];

  print(arr, 5);

  return 0;

}

void print(int arr[], int n)
{

  printf("Enter the number : ");

  for(int i = 0; i < n; i++)
  {

    scanf("%d", &arr[i]);

  }

  for(int i = 0; i < n; i++)
  {

    printf("%d ",arr[i]);

  }

  printf("\n");

}
