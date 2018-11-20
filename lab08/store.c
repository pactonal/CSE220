/*******************************************************************************
*
*
*
*
*
*
*******************************************************************************/
#include <stdio.h>

void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
}


int largestPos(int array[], int size, int index) {
    int max = 0;
    for (int i = index; i < size; i++) {
        if (array[i] > max) {
            max = i;
        }
    } 
    return max;
}


int main(void) {
    int arr[10];
    int pos;
    printf("Enter ten integers:\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d: ", i);
        scanf("%d", &arr[i-1]);
    }
    printArray(arr, 10);

    printf("\nEnter a position: ");
    scanf("%d", &pos);

    int large = largestPos(arr, 10, pos);
    printf("%d", arr[large]);
    return 0;
}
