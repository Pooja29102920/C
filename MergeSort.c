//CH.SC.U4CSE24022
#include <stdio.h>
void mergeSortedArrays(int a1[], int n1, int a2[], int n2, int a3[]) {
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (a1[i] < a2[j])
            a3[k++] = a1[i++];
        else
            a3[k++] = a2[j++];
    }
    while (i < n1)
        a3[k++] = a1[i++];
    while (j < n2)
        a3[k++] = a2[j++];
}
int main() {
	int i;
    int a1[] = {10, 25, 90};
    int a2[] = {9, 16, 22, 26, 100};
    int n1 = sizeof(a1) / sizeof(a1[0]);
    int n2 = sizeof(a2) / sizeof(a2[0]);
    int a3[n1 + n2];
    mergeSortedArrays(a1, n1, a2, n2, a3);
    printf("Merged sorted array (a3):\n");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", a3[i]);
    }
    printf("\n");
    return 0;
}

