//Write a function to accept a 2-D array from the user. Write another function to print the 2-D array. Re-use these functions in rest of the assignments wherever required.



#include <stdio.h>


void accept_2D_array(int rows, int cols, int array[rows][cols]) {
    printf("Enter the elements of the %dx%d array:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
}


void print_2D_array(int rows, int cols, int array[rows][cols]) {
    printf("The %dx%d array is:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}


int main() {
    int rows, cols;


    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);


    int array[rows][cols];


    accept_2D_array(rows, cols, array);


    print_2D_array(rows, cols, array);

    return 0;
}
