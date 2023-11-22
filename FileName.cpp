
#include <stdio.h>
#include <conio.h>
#include "name.h"

using namespace nsname;

namespace nsname {
    int side1;
    int side2;
    int side3;
}
int main(void)
{
    int base, trapezoidHeight;

    // Введення сторін трикутника
    printf("Enter three sides of the triangle: ");
    scanf_s("%d %d %d", &side1, &side2, &side3);

    // Обчислення площі трикутника або виведення повідомлення про помилку
    float triangleArea = TRIANGLE_AREA(side1, side2, side3);
    if (triangleArea > 0) {
        printf("Triangle Area: %f", triangleArea);
        return 0;
    }
    else {
        // Введення основи та висоти трапеції
        printf("Error: Invalid input for triangle \n");
        printf("Enter the base and height of the trapezoid: ");
        scanf_s("%d %d", &base, &trapezoidHeight);

        // Обчислення площі трапеції або виведення повідомлення про помилку
        float trapezoidArea = TRAPEZOID_AREA(base, trapezoidHeight);
        if (trapezoidArea > 0) {
            printf("Trapezoid Area: %f\n", trapezoidArea);
        }
        else {
            ERROR_MESSAGE();
        }
    }


    while (!_kbhit());

    return 0;
}
