#include <stdio.h>
#include <string.h>


int main(void) {
    char string1[100];
    char string2[100];
    scanf("%s", string1);
    printf("%s\n",string1);

    for (int i = 0; i < 2; i++)
        strcat(string2, string1);

    printf("%s\n", string2);
    return 0;
}
