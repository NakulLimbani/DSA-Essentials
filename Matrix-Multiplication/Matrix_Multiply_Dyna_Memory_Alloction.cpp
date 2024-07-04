#include <iostream>
#include <cstdlib>

int main() {
    int rows1, cols1, rows2, cols2;

    // Input matrix dimensions
    std::cout << "Enter dimensions of matrix A (rows columns): ";
    std::cin >> rows1 >> cols1;

    std::cout << "Enter dimensions of matrix B (rows columns): ";
    std::cin >> rows2 >> cols2;

    if (cols1 != rows2) {
        std::cout << "Matrix multiplication not possible." << std::endl;
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
    std::cout << "Enter elements of matrix A:" << std::endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            std::cin >> A[i][j];
        }
    }

    std::cout << "Enter elements of matrix B:" << std::endl;
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            std::cin >> B[i][j];
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
    std::cout << "Result matrix C:" << std::endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            std::cout << C[i][j] << " ";
        }
        std::cout << std::endl;
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
