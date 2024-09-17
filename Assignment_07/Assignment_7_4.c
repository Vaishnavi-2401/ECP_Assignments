//Write a function to accept five names of students from the user (use 2D array). Write another function to print these names. Finally write a function to sort student names.



#include <stdio.h>
#include <string.h>

#define NUM_STUDENTS 5
#define NAME_LENGTH 100


void accept_names(char names[NUM_STUDENTS][NAME_LENGTH]) {
    printf("Enter the names of %d students:\n", NUM_STUDENTS);
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Student %d: ", i + 1);
        fgets(names[i], NAME_LENGTH, stdin);

        names[i][strcspn(names[i], "\n")] = '\0';
    }
}


void print_names(const char names[NUM_STUDENTS][NAME_LENGTH]) {
    printf("\nStudent names:\n");
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("%d. %s\n", i + 1, names[i]);
    }
}


void sort_names(char names[NUM_STUDENTS][NAME_LENGTH]) {
    char temp[NAME_LENGTH];
    for (int i = 0; i < NUM_STUDENTS - 1; i++) {
        for (int j = i + 1; j < NUM_STUDENTS; j++) {
            if (strcmp(names[i], names[j]) > 0) {

                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
}


int main() {
    char names[NUM_STUDENTS][NAME_LENGTH];


    accept_names(names);


    printf("\nBefore sorting:\n");
    print_names(names);


    sort_names(names);


    printf("\nAfter sorting:\n");
    print_names(names);

    return 0;
}
