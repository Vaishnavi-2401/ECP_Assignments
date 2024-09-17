//Write a function to sort array of student’s information by roll number. Write another function to sort student’s information by name.



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


void sort_by_roll_number(struct Student students[], int count) {
    struct Student temp;
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (students[j].roll_number > students[j + 1].roll_number) {

                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}


void sort_by_name(struct Student students[], int count) {
    struct Student temp;
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (strcmp(students[j].name, students[j + 1].name) > 0) {

                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

int main() {
    int num_students;

    printf("Enter the number of students: ");
    scanf("%d", &num_students);


    struct Student students[num_students];


    input_students_info(students, num_students);


    printf("\nStudent information before sorting:\n");
    print_students_info(students, num_students);


    sort_by_roll_number(students, num_students);
    printf("\nStudent information sorted by roll number:\n");
    print_students_info(students, num_students);


    sort_by_name(students, num_students);
    printf("\nStudent information sorted by name:\n");
    print_students_info(students, num_students);

    return 0;
}

