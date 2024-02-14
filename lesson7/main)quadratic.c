#include <stdio.h>
#include "quadraticroots.h"

int main(void) {
    QuadraticRootsResult result_double = findRoots(1.0, -5.0, 6.0);
    printf("Double result: x1 = %.2f, x2 = %.2f, norealroots = %d\n", resultDouble.x1, resultDouble.x2, resultDouble.norealroots);
    
    QuadraticRootsResult result_int = findRoots(1, -3, 2);
    printf("Int result: x1 = %.2f, x2 = %.2f, norealroots = %d\n", resultInt.x1, resultInt.x2, resultInt.norealroots);

    QuadraticRootsResult result_float = findRoots(1.5, 4.5, 1);
    printf("Float result: x1 = %.2f, x2 = %.2f, norealroots = %d\n", resultFloat.x1, resultFloat.x2, resultFloat.norealroots);


    return 0;
}
