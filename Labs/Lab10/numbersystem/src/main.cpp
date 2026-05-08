/*
    CS1 - Vector Lab

    Updated by: Roger Blake
    Date: 5/7/26

    Program: Number system converter

    The program converts decimal (unsigned int) number to binary and octol representations.
    Lab demonstrates the vector application.
*/
#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
#include <vector>
#include <cctype>
#include "../includes/num_system.hpp"

using namespace std;

int main()
{
    ull decimalNum;
    int choice;
    string octalNum, binary;
    do
    {
        
        cout << "Decimal, Binary, and Octal Number System Converter.\n";
        choice = menuOption();
        switch (choice)
        {
        case 1:
            // FIXED
            cout << "Enter a binary number: ";
            cin >> binary;
            decimalNum = binToDec(binary);
            printf("(%s) base 2 = (%llu) base 10\n", binary.c_str(), decimalNum);
            break;
        case 2:
            // FIXED
            cout << "Enter a positive whole decimal number: ";
            cin >> decimalNum;
            binary = decToBin(decimalNum);
            printf("(%llu) base 10 = (%s) base 2\n", decimalNum, binary.c_str());
            break;
        case 3:
            cout << "Enter a positive whole decimal number: ";
            cin >> decimalNum;
            octalNum = decToOct(decimalNum);
            printf("(%llu) base 10 = (%s) base 8\n", decimalNum, octalNum.c_str());
            break;
        case 4:
            cout << "Enter a positive octal number: ";
            cin >> octalNum;
            decimalNum = octToDec(octalNum);
            printf("(%s) base 8 = (%llu) base 10\n", octalNum.c_str(), decimalNum);
            break;
        case 5:
            break;
        }
        if (choice != 5)
        {
            cin.ignore();
            cout << "Enter to continue...";
            cin.get();
        }
    } while (choice != 5);
    cin.ignore();
    cout << "Good bye! Enter to quit...";
    cin.get();
    return 0;
}