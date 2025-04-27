#include "ItemTracker.h"
#include <iostream>
#include <fstream>

void ItemTracker::LoadData(const std::string& filename) {
    std::ifstream inputFile(filename);
    std::string item;

    while (inputFile >> item) {
        ++itemFrequency[item];
    }

    inputFile.close();
}

int ItemTracker::GetItemFrequency(const std::string& item) {
    if (itemFrequency.count(item)) {
        return itemFrequency[item];
    }
    return 0;
}

void ItemTracker::PrintAllFrequencies() {
    for (const auto& pair : itemFrequency) {
        std::cout << pair.first << " " << pair.second << std::endl;
    }
}

void ItemTracker::PrintHistogram() {
    for (const auto& pair : itemFrequency) {
        std::cout << pair.first << " ";
        for (int i = 0; i < pair.second; ++i) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

void ItemTracker::BackupData(const std::string& filename) {
    std::ofstream outFile(filename);
    for (const auto& pair : itemFrequency) {
        outFile << pair.first << " " << pair.second << std::endl;
    }
    outFile.close();
}