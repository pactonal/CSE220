#include <stdio.h>

int main(void) {
    char oscarWilde[200] = "I can resist everything except temptation";
    printf("%s\n", oscarWilde + 13);
    oscarWilde[23] = '\0';
    printf("%s\n", oscarWilde);
    return 0;
}
