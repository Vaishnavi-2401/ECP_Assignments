//Write a program to demonstrate use of string library functions.



#include <stdio.h>
#include <string.h>
#include <stdlib.h>  


char* strrev(char* str) 
{
    int len = strlen(str);
    char* start = str;
    char* end = str + len - 1;
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }

    return str;

}

int main() 
{

    char str1[100] = "Hello";
    char str2[100] = "World";
    char str3[100];
    char *result;

    printf("Length of '%s': %zu\n", str1, strlen(str1));

    strcpy(str3, str1);
    printf("After strcpy: str3 = '%s'\n", str3);

    strcat(str1, str2); 
    printf("After strcat: str1 = '%s'\n", str1);

    int cmp_result = strcmp(str1, str3);
    printf("After strcmp: '%s' vs '%s' = %d\n", str1, str3, cmp_result);


    #ifdef _WIN32
    int icmp_result = _stricmp(str1, str3);
    #else
    int icmp_result = strcasecmp(str1, str3);
    #endif
    printf("After stricmp: '%s' vs '%s' = %d\n", str1, str3, icmp_result);


    printf("Original str1: '%s'\n", str1);
    printf("Reversed str1: '%s'\n", strrev(str1));


    result = strchr(str1, 'o');
    printf("First occurrence of 'o' in '%s': %s\n", str1, result ? result : "not found");


    result = strstr(str1, "World");
    printf("First occurrence of 'World' in '%s': %s\n", str1, result ? result : "not found");


    strncpy(str3, str1, 5);
    str3[5] = '\0'; 
    printf("After strncpy: str3 = '%s'\n", str3);


    strncat(str1, str2, 3);
    printf("After strncat: str1 = '%s'\n", str1);


    cmp_result = strncmp(str1, str2, 3);
    printf("After strncmp: '%s' vs '%s' (first 3 chars) = %d\n", str1, str2, cmp_result);


    char str4[] = "Hello,World,Test";
    char* token = strtok(str4, ",");
    while (token != NULL) {
        printf("Token: %s\n", token);
        token = strtok(NULL, ",");
    }

    return 0;
}
