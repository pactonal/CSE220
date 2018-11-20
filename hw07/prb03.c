#include <stdio.h>

int puzzle(char val[], int a, int b) {
    if (a > b) {
        return 1;
    } else if (val[a] == val[b]) {
        return puzzle(val, a+1, b-1);
    } else {
        return 0;
    }
}


int main(void) {
    char v[6] = {'m', 'a', 'x', 'x', 'i', 'm'};
    int puz = puzzle(v, 0, 5);
    printf("%d", puz);
    return 0;
}
