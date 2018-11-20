#include <stdio.h>


int *findMaxAndMin(int a[], int length, int *max) {
    int maxValue = a[0], minValue = a[0];
    int maxIdx = 0, minIdx = 0;
    int *min;

    for (int idx = 1; idx < length; idx++) {
        if (a[idx] > maxValue) {
            maxValue = a[idx];
            maxIdx = idx;
        }

        if (a[idx] < minValue) {
            minValue = a[idx];
            minIdx = idx;
        }
    }
    *max = maxValue;
    min = &minValue;

    return min;
}


int main(void) {

    int myArray[5] = {4, 1, -5, 3, 5};
    int *ptrMin, *ptrMax = myArray;

    ptrMin = findMaxAndMin(myArray, 5, ptrMax);

    printf("Min: %d\tMax: %d", *ptrMin, *ptrMax);

    return 0;
}
