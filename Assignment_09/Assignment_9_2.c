//Write a function to read a file character by character and copy the contents to another file.Source file pointer and Destination file pointers should be arguments to the function. Use the function to copy the file to destination file, display contents of the file, accept data from user and write to destination file.



#include <stdio.h>


void copy_file(FILE *source, FILE *destination) {
    int ch;
   
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }
}

int main() {
    FILE *sourceFile;
    FILE *destinationFile;
    char sourceFilename[100];
    char destinationFilename[100];
    char buffer[256];

    
    printf("Enter the source filename: ");
    fgets(sourceFilename, sizeof(sourceFilename), stdin);
    sourceFilename[strcspn(sourceFilename, "\n")] = '\0'; 

    printf("Enter the destination filename: ");
    fgets(destinationFilename, sizeof(destinationFilename), stdin);
    destinationFilename[strcspn(destinationFilename, "\n")] = '\0';


    sourceFile = fopen(sourceFilename, "r");
    if (sourceFile == NULL) {
        perror("Error opening source file");
        return 1;
    }


    destinationFile = fopen(destinationFilename, "w");
    if (destinationFile == NULL) {
        perror("Error opening destination file");
        fclose(sourceFile);
        return 1;
    }


    copy_file(sourceFile, destinationFile);


    fclose(sourceFile);
    fclose(destinationFile);


    destinationFile = fopen(destinationFilename, "r");
    if (destinationFile == NULL) {
        perror("Error reopening destination file");
        return 1;
    }

    printf("\nContents of the destination file:\n");
    int ch;
    while ((ch = fgetc(destinationFile)) != EOF) {
        putchar(ch);
    }


    fclose(destinationFile);


    destinationFile = fopen(destinationFilename, "a");
    if (destinationFile == NULL) {
        perror("Error reopening destination file for appending");
        return 1;
    }

    printf("\nEnter text to append to the destination file (end with EOF):\n");
    while (fgets(buffer, sizeof(buffer), stdin) != NULL) {
        fputs(buffer, destinationFile);
    }


    fclose(destinationFile);

    return 0;
}
