#include "headers/TP2func.h" // Include the header file for the TP2 functions
#include <iostream> 

int main()
{
    // Display the welcome message and menu options
    std::cout << "bienvenue dans mon TP!!" << std::endl;
    std::cout << "1. alouer saisir afficher liberer en C" << std::endl;
    std::cout << "2. alouer saisir afficher liberer en C++" << std::endl;
    std::cout << "3. POO en C" << std::endl;
    std::cout << "choisisez :";

    unsigned short choix; // Variable to store the user's choice

    std::cin >> choix; // Read the user's choice

    // Execute the corresponding function based on the user's choice
    switch (choix)
    {
    case 1:
        tp_21(); // Call the function for option 1
        break;
    case 2:
        tp_22(); // Call the function for option 2
        break;
    case 3:
        tp_23(); // Call the function for option 3
        break;
    default:
        // If the choice is invalid, display an error message and restart the main function
        std::cout << "choix invalide reseaiyer!" << std::endl;
    }
    return 0; // Return 0 to indicate successful execution
}