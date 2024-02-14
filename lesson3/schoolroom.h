#ifndef SCHOOLROOM_H
#define SCHOOLROOM_H
#include "person.h"

// Define the structure "SchoolRoom"
struct SchoolRoom {
    int room_number;
    struct Person occupants[50];
};

#endif