#include "counter.h"
#include <stdio.h>

int main(){
    for(int i = 0; i <= 10; i++){
        addoddtosum();
    }
    printf("%ld", sum);
    return 0;
}