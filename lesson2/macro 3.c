#include <stdio.h>
#define PRINT(a) \
    printf("%s \n", #a); \
    printf("%d \n", a); \
    printf("%s \n", __FILE__); \
    printf("%d \n", __LINE__);

    void main(){
        int a = 44;
        PRINT(a);
    }