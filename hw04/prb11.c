#include <stdio.h>

int main(void) {
    switch (answer) {
        case 'y':
            printf("Let's do it\n");
            printf("Be ready at 5:00pm\n");
            countYes++;
            break;
        case 'n':
            printf("Maybe next time\n");
            countNo++;
            break;
        case 'u':
            printf("Still undecided?\n");
            break;
        default:
            printf("This is not a valid option\n");
            break;
    }
    return 0;
}
