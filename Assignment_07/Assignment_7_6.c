//Write functions to allocate memory for 2 dimensional matrix. Write another function to free the memory allocated for 2 dimensional matrix.



#include <stdio.h>
#include <stdlib.h>


int** allocate_matrix(int rows, int cols) {

    int** matrix = (int**)malloc(rows * sizeof(int*));
    if (matrix == NULL) {
        printf("Memory allocation failed for rows.\n");
        exit(1);
    }


    for (int i = 0; i < rows; i++) {
        matrix[i] = (int*)malloc(cols * sizeof(int));
        if (matrix[i] == NULL) {
            printf("Memory allocation failed for columns in row %d.\n", i);
            exit(1);
        }
    }

    return matrix;
}


void free_matrix(int** matrix, int rows) {

    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    

    free(matrix);
}


void print_matrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}


int main() {
    int rows = 3;
    int cols = 4;


    int** matrix = allocate_matrix(rows, cols);


    int value = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = value++;
        }
    }


    printf("Matrix:\n");
    print_matrix(matrix, rows, cols);


    free_matrix(matrix, rows);

    return 0;
}
