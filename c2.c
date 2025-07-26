#include <stdio.h>
int main() {
    int num1, num2;
    char op;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);  
    switch(op) {
        case '+':
            printf("Result: %d\n", num1 + num2);
            break;
        case '-':
            printf("Result: %d\n", num1 - num2);
            break;
        case '*':
            printf("Result: %d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Result: %.2f\n", (float)num1 / num2);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;
        default:
            printf("Invalid operator!\n");
    }
    return 0;
}

