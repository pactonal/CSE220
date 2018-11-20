#include <stdio.h>


void changeit(char *value);


int main(void) {
    char input[20] = "Monday";
    changeit(input);
    return 0;
}


void changeit(char *value) {
    char *p;
    for (p = value; *p != '\0'; p++)
        *p = --(*p);
    puts(value);
}
