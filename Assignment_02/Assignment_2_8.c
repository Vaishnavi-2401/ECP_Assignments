/*
Write a program that will calculate the price for a quantity entered from the keyboard, given
that the unit price is Rs 5 and there is a discount of 10 percent for quantities over 30 and a 15
percent discount for quantities over 50.
*/



#include<stdio.h>

int main()

{

	int qty;
	float unit_price = 5.0, dis, total_price;

	printf("Enter the quantity : ");
	scanf("%d", &qty);

	if(qty > 50)
	{
		dis = 0.15;
	}

	else if(qty > 30)
	{
		dis = 0.10;
	}

	total_price = qty * unit_price;
	total_price = total_price - (total_price * dis);

	printf("Total Price : Rs. %.2f \n", total_price);

	return 0;
}
