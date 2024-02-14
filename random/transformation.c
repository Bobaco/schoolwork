#include <stdio.h>
#include <string.h>
#include "transformation.h"

struct transformation transform_string_to_int(const char* input_str){
    transform_string_to_int s1;
    int isDigit = 0;
    int j=0;
    while(j<strlen(input_str) && isDigit == 0){
        if(input_str[j] > 57 && input_str[j] < 48)
            isDigit = 0;
        else
            isDigit = 1;
            j++;
            
}
if(isDigit ==  1){
    s1.result = input_str;

}else s1.error = "invalid input string";
}
