#include <stdio.h>

int main() {
    int rows, cols, i, j;
    long long product = 1;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    // Read the matrix elements
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            product *= matrix[i][j];
        }
    }

    // Display the matrix
    printf("\nThe matrix is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Print the product
    printf("\nProduct of all elements of the matrix = %lld\n", product);

    return 0;
}