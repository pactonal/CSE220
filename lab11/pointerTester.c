/*******************************************************************************
*
*
*
*
*
*
*******************************************************************************/
#include <stdio.h>


int main(void) {
    int a = 0, b = 100, c = 255;
    
    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", &a);
    printf("Value of b: %d\n", b);
    printf("Address of b: %p\n", &b);
    printf("Value of c: %d\n", c);
    printf("Address of c: %p\n", &c);

    int *pA = &a, *pB = &b, *p;


    printf("Value of pA pointer: %p\n", pA);
    printf("Value pA points to: %d\n", *pA);
    printf("Value of pB pointer: %p\n", pB);
    printf("Value pB points to: %d\n", *pB);
    // printf("Value of p pointer: %p\n", p);
    // printf("Value p points to: %d\n", *p);

    // *p = 50;

    // printf("Value p points to after change: %d\n", *p);

    int z[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int idx = 0; idx < 10; idx++) {
        printf("Address of index %d: %p\n", idx, &z[idx]);
    }

    for (int idx = 0; idx < 10; idx++) {
        printf("Address of index %d: %p\n", idx, z + idx);
    }
    for (int idx = 0; idx < 10; idx++) {
        printf("Value of index %d: %d\n", idx, *(z + idx));
    }

    char x[] = "hello";

    printf("%5s\n", x);

    x[1] -= 32;

    printf("%5s\n", x);


    return 0;
}
