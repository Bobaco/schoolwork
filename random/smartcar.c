// smartcar.c
#include <stdio.h>

int main() {
    unsigned char lights = 237;

    printf("Initial state of headlights: %d\n", lights);

    for (int i = 0; i < 8; ++i) {
        if ((lights & (1 << i)) && (i % 2 == 0)) {
            lights &= ~(1 << i);
        }
    }

    printf("Final state of headlights: %d\n", lights);

    return 0;
}