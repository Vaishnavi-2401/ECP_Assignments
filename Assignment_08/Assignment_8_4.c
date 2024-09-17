//Write a function to search student’s information by roll number. Write another function to search student’s information by name. (linear search)



#include <stdio.h>
#include <string.h>


struct Student {
    int roll_number;
    char name[100];
    float marks;
};


union Data {
    struct Student student_info;

};


void input_students_info(struct Student students[], int count) {
    for (int i = 0; i < count; i++) {
        printf("Enter information for student %d:\n", i + 1);
        printf("Enter Roll Number: ");
        scanf("%d", &students[i].roll_number);
        

        while (getchar() != '\n');

        printf("Enter Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);

        students[i].name[strcspn(students[i].name, "\n")] = '\0';

        printf("Enter Marks: ");
        scanf("%f", &students[i].marks);


        while (getchar() != '\n');
    }
}


void print_students_info(const struct Student students[], int count) {
    for (int i = 0; i < count; i++) {
        printf("\nStudent %d Information:\n", i + 1);
        printf("Roll Number: %d\n", students[i].roll_number);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
    }
}


void search_by_roll_number(const struct Student students[], int count, int roll_number) {
    for (int i = 0; i < count; i++) {
        if (students[i].roll_number == roll_number) {
            printf("\nStudent Found:\n");
            printf("Roll Number: %d\n", students[i].roll_number);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);
            return;
        }
    }
    printf("\nStudent with Roll Number %d not found.\n", roll_number);
}


void search_by_name(const struct Student students[], int count, const char *name) {
    for (int i = 0; i < count; i++) {
        if (strcmp(students[i].name, name) == 0) {
            printf("\nStudent Found:\n");
            printf("Roll Number: %d\n", students[i].roll_number);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);
            return;
        }
    }
    printf("\nStudent with Name %s not found.\n", name);
}

int main() {
    int num_students;
    int roll_number;
    char name[100];

    printf("Enter the number of students: ");
    scanf("%d", &num_students);


    struct Student students[num_students];


    input_students_info(students, num_students);


    print_students_info(students, num_students);


    printf("\nEnter Roll Number to search: ");
    scanf("%d", &roll_number);
    search_by_roll_number(students, num_students, roll_number);


    while (getchar() != '\n');


    printf("\nEnter Name to search: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';
    search_by_name(students, num_students, name);

    return 0;
}

