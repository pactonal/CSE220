#include <stdio.h>
#include <string.h>

int main(void) {
    char movie[100];
    strcpy(movie, "Beauty and the Beast");
    printf("%s\n", movie);
    movie[4] = '\0';
    printf("%s\n", movie);
    strcpy(movie + 4, "!");
    printf("%s\n", movie);
    strcat(movie, "- Disney");
    printf("%s\n", movie);

    return 0;
}
