//Write a program to accept a number and Check whether it is Armstrong no.



#include <stdio.h>

int main()

{

     int num, rev = 0, rem = 0, original, res = 0;

     printf("Enter the num : ");
     scanf("%d", &num);

     original = num;

     while (original != 0)

     {

         rem = original % 10;
         res += rem * rem * rem;
         original = original / 10;

     }

     if (res == num)

	 {

         printf("%d is an Armstrong number", num);

	 }

     else

	 {

         printf("%d is not an Armstrong number", num);

	 }

     return 0;

}
