#include <cassert>
#include <iostream>
#include "triarea.h"

using namespace std;

// Function implementation
float area_of_triangle(const unsigned height, const unsigned base)
{
    float area = 0;
    // FIXED: Find the area of traingle using the formular given in algorithm step: 2.a
    area = ((base * height) / 2.0);
    // store the area into area variable
    return area;
}