//Write a program to accept a number and Reverse the number


#include<stdio.h>

int main()

{

   int num, rev=0, rem;

   printf("Enter an integer : ");
   scanf("%d", &num);

   while (num != 0)

   {

     rem = num % 10;
     rev = rev * 10 + rem;
     num /= 10;

   }

   printf("Reversed number = %d", rev);

   return 0;

}
