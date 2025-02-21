#include <iostream>
#include <limits>
//#include "headers/utilities.h"


// Function to allocate memory for an array
int* allouer_tableauPP(int Size) {
    int *Arr = new int[Size]; // Allocate memory

    return Arr; // Return the pointer to the allocated memory
}

// Function to input values into the array

int saisir_valeursPP(int *Arr, int Size) {
    std::cout << "Enter your values:\n";
    for (int i = 0; i < Size; i++) {
        std::cin >> Arr[i];
        while (std::cin.fail()) {
            std::cin.clear(); // Clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore invalid input
            std::cout << "Invalid input! Please enter an integer for value " << i << ": ";
            std::cin >> Arr[i];
        }
    }
    return 0;
}

// Function to display the array

void afficher_tableauPP(int *Arr, int Size) {
    std::cout << "Array values:\n";
        for (int i = 0; i < Size; i++) {
        std::cout << "Value " << i << ": " << Arr[i] << std::endl; // Print values
    }

}

// Function to free the allocated memory

void liberer_tableauPP(int *Arr) {
    delete[] Arr; // Free the memory
    std::cout << "Memory freed.\n";
}

int tp_22() {
    int Size = 5;
    int *Arr;

    // Allocate memory for the array
    Arr = allouer_tableauPP(Size);

    // Input values into the array
    saisir_valeursPP(Arr, Size);

    // Display the array
    afficher_tableauPP(Arr, Size);

    // Free the allocated memory
    liberer_tableauPP(Arr);

    return 0;
}