#include <stdio.h>

char upper(char c) {
    if (c > 96 && c < 123) {
        c -= 32;
    }
    return c;
}

int main(void) {
    char letter;
    printf("Enter a character: ");
    scanf("%c", &letter);

    char uc = upper(letter);

    printf("%c", uc);

    return 0;
}
