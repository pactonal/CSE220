#include <stdio.h>

int main(void) {
    int row = 50;
    while (row >=1) {
        if (row % 2 == 0)
            printf("Even iteration #%d\n", row);
        else
            printf("Odd iteration #%d\n", row);
        row -= 1;
    }
    return 0;
}
