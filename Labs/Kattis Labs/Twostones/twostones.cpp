#include <bits/stdc++.h>
#include <iostream>

int main() {
    int n;
    std::cin >> n;
    // Performing AND operation of n with 1
    int res = n & 1;

    // If res is 0, the number is even
    if (res == 0)
        std::cout << "Bob";

    // Otherwise, number is odd
    else
        std::cout << "Alice";
    return 0;
}