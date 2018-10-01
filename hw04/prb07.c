#include <stdio.h>

int main(void) {
    int grade = 90;
    if (grade >= 90)
        printf("%c", 'A');
    else if (grade >= 80 && grade < 90)
        printf("%c", 'B');
    else if (grade >= 70 && grade < 80)
        printf("%c", 'C');
    else if (grade >= 60 && grade < 70)
        printf("%c", 'D');
    else if (grade < 60)
        printf("%c", 'F');
    return 0;
}
