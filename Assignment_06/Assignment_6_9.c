//Write a function to find and replace a string using library functions [strstr(), strncpy(), strlen(),strcat(), strcpy(), etc.].



#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void find_and_replace(char *source, const char *find, const char *replace) 
{
    char *pos;
    char temp[1024]; 
    int find_len = strlen(find);
    int replace_len = strlen(replace);

    if (find_len == 0) 
	{
        return;
    }

    temp[0] = '\0';

    while ((pos = strstr(source, find)) != NULL) 
	{

        strncpy(temp, source, pos - source);
        temp[pos - source] = '\0';

        strcat(temp, replace);

        strcat(temp, pos + find_len);

        strcpy(source, temp);
    }
}


int main() 

{

    char source[1024] = "This is test time";
    const char *find = "is";
    const char *replace = "was";

    printf("Original string: %s\n", source);

    find_and_replace(source, find, replace);

    printf("Modified string: %s\n", source);

    return 0;
}
