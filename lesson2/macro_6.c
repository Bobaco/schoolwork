#include <stdio.h>

#define SWAP(a, b) {int temp = a; a = b; b = temp;}
#define SORT(ARRAY, SIZE, TYPE, COMPARE) \
{ \
    for (int i = 0; i < SIZE ; i++) { \
        for (int j = 0; j < SIZE - 1 - i; j++) { \
            if (ARRAY[j] COMPARE ARRAY[j+1]) { \
                SWAP(ARRAY[j], ARRAY[j + 1]); \
            } \
        } \
    } \
}

int main() {
    int array[] = {5, 3, 1, 4, 2};
    int size = sizeof(array)/sizeof(array[0]);

    SORT(array, size, int, >);

    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}