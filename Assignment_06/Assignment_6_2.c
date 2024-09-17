//Write a program to simulate the following library function.



#include <stdio.h>
#include<string.h>

size_t strlen(const char* str) 
{

    const char* s = str;

    while (*s) 
	{

        s++;

    }

    return s - str;

}

char* strcpy(char *dest, const char *src) 
{

    char *d = dest;

    while ((*d++ = *src++)) 
	{
		
    }

    return dest;

}

char* strcat(char *dest, const char *src) 
{

    char *d = dest;

    while (*d) 
	{

        d++;

    }
    while ((*d++ = *src++)) 
	{

    }

    return dest;

}

int strcmp(const char *str1, const char *str2) 
{

    while (*str1 && (*str1 == *str2)) 
	{

        str1++;
        str2++;

    }

    return *(unsigned char *)str1 - *(unsigned char *)str2;

}

int stricmp(const char *str1, const char *str2) 
{

    while (*str1 && (*str1 == *str2 || (*str1 - 'a' + 'A') == *str2 || (*str2 - 'a' + 'A') == *str1)) 
	{

        str1++;
        str2++;

    }

    return *(unsigned char *)str1 - *(unsigned char *)str2;

}

char* strrev(char* str) 
{

    char* start = str;
    char* end = str + strlen(str) - 1;

    while (start < end) 
	{

        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;

    }

    return str;

}

char* strchr(const char *str, int ch) 
{

    while (*str) 
	{

        if (*str == (char)ch) 
		{

            return (char*)str;

        }

        str++;

    }

    return NULL;

}

char* strstr(const char *str, const char *substr) 
{

    size_t substr_len = strlen(substr);

    while (*str) 
	{
        if (strncmp(str, substr, substr_len) == 0) 
		{

            return (char*)str;

        }

        str++;

    }

    return NULL;

}

int strncmp(const char *str1, const char *str2, size_t n) 
{

    while (n && *str1 && (*str1 == *str2)) 
	{

        str1++;
        str2++;
        n--;

    }

    return n ? *(unsigned char *)str1 - *(unsigned char *)str2 : 0;

}

int main() 

{

    char str1[100] = "Hello";
    char str2[100] = "World";
    char str3[100];

    char *res;

    printf("Length of '%s': %zu\n", str1, strlen(str1));

    strcpy(str3, str1);
    printf("After strcpy: str3 = '%s'\n", str3);

    strcat(str1, str2);
    printf("After strcat: str1 = '%s'\n", str1);

    int cmp_result = strcmp(str1, str3);
    printf("After strcmp: '%s' vs '%s' = %d\n", str1, str3, cmp_result);

    int icmp_result = stricmp(str1, str3);
    printf("After stricmp: '%s' vs '%s' = %d\n", str1, str3, icmp_result);

    printf("Original str1: '%s'\n", str1);
    printf("Reversed str1: '%s'\n", strrev(str1));

    res = strchr(str1, 'o');
    printf("First occurrence of 'o' in '%s': %s\n", str1, res ? res : "not found");

    res = strstr(str1, "Wor");
    printf("First occurrence of 'Wor' in '%s': %s\n", str1, res ? res : "not found");

    return 0;

}
