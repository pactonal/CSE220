#include <stdio.h>


int main(void) {
    char f;
    char *cp = &f;

    *cp = 'Z';

    *cp -= 1;

    printf("%c", *cp);
}
