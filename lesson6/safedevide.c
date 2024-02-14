// safedivide.c

#include <stdio.h>
#include <stdlib.h>
#include "safeint.h"
#include "util.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        handle_error("Usage: ./safedivide <num1> <num2>");
    }

    int num1 = safestrtoint(argv[1]).value;
    int num2 = safestrtoint(argv[2]).value;

    SafeResult result = safedivide(num1, num2);

    if (result.errorflag) {
        handle_error("Division by zero or Overflow/Underflow occurred");
    }

    printf("Quotient: %d\n", result.value);

    return 0;
}
