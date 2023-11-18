#include "../Header/array.h"


int main(void) {
    int narr = 0;
    printf("input: ");
    scanf("%d", &narr);
    int *arr = (int *)malloc(narr * sizeof(int));
    arrayMake(arr, narr);
    srand((unsigned int)time(NULL));

    for (int i = 0; i < narr; i++) {
        int randNum = pekoRandom(0, narr - 1);
        swap(&arr[i], &arr[randNum]);
    }

    printf("Before\n");
    arrayPrint(arr, narr);
    printf("\n");
    printf("After\n");
    sort(arr, narr);
    arrayPrint(arr, narr);
    free(arr);
    getch();

    return 0;
}
