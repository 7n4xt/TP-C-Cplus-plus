/*
#include <limits>
#include <iostream>

void CheckInput( int *Arr, int i) {
std::cin >> Arr[i]; // Input values
while (std::cin.fail()) {
    std::cin.clear(); // Clear the error flag
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore invalid input
    std::cout << "Invalid input! Please enter an integer for value " << i << ": ";
    std::cin >> Arr[i];
}
}
*/