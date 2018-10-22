#include <stdio.h>

int main(void) {
    int a[3][10] = {
        {7,0,0,0,0,0,0,0,0,0},
        {7,0,0,0,0,0,0,0,0,0},
        {7,0,0,0,0,0,0,0,0,0},
    };

    for (int j = 0; j < 3; j++) {
        for (int k = 0; k < 10; k++) {
            printf("%d ", a[j][k]);
        }
        printf("\n");
    }
}
