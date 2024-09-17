//Write a menu driven program to make a student database. Make program readable by using enumerations.



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 100

typedef enum {
    ADD_RECORD = 1,
    READ_RECORD,
    SEARCH_BY_ROLL,
    SEARCH_BY_NAME,
    MODIFY_RECORD,
    REMOVE_RECORD,
    EXIT
} MenuOption;

typedef struct {
    int roll_no;
    char name[MAX_NAME_LENGTH];
} Student;

void add_student_record(FILE *file);
void read_student_record(FILE *file);
void search_student_by_roll(FILE *file, int roll_no);
void search_student_by_name(FILE *file, const char *name);
void modify_student_record(FILE *file, int roll_no);
void remove_student_record(FILE *file, int roll_no);
void display_menu();

int main() {
    FILE *file;
    MenuOption option;
    int roll_no;
    char name[MAX_NAME_LENGTH];

    while (1) {
        display_menu();
        printf("Enter your choice: ");
        scanf("%d", &option);
        getchar(); // Clear the newline character left in the input buffer

        file = fopen("student_db.dat", "rb+");
        if (file == NULL) {
            perror("Error opening file");
            return EXIT_FAILURE;
        }

        switch (option) {
            case ADD_RECORD:
                add_student_record(file);
                break;
            case READ_RECORD:
                read_student_record(file);
                break;
            case SEARCH_BY_ROLL:
                printf("Enter roll number to search: ");
                scanf("%d", &roll_no);
                search_student_by_roll(file, roll_no);
                break;
            case SEARCH_BY_NAME:
                printf("Enter name to search: ");
                fgets(name, sizeof(name), stdin);
                name[strcspn(name, "\n")] = '\0'; // Remove newline character from the input
                search_student_by_name(file, name);
                break;
            case MODIFY_RECORD:
                printf("Enter roll number of the student to modify: ");
                scanf("%d", &roll_no);
                modify_student_record(file, roll_no);
                break;
            case REMOVE_RECORD:
                printf("Enter roll number of the student to remove: ");
                scanf("%d", &roll_no);
                remove_student_record(file, roll_no);
                break;
            case EXIT:
                fclose(file);
                exit(EXIT_SUCCESS);
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }

        fclose(file);
    }

    return EXIT_SUCCESS;
}

void display_menu() {
    printf("\nStudent Database Menu:\n");
    printf("1. Add Student Record\n");
    printf("2. Read All Student Records\n");
    printf("3. Search Student by Roll Number\n");
    printf("4. Search Student by Name\n");
    printf("5. Modify Student Record\n");
    printf("6. Remove Student Record\n");
    printf("7. Exit\n");
}

void add_student_record(FILE *file) {
    Student student;
    printf("Enter roll number: ");
    scanf("%d", &student.roll_no);
    getchar(); 
    printf("Enter name: ");
    fgets(student.name, sizeof(student.name), stdin);
    student.name[strcspn(student.name, "\n")] = '\0'; 

    fseek(file, 0, SEEK_END);
    fwrite(&student, sizeof(Student), 1, file);
    printf("Student record added successfully.\n");
}

void read_student_record(FILE *file) {
    Student student;
    rewind(file);
    printf("Student Records:\n");
    while (fread(&student, sizeof(Student), 1, file)) {
        printf("Roll Number: %d, Name: %s\n", student.roll_no, student.name);
    }
}

void search_student_by_roll(FILE *file, int roll_no) {
    Student student;
    rewind(file);
    while (fread(&student, sizeof(Student), 1, file)) {
        if (student.roll_no == roll_no) {
            printf("Record found: Roll Number: %d, Name: %s\n", student.roll_no, student.name);
            return;
        }
    }
    printf("Record with roll number %d not found.\n", roll_no);
}

void search_student_by_name(FILE *file, const char *name) {
    Student student;
    rewind(file);
    while (fread(&student, sizeof(Student), 1, file)) {
        if (strcmp(student.name, name) == 0) {
            printf("Record found: Roll Number: %d, Name: %s\n", student.roll_no, student.name);
            return;
        }
    }
    printf("Record with name '%s' not found.\n", name);
}

void modify_student_record(FILE *file, int roll_no) {
    Student student;
    long pos;
    rewind(file);
    while ((pos = ftell(file)) < ftell(file)) {
        if (fread(&student, sizeof(Student), 1, file) && student.roll_no == roll_no) {
            printf("Record found. Enter new name: ");
            getchar(); 
            fgets(student.name, sizeof(student.name), stdin);
            student.name[strcspn(student.name, "\n")] = '\0'; 

            fseek(file, pos, SEEK_SET);
            fwrite(&student, sizeof(Student), 1, file);
            printf("Record updated successfully.\n");
            return;
        }
    }
    printf("Record with roll number %d not found.\n", roll_no);
}

void remove_student_record(FILE *file, int roll_no) {
    FILE *temp_file;
    Student student;
    int found = 0;

    temp_file = fopen("temp.dat", "wb");
    if (temp_file == NULL) {
        perror("Error opening temporary file");
        exit(EXIT_FAILURE);
    }

    rewind(file);
    while (fread(&student, sizeof(Student), 1, file)) {
        if (student.roll_no != roll_no) {
            fwrite(&student, sizeof(Student), 1, temp_file);
        } else {
            found = 1;
        }
    }

    fclose(file);
    fclose(temp_file);

    remove("student_db.dat");
    rename("temp.dat", "student_db.dat");

    if (found) {
        printf("Record with roll number %d removed successfully.\n", roll_no);
    } else {
        printf("Record with roll number %d not found.\n", roll_no);
    }
}
