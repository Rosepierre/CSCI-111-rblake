#include <cmath>
#include "../include/my_math.hpp"
using namespace std;

float square_root(float x)
{
    return std::sqrt(x);
}

float cube_root(float x)
{
    return std::cbrt(x);
}

float power_of_ten(float x)
{
    return std::pow(10.0f, x);
}

float log_base_2(float x)
{
    return std::log2(x);
}

float log_base_10(float x)
{
    return std::log10(x);
}

float degree_to_radian(float degree)
{
    return degree * (M_PI / 180.0f);
}

float sine_of_radian(float radian)
{
    return std::sin(radian);
}

float cosine_of_radian(float radian)
{
    return std::cos(radian);
}