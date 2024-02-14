#include "maths.h"
#include <stdio.h>
my_factorial(int num){
    while(num != 0){
    int result = num*(num - 1);
    num = num - 1;
    }
    return result;  
}