//CH.SC.U4CSE24022
#include <stdio.h>
void readMatrix(int matrix[10][10], int rows, int cols) {
	int i,j;
    printf("Enter elements of matrix (%d x %d):\n", rows, cols);
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);
}
void displayMatrix(int matrix[10][10], int rows, int cols) {
	int i,j;
    printf("Matrix (%d x %d):\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }
}
int addMatrices(int A[10][10], int B[10][10], int result[10][10], int m, int n) {
	int i,j;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            result[i][j] = A[i][j] + B[i][j];
    return 1;
}
int multiplyMatrices(int A[10][10], int B[10][10], int result[10][10], int m1, int n1, int m2, int n2) {
	int i,j,k;
    if (n1 != m2) return 0; 
    for (i = 0; i < m1; i++) {
        for (j = 0; j < n2; j++) {
            result[i][j] = 0;
            for (k = 0; k < n1; k++)
                result[i][j] += A[i][k] * B[k][j];
        }
    }
    return 1;
}
int main() {
    int A[10][10], B[10][10], addResult[10][10], multResult[10][10];
    int m1, n1, m2, n2;
    printf("Enter rows and columns of matrix A: ");
    scanf("%d %d", &m1, &n1);
    readMatrix(A, m1, n1);
    printf("Enter rows and columns of matrix B: ");
    scanf("%d %d", &m2, &n2);
    readMatrix(B, m2, n2);
    if (m1 == m2 && n1 == n2) {
        addMatrices(A, B, addResult, m1, n1);
        printf("\nSum of matrices:\n");
        displayMatrix(addResult, m1, n1);
    } else {
        printf("\nMatrix addition not possible (dimension mismatch).\n");
    }
    if (multiplyMatrices(A, B, multResult, m1, n1, m2, n2)) {
        printf("\nProduct of matrices:\n");
        displayMatrix(multResult, m1, n2);
    } else {
        printf("\nMatrix multiplication not possible (columns of A ? rows of B).\n");
    }
    return 0;
}

