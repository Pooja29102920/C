//CH.SC.U4CSE24022
#include <stdio.h>
int isPrime(int num) {
	int i;
    if (num <= 1) return 0;
    for(i = 2; i <= num / 2; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}
int main() {
    int n, i, num;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int input[n];
    int count = 0;
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &input[i]);
        if (isPrime(input[i])) {
            count++;
        }
    }
    if (count == 0) {
        printf("No prime numbers found.\n");
        return 0;
    }
    int prime[count];
    int j = 0;
    for (i = 0; i < n; i++) {
        if (isPrime(input[i])) {
            prime[j++] = input[i];
        }
    }
    printf("Prime numbers are: ");
    for (i = 0; i < count; i++) {
        printf("%d ", prime[i]);
    }
	return 0;
}

