#include <stdio.h>

int main(void) {
    int delta = 26;
    switch(delta / 5) {
        case 1:
            printf("delta is small");
        case 5:
            printf("delta is midsize");
        case 10:
            printf("delta is large");
        default:
            printf("delta can be anything");
    }
    return 0;
}
