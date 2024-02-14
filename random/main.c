#include <stdio.h>
#include "counter.h"

int main() {
    for (int i = 0; i < 10; ++i) {
        addoddtosum();
    }

    printf("Sum = %ld", sum);

    return 0;
}