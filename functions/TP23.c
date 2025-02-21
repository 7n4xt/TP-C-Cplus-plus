#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Enumeration for gender
enum Sexe {incunnue=0, MASCULIN=1, FEMINin=2};

// Structure definition for Person
struct Personne {
    int numero;         // Number
    char nom[10];       // Name
    enum Sexe sexe;     // Gender
};

// Function to create a pointer to a Person structure
struct Personne* creer() {
    struct Personne* p = (struct Personne*)malloc(sizeof(struct Personne));
    if (p == NULL) {
        printf("Memory allocation error\n");
        exit(1);
    }
    return p;
}

// Function to destroy a pointer to a Person structure
void detruire(struct Personne* p) {
    if (p != NULL) {
        free(p);
    }
}

// Function to initialize the fields of the Person structure
void initialiser(struct Personne* p, int numero, const char* nom, enum Sexe sexe) {
    if (p != NULL) {
        p->numero = numero;
        strncpy(p->nom, nom, 9);
        p->nom[9] = '\0'; // Ensure the string is null-terminated
        p->sexe = sexe;
    }
}

// Function to display the fields of the Person structure
void afficher(const struct Personne* p) {
    if (p != NULL) {
        printf("Number: %d\n", p->numero);
        printf("Name: %s\n", p->nom);
        printf("Gender: ");
        switch (p->sexe) {
            case incunnue:
                printf("Unknown\n");
                break;
            case MASCULIN:
                printf("Male\n");
                break;
            case FEMINin:
                printf("Female\n");
                break;
            default:
                printf("Undefined\n");
        }
    } else {
        printf("NULL pointer\n");
    }
}

// Modified tp_23 function that lets the user initialize the person
int tp_23() {
    // Create a person
    struct Personne* personne = creer();
    
    // Variables for user input
    int numero;
    char nom[20]; // Larger buffer for initial input
    int sexe_choix;
    enum Sexe sexe_value;
    
    // Ask for number
    printf("Enter person number: ");
    while (scanf("%d", &numero) != 1) {
        printf("Invalid input. Please enter a number: ");
        while (getchar() != '\n'); // Clear input buffer
    }
    while (getchar() != '\n'); // Clear any remaining newline
    
    // Ask for name
    printf("Enter person name (max 9 characters): ");
    if (fgets(nom, sizeof(nom), stdin) != NULL) {
        // Remove newline if present
        size_t len = strlen(nom);
        if (len > 0 && nom[len-1] == '\n') {
            nom[len-1] = '\0';
        }
    }
    
    // Ask for gender
    printf("Choose gender:\n");
    printf("0 - Unknown\n");
    printf("1 - Male\n");
    printf("2 - Female\n");
    printf("Your choice: ");
    while (scanf("%d", &sexe_choix) != 1 || sexe_choix < 0 || sexe_choix > 2) {
        printf("Invalid choice. Please enter 0, 1, or 2: ");
        while (getchar() != '\n'); // Clear input buffer
    }
    
    // Convert choice to enum
    sexe_value = (enum Sexe)sexe_choix;
    
    // Initialize with user input
    initialiser(personne, numero, nom, sexe_value);
    
    // Display the person information
    printf("\nPerson Information:\n");
    printf("-------------------\n");
    afficher(personne);
    
    // Destroy the person
    detruire(personne);
    
    return 0;
}