/*
By Roger Blake to solve kattis problem babelfish
*/

#include <iostream>
#include <unordered_map>
#include <string>

int main() {
    std::unordered_map<std::string, std::string> dict;
    std::string line;

    // Phase 1: Read dictionary
    while (std::getline(std::cin, line)) {
        if (line.empty()) break;

        size_t space_pos = line.find(' ');
        std::string english = line.substr(0, space_pos);
        std::string foreign = line.substr(space_pos + 1);

        dict[foreign] = english;
    }

    // Phase 2: Queries
    std::string word;
    while (std::cin >> word) {
        if (dict.count(word)) {
            std::cout << dict[word] << "\n";
        } else {
            std::cout << "eh\n";
        }
    }

    return 0;
}