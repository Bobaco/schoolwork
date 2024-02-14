#include <stdio.h>
#include "schoolclass.h"
#include "schoolroom.h"

// Define the structure "School"
struct School {
    struct SchoolClass classes[20];
    struct SchoolRoom rooms[10];
};

int main() {
    // Declare a variable of type "School"
    struct School school;

    // Your code here

    return 0;
}