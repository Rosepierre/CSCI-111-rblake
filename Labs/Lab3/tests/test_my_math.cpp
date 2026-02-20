#include <cassert>
#include "../include/my_math.hpp"
#include "../include/test.hpp"

void test_square_root()
{
    assert(square_root(4.0f) == 2.0f);
}

void test_log_base_2()
{
    assert(log_base_2(8.0f) == 3.0f);
}

void test_cube_root()
{
    assert(cube_root(27.0f) == 3.0f);
}

void test_power_of_ten()
{
    assert(power_of_ten(2.0f) == 100.0f);
}

void test_log_base_10()
{
    assert(log_base_10(100.0f) == 2.0f);
}

void test_degree_to_radian()
{
    assert(degree_to_radian(180.0f) > 3.14f);
}

void test_sine_of_radian()
{
    assert(sine_of_radian(0.0f) == 0.0f);
}

void test_cosine_of_radian()
{
    assert(cosine_of_radian(0.0f) == 1.0f);
}