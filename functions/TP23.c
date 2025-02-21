#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum Sexe {incunnue=0, MASCULIN=1, FEMINin=2};

struct Personne {
    int numero;
    char nom[10];
    enum Sexe sexe;
};

// Fonction pour créer un pointeur de la structure Personne
struct Personne* creer() {
    struct Personne* p = (struct Personne*)malloc(sizeof(struct Personne));
    if (p == NULL) {
        printf("Erreur d'allocation de mémoire\n");
        exit(1);
    }
    return p;
}

// Fonction pour détruire un pointeur de la structure Personne
void detruire(struct Personne* p) {
    if (p != NULL) {
        free(p);
    }
}

// Fonction pour initialiser les champs de la structure Personne
void initialiser(struct Personne* p, int numero, const char* nom, enum Sexe sexe) {
    if (p != NULL) {
        p->numero = numero;
        strncpy(p->nom, nom, 9);
        p->nom[9] = '\0'; // Assurer que la chaîne est terminée par '\0'
        p->sexe = sexe;
    }
}

// Fonction pour afficher les champs de la structure Personne
void afficher(const struct Personne* p) {
    if (p != NULL) {
        printf("Numéro: %d\n", p->numero);
        printf("Nom: %s\n", p->nom);
        printf("Sexe: ");
        switch (p->sexe) {
            case incunnue:
                printf("Inconnu\n");
                break;
            case MASCULIN:
                printf("Masculin\n");
                break;
            case FEMINin:
                printf("Féminin\n");
                break;
            default:
                printf("Non défini\n");
        }
    } else {
        printf("Pointeur NULL\n");
    }
}

// Exemple d'utilisation
int tp_23() {
    // Création d'une personne
    struct Personne* personne = creer();
    
    initialiser(personne, 123, "Dupont", MASCULIN);
    
    afficher(personne);
    
    detruire(personne);
    
    return 0;
}