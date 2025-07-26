//ch.sc.u4cse24022
#include <stdio.h>
void accept(int arr[], int n) {
	int i;
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        printf("Elements: ", i + 1);
        scanf("%d", &arr[i]);
    }
}
void display_reverse(int arr[], int n) {
	int i;
    printf("Array in reverse order:\n");
    for(i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n]; 
    accept(arr, n);
    display_reverse(arr, n);
    return 0;
}

