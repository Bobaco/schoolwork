#ifndef TRANSFORMATION_H
#define TRANSFORMATION_H
#define ERROR_MAX 101

struct transformation{
    long result;
    char error[ERROR_MAX];
};
struct transformation transform_string_to_int( char input_str[]); //towa wrushta strucrtora ot tip transform_string_to_int
#endif