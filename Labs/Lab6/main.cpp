/*
    Loops Lab
    Updated By: [Roger Blake]
    CSCI 111
    Date: [3/6/26]

    Program prints geometric shapes of given height with * using loops
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include "shapes.h"

using namespace std;

int main(int argc, char *argv[])
{
    char again = 'y';

    while (again == 'y' || again == 'Y')
    {
        int height;

        cout << "Enter the height: ";
        cin >> height;

        // call function from shapes.cpp
        string triangle = get_triangle(height).str();
        print_shape(triangle);

        string upsidedowntri = get_flipped_triangle(height).str();
        print_shape(upsidedowntri);

        string square = get_square(height).str();
        print_shape(square);

        cout << "Run again? (y/n): ";
        cin >> again;
    }

    cout << "Goodbye!" << endl;
    return 0;
}
