/*
Roger Blake
Foundations of Compsci
A functional simple calculator in the terminal.
*/

#include <iostream>
#include <cmath>
#include <cassert>


double addition(double numb1, double numb2)
{
    return numb1 + numb2;
}

double multiply(double numb1, double numb2)
{
    return numb1 * numb2; 
}

double division(double numb1, double numb2)
{
    return numb1 / numb2;     
}

double remainder(double numb1, double numb2)
/*Setup to use floating point numbers in the reaminder calculation*/
{
    return std::fmod(numb1, numb2);
}

double subtract(double numb1, double numb2)
{
    return numb1 - numb2;
}

double exponent(double numb1, double numb2)
{
    return static_cast<double>(std::pow(numb1, numb2));
}

double squareroot(double numb3)
{
 return std::sqrt(numb3);   
}

void test()
{
std::cout << "Running tests...\n";
assert(addition(2, 3) == 5);
assert(multiply(4, 5) == 20);
assert(subtract(10, 3) == 7);
assert(exponent(2, 3) == 8);
assert(squareroot(25) == 5);
std::cout << "All tests passed" << std::endl;
}

int main()
{

    double numb1;
    double numb2;
    double numb3;


    test();

    std::cout << "Hello, please input two numbers you wish to calculate." << std::endl;

    std::cin >> numb1 >> numb2;

    double sum = addition(numb1, numb2);
    std::cout << "The sum of your numbers are " << sum << std::endl;

    double product = multiply(numb1, numb2);
    std::cout << "The product of your numbers are " << product << std::endl;

    if (numb2 != 0){
        double quotient = division(numb1, numb2);
        double remain = remainder(numb1, numb2);
    std::cout << "The Quotient of your numbers are " << quotient << " with a remainder of " << remain << std::endl;
    }

    else{
        std::cout << "Skipping divsion due to division by 0 \n";
    }

    double difference = subtract(numb1, numb2);
    std::cout << "The difference of your numbers are " << difference << std::endl;

    double expon = exponent(numb1, numb2);
    std::cout << "Your first number to the power of the second number is " << expon << std::endl;

    std::cout << "Please enter a number you wish to find the squareroot of " << std::endl;
    std::cin >> numb3;

    if (numb3 < 0){
    std:: cout << "Cannot find the squareroot of a egative number in real numbers. \n";
    }
    else{
    double sqart = squareroot(numb3);
    std::cout << "The Squareroot of your number is " << sqart << std::endl;
    }

return 0;
}

