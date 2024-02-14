#include "quadraticroots.h"
#include <math.h>

QuadraticRootsResult findRoots(double a, double b, double c) {
    QuadraticRootsResult result;

    double discriminant = b * b - 4 * a * c;

    if (discriminant >= 0) {
        result.x1 = (-b + sqrt(discriminant)) / (2 * a);
        result.x2 = (-b - sqrt(discriminant)) / (2 * a);
        result.norealroots = 0;
    } else {
        result.norealroots = 1;
    }

    return result;
}
