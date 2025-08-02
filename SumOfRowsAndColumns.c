//CH.SC.U4CSE24022
#include <stdio.h>
int main() {
    int A[10][10], B[11][11];
    int m, n, i, j;
    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);
    printf("Enter elements of matrix (%d x %d):\n", m, n);
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &A[i][j]);
    for (i = 0; i < m; i++) {
        int rowSum = 0;
        for (j = 0; j < n; j++) {
            B[i][j] = A[i][j];
            rowSum += A[i][j];
        }
        B[i][n] = rowSum;  
    }
    for (j = 0; j < n; j++) {
        int colSum = 0;
        for (i = 0; i < m; i++) {
            colSum += A[i][j];
        }
        B[m][j] = colSum;  
    }
    int total = 0;
    for (i = 0; i < m; i++)
        total += B[i][n]; 
    B[m][n] = total;
    printf("\nExtended matrix with row and column sums (%d x %d):\n", m+1, n+1);
    for (i = 0; i <= m; i++) {
        for (j = 0; j <= n; j++) {
            printf("%4d", B[i][j]);
        }
        printf("\n");
    }
    return 0;
}

