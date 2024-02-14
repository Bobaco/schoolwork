// safesubtract.c

#include <stdio.h>
#include <stdlib.h>
#include "safeint.h"
#include "util.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        handle_error("Usage: ./safesubtract <num1> <num2>");
    }

    int num1 = safestrtoint(argv[1]).value;
    int num2 = safestrtoint(argv[2]).value;

    SafeResult result = safesubtract(num1, num2);

    if (result.errorflag) {
        handle_error("Overflow/Underflow occurred");
    }

    printf("Difference: %d\n", result.value);

    return 0;
}
