#include "counter.h"

long sum = 0;

static int current_odd = 1;

int nextodd() {
    int odd = current_odd;
    current_odd += 2;
    return odd;
}

void addoddtosum() {
    sum += nextodd();
}