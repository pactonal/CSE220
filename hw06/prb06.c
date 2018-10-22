#include <stdio.h>
#include <string.h> // Used for memcpy

int main(void) {
    char a[7] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};
    char b[7] = {'A'};

    char target = 'f';

    // Copy array a into array b
    memcpy(b, a, sizeof(b)); 

    // Look for target in array
    for (int x = 0; x <= 7; x++) {
        if (a[x] == target) {
            printf("Found it\n");
            break;
        }
    }
    return 0;
}
