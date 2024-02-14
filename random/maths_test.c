#include <stdio.h>
#include "maths_test.h"
int powerof(int a, int n){
    int result = 1;
    if(a < 0){
        int sign = -1;
        a = a * -1;
    }
    for(int i = 0; i < n; i++){
    result = result * a;
    }
    return result * sign; 
}