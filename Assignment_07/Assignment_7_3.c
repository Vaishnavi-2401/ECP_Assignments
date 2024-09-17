//Write a function to calculate the sum of elements in the given row. Write another function to calculate the sum of elements in the given column.



#define SIZE 3  


int sum_row(int matrix[SIZE][SIZE], int row) {
    int sum = 0;
    if (row >= 0 && row < SIZE) {
        for (int j = 0; j < SIZE; j++) {
            sum += matrix[row][j];
        }
    } else {
        printf("Invalid row index.\n");
    }
    return sum;
}


int sum_column(int matrix[SIZE][SIZE], int col) {
    int sum = 0;
    if (col >= 0 && col < SIZE) {
        for (int i = 0; i < SIZE; i++) {
            sum += matrix[i][col];
        }
    } else {
        printf("Invalid column index.\n");
    }
    return sum;
}


void print_matrix(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}


int main() {
    int matrix[SIZE][SIZE] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };


    printf("Matrix:\n");
    print_matrix(matrix);


    int row = 1; 
    int row_sum = sum_row(matrix, row);
    printf("Sum of elements in row %d: %d\n", row, row_sum);


    int col = 2;  
    int col_sum = sum_column(matrix, col);
    printf("Sum of elements in column %d: %d\n", col, col_sum);

    return 0;
}
