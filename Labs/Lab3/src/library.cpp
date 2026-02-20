/*
Library Functions Lab
Updated By: Roger Blake
CSCI 111
Date: 2/10/26

Program prompts user to enter a decimal number. It then finds various trig and mathematical values
of the number using library functions and prints the results using cstdio's printf function.

Algorithm:
    1. Prompt user to enter a decimal number
    2. Store the number into a variable
    3. Find and print various results form the number using library functions
*/

#include <iostream>
#include <cstdio>
#include <cassert>
#include <cmath> // various math functions: https://cplusplus.com/reference/cmath
#include "../include/my_math.hpp"
#include "../include/test.hpp"

using namespace std;

int main(int argc, char *argv[])
{
    if (argc > 1 and string(argv[1]) == string("test"))
    {
        cerr << "My Math Library Test Runner" << endl;
        test_square_root();
        test_log_base_2();
        // FIXME9: call the rest of the test functions
        test_cube_root();
        test_power_of_ten();
        test_log_base_10();
        test_degree_to_radian();
        test_sine_of_radian();
        test_cosine_of_radian();
        cerr << "All test cases passed!" << endl;
        return 0;
    }
    double number, result;

    cout << "Program calculates various results from a given number" << endl;
    cout << "Enter a decimal number: ";
    cin >> number;
    // Find ceiling of the number
    result = ceil(number);
    printf("ceiling(%f) = %.1f\n", number, result);
    // Find floor of the number
    result = floor(number);
    printf("Floor(%f) = %.1f\n", number, result);
    // FIXED - Find square root of the number and print the result with 4 decimal points
    result = sqrt(number);
    printf("Squareroot(%f) = %.4f\n", number, result);
    // FIXED - Find log base two of the number and print the result with 3 decimal points
    result = log_base_2(number);
    printf("Log base 2(%f) = %.3f\n", number, result);
    // Pretend the number is in degree, convert it to radian and print the result with 5 decimal points
    result = degree_to_radian(number);
     printf("Radian(%f) = %.5f\n", number, result);
    // FIXED - Find sine of the number (in radian) and print the result with 5 decimal points
    result = sine_of_radian(number);
    printf("Sine(%f) = %.3f\n", number, result);
    // FIXED - Find cosine of the number (in radian) and print the result
    result = cosine_of_radian(number);
    printf("Cosine(%f) = %.3f\n", number, result);
    // FIXED - Find power of ten of the number and print the result with no decimal points
    result = power_of_ten(number);
    printf("Power of ten(%f) = %.3f\n", number, result);
    cin.ignore(1000, '\n');
    cout << "Enter to quit the program: ";
    cin.get();
    cout << "Good bye..." << endl;
    return 0;
}