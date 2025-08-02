#include <stdio.h>
#define SIZE 10
void readMatrix(int matrix[SIZE][SIZE], int n) {
	int i,j;
    printf("Enter elements of the matrix (%d x %d):\n", n, n);
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);
}
void displayMatrix(int matrix[SIZE][SIZE], int n) {
	int i,j;
    printf("Matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }
}
int isSymmetric(int matrix[SIZE][SIZE], int n) {
	int i,j;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (matrix[i][j] != matrix[j][i])
                return 0;
    return 1;
}
int trace(int matrix[SIZE][SIZE], int n) {
	int i;
    int sum = 0;
    for (i = 0; i < n; i++)
        sum += matrix[i][i];
    return sum;
}
int isUpperTriangular(int matrix[SIZE][SIZE], int n) {
	int i,j;
    for (i = 1; i < n; i++)
        for (j = 0; j < i; j++)
            if (matrix[i][j] != 0)
                return 0;
    return 1;
}
int isLowerTriangular(int matrix[SIZE][SIZE], int n) {
	int i,j;
    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
            if (matrix[i][j] != 0)
                return 0;
    return 1;
}
int isIdentityMatrix(int matrix[SIZE][SIZE], int n) {
	int i,j;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++) {
            if (i == j && matrix[i][j] != 1)
                return 0;
            else if (i != j && matrix[i][j] != 0)
                return 0;
        }
    return 1;
}
int main() {
    int matrix[SIZE][SIZE], n, choice;
    printf("Enter size of the square matrix (n x n): ");
    scanf("%d", &n);
    readMatrix(matrix, n);
    do {
        printf("\nMenu:\n");
        printf("1. Check if matrix is symmetric\n");
        printf("2. Display trace of the matrix\n");
        printf("3. Check if matrix is upper triangular\n");
        printf("4. Check if matrix is lower triangular\n");
        printf("5. Check if matrix is identity matrix\n");
        printf("6. Exit\n");
        printf("Enter your choice (1-6): ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                if (isSymmetric(matrix, n))
                    printf("Matrix is symmetric.\n");
                else
                    printf("Matrix is not symmetric.\n");
                break;
            case 2:
                printf("Trace of the matrix: %d\n", trace(matrix, n));
                break;
            case 3:
                if (isUpperTriangular(matrix, n))
                    printf("Matrix is upper triangular.\n");
                else
                    printf("Matrix is not upper triangular.\n");
                break;
            case 4:
                if (isLowerTriangular(matrix, n))
                    printf("Matrix is lower triangular.\n");
                else
                    printf("Matrix is not lower triangular.\n");
                break;
            case 5:
                if (isIdentityMatrix(matrix, n))
                    printf("Matrix is an identity matrix.\n");
                else
                    printf("Matrix is not an identity matrix.\n");
                break;
            case 6:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 6);
    return 0;
}

