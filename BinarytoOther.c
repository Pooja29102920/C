//CH.SC.U4CSE24022
#include <stdio.h>
void decimalToBinary(int num) {
    int binary[32], i = 0;
    if (num == 0) {
        printf("Binary: 0\n");
        return;
    }
    while (num > 0) {
        binary[i++] = num % 2;
        num = num / 2;
    }
    printf("Binary: ");
    for (i = i - 1; i >= 0; i--)
        printf("%d", binary[i]);
    printf("\n");
}
void decimalToOctal(int num) {
    int octal[32], i = 0;
    if (num == 0) {
        printf("Octal: 0\n");
        return;
    }
    while (num > 0) {
        octal[i++] = num % 8;
        num = num / 8;
    }
    printf("Octal: ");
    for (i = i - 1; i >= 0; i--)
        printf("%d", octal[i]);
    printf("\n");
}
void decimalToHex(int num) {
    char hex[32];
    int i = 0, rem;
    if (num == 0) {
        printf("Hexadecimal: 0\n");
        return;
    }
    while (num > 0) {
        rem = num % 16;
        if (rem < 10)
            hex[i++] = rem + '0';
        else
            hex[i++] = rem - 10 + 'A';
        num = num / 16;
    }
    printf("Hexadecimal: ");
    for (i = i - 1; i >= 0; i--)
        printf("%c", hex[i]);
    printf("\n");
}
int main() {
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    decimalToBinary(decimal);
    decimalToOctal(decimal);
    decimalToHex(decimal);
    return 0;
}

