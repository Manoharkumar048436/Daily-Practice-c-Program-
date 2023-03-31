#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union my_data {
    int integer;
    float floating_point;
};

int main() {
    char input[50];
    union my_data data;
    
    printf("Enter a number: ");
    fgets(input, 50, stdin);
    
    // check if input is an integer
    char *endptr;
    int num = strtol(input, &endptr, 10);
    if (*endptr == '\n' || *endptr == '\0') {
        // input is an integer
        data.integer = num;
        printf("Input is an integer: %d\n", data.integer);
    } else {
        // input is a floating-point number
        float numf = strtof(input, &endptr);
        data.floating_point = numf;
        printf("Input is a floating-point number: %f\n", data.floating_point);
    }
    
    return 0;
}
