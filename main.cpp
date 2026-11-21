#include <iostream>
#include "lab01.hpp"

int main() {
    constexpr int CAP = 8;
    int values[CAP] = {70, 80, 90, 85};
    int size = 4;

    // TODO: implement a user-friendly loop with four menu options:
    // 1. Display active values and logical size
    // 2. Insert (ask for position and value; report success/failure)
    // 3. Delete (ask for position; report success/failure)
    // 4. Exit
    // Include clear handling of invalid choices and input as needed.
    // The initial active list is shown below only to confirm the project builds.
    std::cout << "Initial active values: ";
    for (int i = 0; i < size; ++i) std::cout << values[i] << ' ';
    std::cout << "\nImplement the interactive menu in main.cpp.\n";
    return 0;
}
