#include <stdio.h>
#define COMMAND(NAME, TYPE) TYPE ## _ ## NAME ## _ ## command
#define DEFINE_COMMAND(NAME, TYPE) void COMMAND(NAME, TYPE)(void)

DEFINE_COMMAND(quit, internal) {
    printf("Internal Quit Command\n");
}

DEFINE_COMMAND(quit, external) {
    printf("External Quit Command\n");
}

int main() {
    internal_quit_command();
    external_quit_command();
    return 0;
}