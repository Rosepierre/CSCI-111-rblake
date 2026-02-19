/*
Roger Blake
Hw number 4
2/19/26
Will return the highest and lowest number of 5 inputs as well as if a number is even or odd.
*/
#include <iostream>
#include <string>

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

void oddevenfinder(double num1, double num2, double num3, double num4, double num5){
    std::string odd = "The sum of the numbers is odd";
    std::string even = "The sum of the numbers is even";
    int sum = num1 + num2 + num3 + num4 + num5;

        if (sum % 2 == 0){
            std::cout << even << std::endl; 
        }
        else {
            std::cout << odd << std::endl; 
        } 
}

int main(){
   double num1, num2, num3, num4, num5;

   std::cout << "Please enter 5 numbers to find which is the largest and smallest. "<< std::endl;
   std::cin >> num1 >> num2 >> num3 >> num4 >> num5;
   double maxi = maxfinder(num1, num2, num3, num4, num5);
   double mini = minfinder(num1, num2, num3, num4, num5);

   std::cout << "The Highest number is " << maxi << " and the smallest number is " << mini << std::endl;

   oddevenfinder(num1, num2, num3, num4, num5);
   return 0;
}