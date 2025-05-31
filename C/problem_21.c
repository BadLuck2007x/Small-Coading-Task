#include <stdio.h>
#include <stdlib.h>

int** allocateMatrix(int row, int col) {
    int** matrix = (int**)calloc(row, sizeof(int*));
    for (int i = 0; i < row; i++) {
        matrix[i] = (int*)calloc(col, sizeof(int));
    }
    return matrix;
}

void freeMatrix(int** matrix, int row) {
    for (int i = 0; i < row; i++) {
        free(matrix[i]);
    }
    free(matrix);
}

void printMatrix(int** matrix, int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int** addMatrix(int** matrix1, int** matrix2, int row, int col) {
    int** result = allocateMatrix(row, col);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    return result;
}

int** subtractMatrix(int** matrix1, int** matrix2, int row, int col) {
    int** result = allocateMatrix(row, col);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
    return result;
}

int** multiplyMatrix(int** matrix1, int** matrix2, int row1, int col1, int row2, int col2) {
    if (col1 != row2) {
        printf("Matrix multiplication not possible.\n");
        return NULL;
    }
    int** result = allocateMatrix(row1, col2);
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < col1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    return result;
}

int** transposeMatrix(int** matrix, int row, int col) {
    int** result = allocateMatrix(col, row);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[j][i] = matrix[i][j];
        }
    }
    return result;
}

int** inputMatrix(int n, int* row, int* col) {
    printf("\nEnter the details for Matrix %d:\n", n);
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &col);

    int** matrix = allocateMatrix(*row, *col);
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < *row; i++) {
        for (int j = 0; j < *col; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    return matrix;
}

int main() {
    int row1, col1, row2, col2, choice;
    int** matrix1 = inputMatrix(1, &row1, &col1);

    printf("\nMatrix 1:\n");
    printMatrix(matrix1, row1, col1);

    printf("\n1. Add Matrices\n2. Subtract Matrices\n3. Multiply Matrices\n4. Transpose Matrix\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: {
            int** matrix2 = inputMatrix(2, &row2, &col2);
            if (row1 == row2 && col1 == col2) {
                int** result = addMatrix(matrix1, matrix2, row1, col1);
                printf("\nAddition of Matrices:\n");
                printMatrix(result, row1, col1);
                freeMatrix(result, row1);
            } else {
                printf("Matrix addition not possible. Dimensions do not match.\n");
            }
            freeMatrix(matrix2, row2);
            break;
        }
        case 2: {
            int** matrix2 = inputMatrix(2, &row2, &col2);
            if (row1 == row2 && col1 == col2) {
                int** result = subtractMatrix(matrix1, matrix2, row1, col1);
                printf("\nSubtraction of Matrices:\n");
                printMatrix(result, row1, col1);
                freeMatrix(result, row1);
            } else {
                printf("Matrix subtraction not possible. Dimensions do not match.\n");
            }
            freeMatrix(matrix2, row2);
            break;
        }
        case 3: {
            int** matrix2 = inputMatrix(2, &row2, &col2);
            int** result = multiplyMatrix(matrix1, matrix2, row1, col1, row2, col2);
            if (result != NULL) {
                printf("\nMultiplication of Matrices:\n");
                printMatrix(result, row1, col2);
                freeMatrix(result, row1);
            }
            freeMatrix(matrix2, row2);
            break;
        }
        case 4: {
            int** result = transposeMatrix(matrix1, row1, col1);
            printf("\nTranspose of Matrix:\n");
            printMatrix(result, col1, row1);
            freeMatrix(result, col1);
            break;
        }
        default:
            printf("\nInvalid choice.\n");
            break;
    }

    freeMatrix(matrix1, row1);
    return 0;
}