#pragma once
#define _CRT_SECURE_NO_WARNINGS
#define TRIANGLE_AREA(a, b, c) (a + b > c && a + c > b && b + c > a) ? \
                                ((a + b + c) / 2.0) : 0
#define TRAPEZOID_AREA(base, height) (base > 0 && height > 0) ? \
                                      (base * height / 2.0) : 0
#define ERROR_MESSAGE() printf("Error: Invalid input for triangle and trapezoid. \n")

namespace nsname {
    extern int side1;
    extern int side2;
    extern int side3;
}
