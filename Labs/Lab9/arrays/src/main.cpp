/*
FIXED: Roger Blake to solve kattis problem arrays

The lab demonstrates the use of array and some operations on array.
*/

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <cstdio>
#include "../includes/utils.h"

using namespace std;

int menu(); // forward declaration

int main(int argc, char *argv[])
{
    size_t size = 0;       // initialize!
    int *nums = nullptr;   // pointer to hold the dynamic array

    do
    {
        int choice = menu();

        switch (choice)
        {
        case 1:
        {
            cout << "How many numbers would you like to enter? ";
            cin >> size;

            // delete old data if it exists
            delete[] nums;

            nums = new int[size];
            read_data(nums, size);

            printf("Done reading %zu data numbers.\n", size);
            break;
        }

        case 2:
        {
            if (nums == nullptr)
            {
                cout << "No data loaded. Please choose option 1 first.\n";
                break;
            }

            int max, min;
            find_max_min(nums, size, max, min);
            printf("Max = %d\n", max);
            printf("Min = %d\n", min);
            break;
        }

        case 3:
        {
            if (nums == nullptr)
            {
                cout << "No data loaded. Please choose option 1 first.\n";
                break;
            }

            printf("Sum = %lld\n", find_sum(nums, size));
            break;
        }

        case 4:
        {
            if (nums == nullptr)
            {
                cout << "No data loaded. Please choose option 1 first.\n";
                break;
            }

            bubble_sort(nums, size);
            cout << "Array sorted successfully.\n";
            break;
        }

        case 5:
        {
            if (nums == nullptr)
            {
                cout << "No data loaded. Please choose option 1 first.\n";
                break;
            }

            print_array(nums, size);
            break;
        }

        case 6:
        {
            delete[] nums;
            nums = nullptr;  // prevent double delete
            size = 0;

            cout << "Data deleted successfully.\n";
            break;
        }

        case 7:
        {
            delete[] nums; // clean up before exit
            cout << "Exiting program...\n";
            return 0;
        }
        }

    } while (true);

    return 0;
}

int menu()
{
    cout << "===== Menu =====\n";
    cout << "1. Read data\n";
    cout << "2. Print max & min\n";
    cout << "3. Print sum\n";
    cout << "4. Sort data\n";
    cout << "5. Print all data\n";
    cout << "6. Delete data\n";
    cout << "7. Exit\n";

    int choice;
    cout << "Enter your choice: ";

    while (true)
    {
        cin >> choice;
        if (choice >= 1 && choice <= 7)
            break;

        cout << "Invalid choice. Enter again: ";
    }

    cin.clear();
    cin.ignore(1000, '\n');

    return choice;
}