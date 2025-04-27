#include "ItemTracker.h"
#include <iostream>

void PrintMenu() {
    std::cout << "\nMENU:\n";
    std::cout << "1. Search for an item\n";
    std::cout << "2. Display frequency of all items\n";
    std::cout << "3. Display histogram\n";
    std::cout << "4. Exit\n";
    std::cout << "Enter your choice: ";
}

int main() {
    ItemTracker tracker;
    tracker.LoadData("CS210_Project_Three_Input_File.txt");
    tracker.BackupData("frequency.dat");

    int choice;
    std::string item;

    do {
        PrintMenu();
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter item to search: ";
                std::cin >> item;
                std::cout << "Frequency: " << tracker.GetItemFrequency(item) << std::endl;
                break;
            case 2:
                tracker.PrintAllFrequencies();
                break;
            case 3:
                tracker.PrintHistogram();
                break;
            case 4:
                std::cout << "Exiting program.\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}