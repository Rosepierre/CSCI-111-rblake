/*
    Roger Blake
    CSCI 111
    Date 1-Feb-26
    This program will calculate different ascepts of a triangle given 3 side lengths.
*/

#include <iostream>
#include <limits>
#include <cmath>

float heronArea(float a, float b, float c)
{
    float s = (a + b + c) / 2;
    return std::sqrt(s * (s - a) * (s - b) * (s - c));
}

int main()
{
    float a, b, c;

    std::cout << "Please enter 3 sides of a triangle separated by a single space:\n";
    /*While look to make sure that the person entered 3 numbers, will break loop if so*/
    while (true)
    {
        if (std::cin >> a >> b >> c)
        {
            break;
        }
        else
        {
            /*This else will repeat the loop until it finds 3 numbers to break*/
            std::cout << "Invalid input. Please enter three numbers: ";
            std::cin.clear();

            /*Essientally tells the complier to ignore certain inputs and lets the loop continue*/
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
    if (a + b > c && a + c > b && b + c > a);
    std::cout << "This is a real triangle" << std::endl;

    float area = heronArea(a, b , c);
    
    std::cout << "The area of the triangle is " << area << std::endl;
    return 0;
}





/* if(a + b > c) and (a + c > b) and (b + c > a ):
    print("This triangle is real.")
    #Herons formula for area
    area = math.sqrt(s*(s-a)*(s-b)*(s-c))*/