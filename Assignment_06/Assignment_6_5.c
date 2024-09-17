//Write a function to converts a string of digits into its numeric equivalent i.e. simulate atoi().int atoi(const char* string);



#include <stdio.h>

int atoi_custom(const char *str);

int main()
{
	const char *str1 = "12345";
	const char *str2 = "Sunbeam";

	int num1 = atoi_custom(str1);
	int num2 = atoi_custom(str2);

	printf("String: %s, Numeric Equivalent: %d\n", str1, num1);
	printf("String: %s, Numeric Equivalent: %d\n", str2, num2);

	return 0;
}

int atoi_custom(const char *str)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	while (str[i] == ' ' || str[i] == '\t')
	{
		i++;
	}

	if (str[i] == '-' || str[i] == '+')
	{
		sign = (str[i++] == '-') ? -1 : 1;
	}

	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}

	return sign * result;
}
