//Accept characters till a * is entered from the keyboard and count the number of characters entered. 
#include <stdio.h>
int main(){
    char charac;
    int count = 0;
    printf("Enter characters:\n");
    scanf(" %c", &charac);
    while (charac!='*') {
        count++;
        scanf(" %c", &charac); 
    }
    printf("%d", count);
    return 0;
}
