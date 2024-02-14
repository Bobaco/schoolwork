#include <stdio.h>
#define SWAP(A , B, TYPE) TYPE TEMPORARY = A;\
    A = B;\
    B = TEMPORARY;
int main(){\
        int a, b;
        SWAP(a, b, int);
        printf("a = %d, b = %d", a, b);
        
        return 0;
}