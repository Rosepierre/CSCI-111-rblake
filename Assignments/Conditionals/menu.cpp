/*
Roger Blake
Hw number 4
2/19/26
Will return the highest and lowest number of 5 inputs as well as if a number is even or odd.
*/
#include <iostream>
#include <string>
#include <cassert>

double maxfinder(double num1, double num2, double num3, double num4, double num5){
double maxnumber = num1;

    if (num2 > maxnumber){
        maxnumber = num2;
    }
    if (num3 > maxnumber){
        maxnumber = num3;
    }
    if (num4 > maxnumber){
        maxnumber = num4;
    }
    if (num5 > maxnumber){
        maxnumber = num5;
    }
    return maxnumber;
}

double minfinder(double num1, double num2, double num3, double num4, double num5){
    double minnumber = num1;
    if (num2 < minnumber){
        minnumber = num2;
    }
    if (num3 < minnumber){
        minnumber = num3;
    }
    if (num4 < minnumber){
        minnumber = num4;
    }
    if (num5 < minnumber){
        minnumber = num5;
    }
    return minnumber;
}

int oddevenfinder(double num1, double num2, double num3, double num4, double num5){
    std::string odd = "The sum of the numbers is odd";
    std::string even = "The sum of the numbers is even";
    int sum = num1 + num2 + num3 + num4 + num5;

        if (sum % 2 == 0){
            std::cout << even << std::endl;
            return 1; 
        }
        else {
            std::cout << odd << std::endl;
            return 0; 
        } 
}

void test(){
    assert(maxfinder(2, 7, 8, 3, 5) == 8);
    assert(maxfinder(54, 67, 4, 1000, 46) == 1000);
    assert(maxfinder(1000000, 12345, 45, 73, 21) == 1000000);
    assert(minfinder(2, 7, 8, 3, 5) == 2);
    assert(minfinder(54, 67, 4, 1000, 46) == 4);
    assert(minfinder(1000000, 12345, 45, 73, 21) == 21);
    assert(oddevenfinder(1, 2, 3, 4, 5) == 0);
    assert(oddevenfinder(2, 4, 6, 8, 10) == 1);
    assert(oddevenfinder(2, 4, 7, 9, 11) == 0);
    std::cout << "All tests passed" << std::endl;
}

int main(){
   double num1, num2, num3, num4, num5;

   test();

   std::cout << "Please enter 5 numbers to find which is the largest and smallest. "<< std::endl;
   std::cin >> num1 >> num2 >> num3 >> num4 >> num5;
   double maxi = maxfinder(num1, num2, num3, num4, num5);
   double mini = minfinder(num1, num2, num3, num4, num5);

   std::cout << "The Highest number is " << maxi << " and the smallest number is " << mini << std::endl;

   oddevenfinder(num1, num2, num3, num4, num5);
   return 0;
}