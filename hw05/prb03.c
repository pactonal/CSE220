#include <stdio.h>

int main(void) {
    int number;
    int limit;

    for (number = 100; number >=50; number -= 21) {
        limit = number + 10;
        while (number <= limit) {
            printf("%d ", number);
            number += 1;
        }
        printf("\n");
    }
    return 0;
}
