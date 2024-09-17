//Declare a structure to store data for student information. The structure contains roll number,name, marks for students. Write a program to accept information of student from user and print the same



#include <stdio.h>


struct Student {
    int roll_number;
    char name[100];
    float marks;
};


void input_student_info(struct Student *s) {
    printf("Enter Roll Number: ");
    scanf("%d", &s->roll_number);
    

    while (getchar() != '\n');

    printf("Enter Name: ");
    fgets(s->name, sizeof(s->name), stdin);

    s->name[strcspn(s->name, "\n")] = '\0';

    printf("Enter Marks: ");
    scanf("%f", &s->marks);
}


void print_student_info(const struct Student *s) {
    printf("\nStudent Information:\n");
    printf("Roll Number: %d\n", s->roll_number);
    printf("Name: %s\n", s->name);
    printf("Marks: %.2f\n", s->marks);
}

int main() {
    struct Student student;


    input_student_info(&student);


    print_student_info(&student);

    return 0;
}

