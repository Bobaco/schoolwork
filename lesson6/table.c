#include <stdio.h>
#include <limits.h>

#define PRINT_INT_TYPE_INFO(type) \
    printf("%-15s %-10s %-15lu %-20lld %-20lld %-20s %-20llu\n", \
           #type, \
           "%" #type, \
           (unsigned long)sizeof(type), \
           (long long)INT_MAX, \
           (long long)INT_MIN, \
           "%" #type, \
           (unsigned long long)UINT_MAX);

int main() {
    printf("%-15s %-10s %-15s %-20s %-20s %-20s %-20s\n", 
           "Type", "Format", "Size (bytes)", "Max Signed Value", 
           "Min Signed Value", "Format (unsigned)", "Max Unsigned Value");

    PRINT_INT_TYPE_INFO(char);
    PRINT_INT_TYPE_INFO(short);
    PRINT_INT_TYPE_INFO(int);
    PRINT_INT_TYPE_INFO(long);
    PRINT_INT_TYPE_INFO(long long);

    return 0;
}
