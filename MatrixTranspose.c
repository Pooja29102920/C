//CH.SC.U4CSE24022
#include <stdio.h>
void readMatrix(int matrix[10][10], int m, int n) {
	int i,j;
    printf("Enter elements of matrix (%d x %d):\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}
void transposeMatrix(int A[10][10], int B[10][10], int m, int n) {
	int i,j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            B[j][i] = A[i][j]; 
        }
    }
}
void displayMatrix(int matrix[10][10], int rows, int cols) {
	int i,j;
    printf("Matrix (%d x %d):\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int A[10][10], B[10][10];
    int m, n;
    printf("Enter number of rows and columns of matrix A: ");
    scanf("%d %d", &m, &n);
    readMatrix(A, m, n);
    transposeMatrix(A, B, m, n);
    printf("Transpose of matrix A (stored in B):\n");
    displayMatrix(B, n, m); 
    return 0;
}

