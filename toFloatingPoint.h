//
// Created by reza0 on 2023-02-10.
//

#ifndef DLLAB1_TOFLOATINGPOINT_H
#define DLLAB1_TOFLOATINGPOINT_H


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define SIGN 1
#define MANTISSA 10
#define EXPONENT 3
#define FLOATINGPOINT 8
#define TEST -2.625

// a struct to represent a floating point number
typedef struct FloatingPoint {
    unsigned char sign[SIGN];
    unsigned char mantissa[MANTISSA];
    unsigned char exponent[EXPONENT];
    unsigned char floationgPoint[FLOATINGPOINT];
} floatingPoint;





#endif //DLLAB1_TOFLOATINGPOINT_H
