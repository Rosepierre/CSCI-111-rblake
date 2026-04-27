/*
By Roger Blake to solve kattis problem anewalphabet
*/
#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<char, std::string> alphabet = {
        {'a', "@"}, {'b', "8"}, {'c', "("}, {'d', "|)"},
        {'e', "3"}, {'f', "#"}, {'g', "6"}, {'h', "[-]"},
        {'i', "|"}, {'j', "_|"}, {'k', "|<"}, {'l', "1"},
        {'m', "[]\\/[]"}, {'n', "[]\\[]"}, {'o', "0"},
        {'p', "|D"}, {'q', "(,)"}, {'r', "|Z"}, {'s', "$"},
        {'t', "']['"}, {'u', "|_|"}, {'v', "\\/"},
        {'w', "\\/\\/"}, {'x', "}{"}, {'y', "`/"}, {'z', "2"}
    };

    std::string line;
    std::getline(std::cin, line);  // IMPORTANT

    for (char c : line) {
        char lower = std::tolower(c);

        if (alphabet.count(lower)) {
            std::cout << alphabet[lower];
        } else {
            std::cout << c;
        }
    }

    return 0;
}