// util.c

#include <stdio.h>
#include <stdlib.h>
#include "util.h"

void handle_error(const char *message) {
    fprintf(stderr, "Error: %s\n", message);
    exit(EXIT_FAILURE);
}
