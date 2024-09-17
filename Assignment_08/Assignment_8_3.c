//Write a function to accept array of student’s information from the user. Write another function to print the array student’s information. Re-use these functions in rest of the assignments wherever required.



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

int main() {
    int num_students;

    printf("Enter the number of students: ");
    scanf("%d", &num_students);


    struct Student students[num_students];


    input_students_info(students, num_students);


    print_students_info(students, num_students);

    return 0;
}

