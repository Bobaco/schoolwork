#ifndef SAFEINT_H
#define SAFEINT_H

// Structure to hold the result of a mathematical operation
typedef struct {
    int value;     // Result of the mathematical operation
    char errorflag; // Flag to indicate if an error occurred (0: No error, 1: Error)
} SafeResult;

// Function declarations
SafeResult safadd(int a, int b);
SafeResult safesubtract(int a, int b);
SafeResult safemultiply(int a, int b);
SafeResult safedivide(int a, int b);
SafeResult safestrtoint(const char *str);

#endif // SAFEINT_H
