#include <stdio.h>


void removeChar(char *str, char charToRemove) {
    char *src = str; 
    char *dst = str;  

    while (*src != '\0') {
        if (*src != charToRemove) {
            *dst = *src;  
            dst++;
        }
        src++;
    }
    *dst = '\0';  
}


int main() {
    char str[100] = "Hello, World!";
    char charToRemove = 'o';

    printf("Original string: '%s'\n", str);
    
    removeChar(str, charToRemove);

    printf("String after removing '%c': '%s'\n", charToRemove, str);

    return 0;
}
