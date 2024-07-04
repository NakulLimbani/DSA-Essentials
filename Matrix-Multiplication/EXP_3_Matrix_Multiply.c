#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows1, cols1, rows2, cols2;

    // Input matrix dimensions
    printf("Enter dimensions of matrix A (rows columns): ");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter dimensions of matrix B (rows columns): ");
    scanf("%d %d", &rows2, &cols2);

    if (cols1 != rows2) {
        printf("Matrix multiplication not possible.\n");
        return 1;
    }

    // Allocate memory for matrices A, B, and result matrix C
    int **A = (int **)malloc(rows1 * sizeof(int *));
    for (int i = 0; i < rows1; i++) {
        A[i] = (int *)malloc(cols1 * sizeof(int));
    }

    int **B = (int **)malloc(rows2 * sizeof(int *));
    for (int i = 0; i < rows2; i++) {
        B[i] = (int *)malloc(cols2 * sizeof(int));
    }

    int **C = (int **)malloc(rows1 * sizeof(int *));
    for (int i = 0; i < rows1; i++) {
        C[i] = (int *)malloc(cols2 * sizeof(int));
    }

    // Input matrix elements
    printf("Enter elements of matrix A:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of matrix B:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            C[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print the result matrix
    printf("Result matrix C:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    // Free allocated memory
    for (int i = 0; i < rows1; i++) {
        free(A[i]);
    }
    free(A);

    for (int i = 0; i < rows2; i++) {
        free(B[i]);
    }
    free(B);

    for (int i = 0; i < rows1; i++) {
        free(C[i]);
    }
    free(C);

    return 0;
}
