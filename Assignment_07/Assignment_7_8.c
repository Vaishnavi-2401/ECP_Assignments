//Modify above program to display names in sorted order.



#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int compare(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main(int argc, char *argv[]) {
 
    if (argc < 2) {
        printf("No names provided. Please provide a list of names as command-line arguments.\n");
        return 1;
    }

  
    char *names[argc - 1];
    for (int i = 1; i < argc; i++) {
        names[i - 1] = argv[i]; 
    }


    qsort(names, argc - 1, sizeof(char *), compare);


    printf("List of names in sorted order:\n");
    for (int i = 0; i < argc - 1; i++) {
        printf("%d. %s\n", i + 1, names[i]);
    }

    return 0;
}
