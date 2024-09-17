//Write a function to accept five names of students from the user (use array of character pointers). Write another function to print these names. Write a function to sort student names. Finally write a function to free memory allocated for student names.



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_STUDENTS 5
#define NAME_LENGTH 100


void accept_names(char *names[NUM_STUDENTS]) {
    printf("Enter the names of %d students:\n", NUM_STUDENTS);
    for (int i = 0; i < NUM_STUDENTS; i++) {
       names[i] = (char *)malloc(NAME_LENGTH * sizeof(char));  
        if (names[i] == NULL) {
            printf("Memory allocation failed.\n");
            exit(1);
        }
        printf("Student %d: ", i + 1);
        fgets(names[i], NAME_LENGTH, stdin);

        names[i][strcspn(names[i], "\n")] = '\0';
    }
}


void print_names(char *names[NUM_STUDENTS]) {
    printf("\nStudent names:\n");
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("%d. %s\n", i + 1, names[i]);
    }
}


void sort_names(char *names[NUM_STUDENTS]) {
    char *temp;
    for (int i = 0; i < NUM_STUDENTS - 1; i++) {
        for (int j = i + 1; j < NUM_STUDENTS; j++) {
            if (strcmp(names[i], names[j]) > 0) {

                temp = names[i];
                names[i] = names[j];
                names[j] = temp;
            }
        }
    }
}


void free_names(char *names[NUM_STUDENTS]) {
    for (int i = 0; i < NUM_STUDENTS; i++) {
        free(names[i]);  
    }
}


int main() {
    char *names[NUM_STUDENTS];


    accept_names(names);


    printf("\nBefore sorting:\n");
    print_names(names);


    sort_names(names);


    printf("\nAfter sorting:\n");
    print_names(names);


    free_names(names);

    return 0;
}
