//CH.SC.U4CSE24022
#include <stdio.h>
int findIntersection(int a[], int n1, int b[], int n2, int intersection[]) {
    int i, j, k = 0,x;
    for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                int duplicate = 0;
                for (x = 0; x < k; x++) {
                    if (intersection[x] == a[i]) {
                        duplicate = 1;
                        break;
                    }
                }
                if (!duplicate) {
                    intersection[k++] = a[i];
                }
            }
        }
    }
    return k; 
}

int main() {
    int n1, n2, i;
    printf("Enter the number of elements in first set: ");
    scanf("%d", &n1);
    int a[n1];
    printf("Enter %d integers:\n", n1);
    for (i = 0; i < n1; i++)
        scanf("%d", &a[i]);
    printf("Enter the number of elements in second set: ");
    scanf("%d", &n2);
    int b[n2];
    printf("Enter %d integers:\n", n2);
    for (i = 0; i < n2; i++)
        scanf("%d", &b[i]);
    int intersection[n1 < n2 ? n1 : n2];  
    int size = findIntersection(a, n1, b, n2, intersection);
    printf("Intersection of the two sets:\n");
    if (size == 0) {
        printf("No common elements.\n");
    } else {
        for (i = 0; i < size; i++)
            printf("%d ", intersection[i]);
        printf("\n");
    }
    return 0;
}

