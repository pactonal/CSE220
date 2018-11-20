#include <stdio.h>


int main(void) {
    int total = 10;
    int result = 1;
    int *ptr = &total;

    *ptr = 20;

    int *qtr = ptr;

    qtr = &result;

    *qtr *= 2;

    printf("%d", result);
    return 0;
}
