/*
    Program by Roger Blake
    Steps of Hangman ASCII
    1/28/26
    CSCI 111
*/

#include <iostream>
#include <thread>   
#include <chrono>

int main()
{
    std::string name;

    std::string stage1 = 
    " +---+\n"
    " |   |\n"
    "     |\n"
    "     |\n"
    "     |\n"
    "     |\n"
    "=========\n"
    "_ _ _ _ _\n"
    "Guesses: A\n";

    std::string stage2 =
    " +---+\n"
    " |   |\n"
    " O   |\n"
    "     |\n"
    "     |\n"
    "     |\n"
    "=========\n"
    "_ _ _ _ _\n"
    "Guesses: A, B\n";

    std::string stage3 =
    "  +---+\n"
    "  |   |\n"
    "  O   |\n"
    "  |   |\n"
    "      |\n"
    "      |\n"
    " ========\n"
    "_ _ _ _ _\n"
    "Guesses: A, B, C\n";

    std::string stage4 = 
    "  +---+\n"
    "  |   |\n"
    "  O   |\n"
    " /|   |\n"
    "      |\n"
    "      |\n"
    "=========\n"
    "_ _ _ _ _\n"
    "Guesses: A, B, C, D";

    std::string stage5 = 
    "  +---+\n"
    "  |   |\n"
    "  O   |\n"
    " /|\\  |\n"
    "      |\n"
    "      |\n"
    "=========\n"
    "_ _ _ _ _\n"
    "Guesses: A, B, C, D, E\n";

    std::string stage6 = 
    "  +---+\n"
    "  |   |\n"
    "  O   |\n"
    " /|\\  |\n"
    " /    |\n"
    "      |\n"
    "========\n"
    "_ _ _ _ _\n"
    "Guesses: A, B, C, D, E, F\n";

    std::string stage7 = 
    "  +---+\n"
    "  |   |\n"
    "  O   |\n"
    " /|\\  |\n"
    " / \\  |\n"
    "      |\n"
    "=========\n"
    "_ _ _ _ _ \n"
    "Guesses: A, B, C, D, E, F, G\n";

    std::cout << "Hello, what is your name?" << std::endl;
    std::cin >> name;
    std::cout << "Hello " << name << std::endl;
    std::cout << "Hangman game currently under construction. This is what the game will look like." << std::endl;

    std::cout << stage1 << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));

    std::cout << stage2 << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));

    std::cout << stage3 << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));

    std::cout << stage4 << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));

    std::cout << stage5 << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));

    std::cout << stage6 << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));

    std::cout << stage7 << std::endl;

    return 0;
}

