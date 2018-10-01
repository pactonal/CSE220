#include <stdio.h>

int small(int, int, int);

int main(void) {
    int a, b, c;
    printf("Enter three numbers separated by commas ");
    scanf("%d,%d,%d", &a, &b, &c);
    printf("%d", small(a, b, c));
    return 0;

}

int small(int x, int y, int z) {
    if (x > y || x > z)
        return 0;
    else
        return 1;
}
