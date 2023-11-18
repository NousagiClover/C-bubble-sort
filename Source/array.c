#include "../Header/array.h"

int pekoRandom(int min, int max) {
    return rand() % max + min;
}

void swap(int *data1, int *data2) {
    int tmp = *data1;
    *data1 = *data2;
    *data2 = tmp;
}

void arrayPrint(int *array, int len) {
    for (int i = 0; i < len; i++) {
        printf("%d ", array[i]);
    }
    return;
}

void arrayMake(int *array, int count) {
    for (int i = 0; i < count; i++) {
        array[i] = i;
    }
    return;
}

void sort(int *array, int count) {
    bool again = true;
    int k = 1;
    while (again) {
        again = false;
        for (int i = 0; i < count - k; i++) {
            if (array[i] > array[i + 1]) {
                swap(&array[i], &array[i + 1]);
                again = true;
            }
        }
        k++;
    }
}
