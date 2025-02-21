#include "headers/TP2func.h"
#include <iostream>

int main()
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
        tp_22();
    case 3:
        tp_23();
    default:
        std::cout << "choix invalide reseaiyer!" << std::endl;
        main();
    }
    return 0;
}