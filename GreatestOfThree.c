//ch.sc.u4cse24022
#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a >= b && a >= c)
        printf("Greatest: %d\n", a);
    else if (b >= a && b >= c)
        printf("Greatest: %d\n", b);
    else
        printf("Greatest: %d\n", c);
    return 0;
}

