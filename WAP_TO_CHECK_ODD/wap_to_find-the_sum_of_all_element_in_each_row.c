#include <stdio.h>

int main() {
    int rows, cols, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    // Read the matrix elements
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate and print sum of each row
    for(i = 0; i < rows; i++) {
        int row_sum = 0;
        for(j = 0; j < cols; j++) {
            row_sum += matrix[i][j];
        }
        printf("Sum of elements in row %d = %d\n", i + 1, row_sum);
    }

    return 0;
}