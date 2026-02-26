#include <cstdlib>
#include <iostream>
#include <cstdio>
#include <cassert>
#include "../include/utils.hpp"

using namespace std;

// function clears the screen using system call
// NOTE: system call is not a security best pracice!
void clear_screen()
{
// use "cls" in windows and "clear" command in Mac and Linux
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void print_menu(void)
{
    cout << "========= Menu options =================\n";
    cout << "[1] Add two numbers\n";
    cout << "[2] Subtract two numbers\n";
    cout << "[3] Multiply two numbers\n";
    cout << "[4] Divide two numbers\n";
    cout << "[5] Find larger of two numbers\n";
    cout << "[6] Find smaller of two numbers\n";
    cout << "[7] Find average of two numbers\n";
    cout << "[8] Quit the program\n";
    cout << "Enter one of the menu options [1-8]: ";
}

void get_two_numbers(double &n1, double &n2)
{
    cout << "Enter two numbers separated by a space: ";
    cin >> n1 >> n2;
}

double find_sum(const double &n1, const double &n2)
{
    return (n1 + n2);
}

double find_difference(const double &n1, const double &n2)
{
    // FIXED - subtract n2 from n1 and return the difference
    return n1 - n2;

}

double find_product(const double &n1, const double &n2)
{
    // FIXED - multiply n1 by n2 and return the product
    return n1 * n2;
}

void find_average(const double &n1, const double &n2, double &avg){
    // FIXED - find the average of n1 and n2 and update avg

    // FIXED - Must call find_sum function to find the sum of n1 and n2
    avg = (find_sum(n1, n2)/2.0);
    //  Note: this void function doesn't return a value but
    //  the average will be stored in avg
}

double find_larger(const double &n1, const double &n2)
{
    // find the larger of n1 and n2 and return it
    double larger = (n1 >= n2) ? n1 : n2;
    return larger;
}

double find_smaller(const double &n1, const double &n2)
{
    // FIXED - find the smaller of n1 and n2 and return it
    double smaller = (n1 <= n2) ? n1 : n2;
    return smaller;
}

double find_quotient(const double &n1, const double &n2)
{
    // FIXED - divide n1 by n2 and return the quotient
    return n1 / n2;
}

// functions to run automated testing for various user-defined functions
void test()
{
    double answer = find_sum(10, 12.5);
    double expected = 22.5;
    assert(answer == expected);        // test case 1
    assert(find_sum(-5, 10.5) == 5.5); // test case 2

    // FIXME7 – Using assert function write at least 2 test cases for each of the following functions
    // find_difference(), find_product(), find_larger(),
    // find_smaller(), find_quotient(), find_average()
    cerr << "all test cases passed..." << endl;
}

// the crux of the program that uses all the defined functions
// the program is menu driven
bool program()
{
    int option = 1;            // variable to store user entered option
    double num1 = 0, num2 = 0; // variables to store two numbers entered by user
    // display menu options
    print_menu();
    // Input validation
    do
    {
        if (cin >> option && option >= 1 && option <= 8)
        {
            // input is valid, break loop
            break;
        }
        else
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid option, please enter a value between 1 and 8" << endl;
        }
    } while (true);

    // Call the function(s) or perform some operations based on user input
    switch (option)
    {
    case 1:
    {
        // get two numbers and store them into num1 and num2 using function
        get_two_numbers(num1, num2);
        // call find_sum function; store the returned value in sum variable
        double sum = find_sum(num1, num2);
        // display the result with proper description
        printf("%.2f + %.2f = %.2f\n", num1, num2, sum);
        break;
    }
    case 2:
    {
        // FIXED: call get_two_numbers function
        get_two_numbers(num1, num2);
        // FIXED: call find_difference function and print the result
        double difference = find_difference(num1, num2);
        printf("%.2f - %.2f = %.2f\n", num1, num2, difference);
        break;
    }
    case 3:
    {
        // FIXED: get two numbers and find their product using functions
        get_two_numbers(num1, num2);
        double product = find_product(num1, num2);
        printf("%.2f * %.2f = %.2f\n", num1, num2, product);
        break;
    }
    // FIXED: complete the rest of the cases 4, 6, and 7
    case 4:
    {
        get_two_numbers(num1, num2);
        double quotient = find_quotient(num1, num2);
        printf("%.2f / %.2f = %.2f\n", num1, num2, quotient);
        break;
    }
    case 5:
    {
        // get two numbers
        get_two_numbers(num1, num2);
        // find the larger of the two numbers
        double max = find_larger(num1, num2);
        // print the result
        printf("larger between %.2f & %.2f is %.2f\n", num1, num2, max);
        break;
    }
    case 6:
    {
        double smaller = find_smaller(num1, num2);
        printf("%.2f & %.2f = %.2f\n", num1, num2, smaller);
        break;
    }
    case 7:
    {
    get_two_numbers(num1, num2);

    double average;
    find_average(num1, num2, average);

    printf("The average of %.2f and %.2f = %.2f\n", num1, num2, average);
    break;
    }
    case 8:
    default:          // must be option 8
        return false; // exit the program
    }
    return true;
}