#include <stdio.h>

int sumEven(int arr[], int len) {
    int sum = 0;
    for (int i = 1; i <= len; i += 2) {
        sum += arr[i];
    }
    return sum;
}

int main(void) {
    int even[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int total = sumEven(even, (sizeof(even) / sizeof(int)));

    printf("%d", total);
}
