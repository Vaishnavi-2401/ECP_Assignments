//Write a function to print a given number in hexadecimal format.



#include<stdio.h>

int main()

{

    int dec_num, rem, quo;
    int i = 1, j, temp;
    char hexadec_num[100];

    printf("Enter decimal number : ");
    scanf("%ld", &dec_num);

    quo = dec_num;

    while(quo != 0)
	{

        temp = quo % 16;

        if(temp < 10)
			temp = temp + 48;
        else
            temp = temp + 55;
        	hexadec_num[i++] = temp;
        	quo = quo / 16;

    }

    printf("Hexadecimal value of entered decimal number %d : ", dec_num);

    for (j = i - 1; j > 0; j--)
	{

        printf("%c", hexadec_num[j]);

	}

    return 0;

}
