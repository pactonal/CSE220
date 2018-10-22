#include <stdio.h>

int main(void) {
    char chrarr[5];
    for (int l = 77; l < 82; l++) {
        printf("%c", l);
        chrarr[(l-77)] = l;
    }
    
}
