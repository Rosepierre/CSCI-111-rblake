#include <iostream> 
#include <random>
using namespace std;

int randomnumber()
{
    int min = 1;
    int max = 20;

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(min, max);

    int randomValue = distrib(gen);
    return randomValue;
}

int readnumber(int target)
{
    int guess;
    cin >> guess;

    if (guess == target)
        return 1;
    else if (guess < target)
        return -1;
    else
        return 0;
}  

int main()
{

    std::cout << "A random number from 1-20 has been chosen, your goal is to guess that number. Goodluck!" << std::endl;    

    int number = randomnumber();
    int result;
    int attempt = 0;

    do {
        result = readnumber(number);
        attempt++;
        
        if (result == -1)
            cout << "Too low try again\n";
        else if (result == 0)
            cout << "Too high try again\n";
            
    } while (result != 1);
    cout << "Correct! You guessed it in " << attempt << " tries" << endl;
    return 0;
}