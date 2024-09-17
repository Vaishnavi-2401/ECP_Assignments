//Write a function to find and replace a string without using library functions.



#include <stdio.h>


void find_and_replace(char *source, const char *find, const char *replace) 
{
    char buffer[1024];  
    char *pos;
    int find_len = 0, replace_len = 0;
    int i, j;

    while (find[find_len] != '\0') find_len++;
    while (replace[replace_len] != '\0') replace_len++;

    if (find_len == 0) return;

    buffer[0] = '\0';

    while (*source) 
	{

        pos = source;
        i = 0;

        while (i < find_len && pos[i] == find[i]) i++;

        if (i == find_len) 
		{
         
            j = 0;

            while (replace[j] != '\0') 
			{
                buffer[i++] = replace[j++];
            }
            source += find_len; 
        } 
		else 
		{
            buffer[i++] = *source++;
        }

    }

    buffer[i] = '\0';

    i = 0;

    while (buffer[i] != '\0') 
	{
        source[i] = buffer[i];
        i++;
    }

    source[i] = '\0';
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
