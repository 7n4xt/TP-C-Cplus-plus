#include <iostream>
#include "headers/TP2func.h"

int main_menu()
{
    std::cout << "bienvenue dans mon TP!!" << std::endl;
    std::cout << "1. alouer saisir afficher liberer en C" << std::endl;
    std::cout << "2. alouer saisir afficher liberer en C++" << std::endl;
    std::cout << "3. POO en C" << std::endl;
    std::cout << "choisisez :";

    unsigned short choix;

    std::cin >> choix;

    switch (choix)
    {
    case 1:
        tp_21();
    case 2:
        tp_22() 
        default : std::cout << "choix invalide reseaiyer!" << std::endl;
        break;
    }
    return 0;
}