#include <stdio.h>
#include <math.h>

#define MAX 5

void power_arr(double arr[]) {
    for (int i = 0; i < MAX; i++) {
        arr[i] = pow(arr[i], 4);
        printf("%lf ", arr[i]);
    }
    printf("\n");
}

int main() {
    double myArray[MAX] = {1.0, 2.0, 3.0, 4.0, 5.0};
    
    printf("Original array: ");
    for (int i = 0; i < MAX; i++) {
        printf("%lf ", myArray[i]);
    }
    printf("\n");

    power_arr(myArray);

    return 0;
}
