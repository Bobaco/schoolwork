#ifndef SCHOOLCLASS_H
#define SCHOOLCLASS_H
#include "person.h"

// Define the structure "SchoolClass"
struct SchoolClass {
    struct Person students[26];
    char class_name;
    int class_number;
    struct Person class_leader;
};

#endif