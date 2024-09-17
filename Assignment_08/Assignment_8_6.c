//Write a structure to store school student information. The student result is one of the members of this information. Note that till 4th standard school follows grade scheme (A / B / C) and after 4th standard it follows percentage pattern. Accept the information of 3 students from the user and display it again.



#include <stdio.h>


struct Student {
    int roll_number;
    char name[100];
    int grade_level;  
    union {
        char grade[2];  
        float percentage;  
    } result;
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

        printf("Enter Grade Level: ");
        scanf("%d", &students[i].grade_level);


        while (getchar() != '\n');

        if (students[i].grade_level <= 4) {
            printf("Enter Grade (A/B/C): ");
            fgets(students[i].result.grade, sizeof(students[i].result.grade), stdin);

            students[i].result.grade[strcspn(students[i].result.grade, "\n")] = '\0';
        } else {
            printf("Enter Percentage: ");
            scanf("%f", &students[i].result.percentage);

            while (getchar() != '\n');
        }
    }
}


void print_students_info(const struct Student students[], int count) {
    for (int i = 0; i < count; i++) {
        printf("\nStudent %d Information:\n", i + 1);
        printf("Roll Number: %d\n", students[i].roll_number);
        printf("Name: %s\n", students[i].name);
        printf("Grade Level: %d\n", students[i].grade_level);

        if (students[i].grade_level <= 4) {
            printf("Grade: %s\n", students[i].result.grade);
        } else {
            printf("Percentage: %.2f%%\n", students[i].result.percentage);
        }
    }
}

int main() {
    int num_students = 3;  


    struct Student students[num_students];


    input_students_info(students, num_students);


    print_students_info(students, num_students);

    return 0;
}

