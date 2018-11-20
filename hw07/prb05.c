#include <stdio.h>

void changeme(int number) {
    number = number + 10;
}

int main(void) {
    int x = 17;
    changeme(x);
    printf("%d\n", x);

    changeme(x++);
    printf("%d\n", x);

    changeme(++x);
    printf("%d\n", x);

    return 0;
}
