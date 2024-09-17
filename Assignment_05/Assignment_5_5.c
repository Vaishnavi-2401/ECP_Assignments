//Write a function to calculate maximum and minimum of the array elements.



#include<stdio.h>

int sum_of_array(int a[], int n)

{
 	int min, max, i;

 	min = max = a[0];

    for(i = 1; i < n; i++)
    {

         if(min > a[i])
			min = a[i];

		   if(max < a[i])
			  max = a[i];

}
    
    printf("Minimum of array : %d \n", min);

    printf("Maximum of array : %d\n", max);

}

int main()

{

    int a[1000], i, n, sum;
   
    printf("Enter size of the array : ");
    scanf("%d", &n);
 
    printf("Enter elements in array : ");
    for(i = 0; i < n; i++)
    {

        scanf("%d", &a[i]);

    }

    sum_of_array(a, n);
 
}
