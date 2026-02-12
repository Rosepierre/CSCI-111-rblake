#include <iostream>

int calculation(int a , int b){
    return a + b;
}    
int main()
{
int a, b;
std::cin >> a >> b;
int sum = calculation(a, b);
std::cout << sum << std::endl;
}