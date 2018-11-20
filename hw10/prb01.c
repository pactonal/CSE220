#include <stdio.h>

int main(void) {
    char str[20];
    int x,y;

    scanf("%d%s%d", &x, str, &y);

    printf("%d\n", x);
    printf("%s\n", str);
    printf("%d\n", y);
    return 0;
}
