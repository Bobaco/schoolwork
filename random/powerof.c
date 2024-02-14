#include <stdio.h>
#include <stdlib.h>
#include "maths_test.h"

int main(int argc, char **argv){
    int a = atoi(argv[1]);
    int n = atoi(argv[2]);
    printf("%d", powerof(a, n));
}