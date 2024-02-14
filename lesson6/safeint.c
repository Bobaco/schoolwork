// safeint.c

#include "safeint.h"

SafeResult safadd(int a, int b) {
    SafeResult result;
    result.value = a + b;
    result.errorflag = (a > 0 && b > 0 && result.value <= 0) || (a < 0 && b < 0 && result.value >= 0);
    return result;
}

SafeResult safesubtract(int a, int b) {
    SafeResult result;
    result.value = a - b;
    result.errorflag = (a > 0 && b < 0 && result.value <= 0) || (a < 0 && b > 0 && result.value >= 0);
    return result;
}

SafeResult safemultiply(int a, int b) {
    SafeResult result;
    result.value = a * b;
    result.errorflag = (a != 0 && b != 0 && result.value / a != b) || (a == INT_MIN && b == -1);
    return result;
}

SafeResult safedivide(int a, int b) {
    SafeResult result;
    if (b != 0) {
        result.value = a / b;
        result.errorflag = 0;
    } else {
        result.value = 0;
        result.errorflag = 1; // Division by zero error
    }
    return result;
}

SafeResult safestrtoint(const char *str) {
    SafeResult result;
    char *endptr;
    result.value = strtol(str, &endptr, 10);

    if (*endptr == '\0') {
        result.errorflag = 0; // No error
    } else {
        result.value = 0;
        result.errorflag = 1; // Error
    }

    return result;
}
