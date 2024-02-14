#include <stdio.h>

#define SIZE 10

int main() {
    
    #ifndef SIZE
    printf("No array size is defined. Please define ARRAY_SIZE.\n");
    #elif (SIZE < 1 || SIZE > 10)
    printf("Array size is not supported by the application. Please choose a value between 1 and 10.\n");
    #else
    
    int array[SIZE];
    for (int i = 0, value = 1; i < SIZE; i++, value *= 2) {
        array[i] = value;
    }

    
    for (int i = 0; i < SIZE; i++) {
        printf("%d\n ", array[i]);
    }
    #endif

    return 0;
}