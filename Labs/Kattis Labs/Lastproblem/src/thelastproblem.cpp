#include <iostream>
#include <cstdio>
#include <cassert>
#include <string>
#include "../include/helper.hpp"

using namespace std;

string read_data();

int main()
{
    string input = "input";
    input = read_data();
    
    // FIXED: Call twilight function passing input as an argument
    string answer = twilight(input);
    
    printf("%s\n", answer.c_str());
    return 0;
}

string read_data()
{
    string input;
    
    // FIXED: using getline read and store the data into input variable
    getline(cin, input);
    
    // FIXED: return input data
    return input;
}