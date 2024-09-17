//Write a function to accept student information from the user. Write another function to print student’s information. Re-use these functions in rest of the assignments wherever required.



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
    union Data data;


    printf("Input student information:\n");
    input_student_info(&data.student_info);


    printf("\nPrinting student information:\n");
    print_student_info(&data.student_info);

    return 0;
}

