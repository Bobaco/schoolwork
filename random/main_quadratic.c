#include "quadraticroots.h"
#include <stdio.h>

int main() {
    QuadraticRootsResult result_int = findroots(1, -3, 2);
    printf("Roots for int arguments: x1 = %f, x2 = %f, norealroots = %d\n", result_int.x1, result_int.x2, result_int.norealroots);

    QuadraticRootsResult result_float = findroots(1.0f, -5.0f, 6.0f);
    printf("Roots for float arguments: x1 = %f, x2 = %f, norealroots = %d\n", result_float.x1, result_float.x2, result_float.norealroots);

    QuadraticRootsResult result_double = findroots(1.0, -2.0, 1.0);
    printf("Roots for double arguments: x1 = %f, x2 = %f, norealroots = %d\n", result_double.x1, result_double.x2, result_double.norealroots);

    return 0;
}
