#include <stdio.h>
#include <stdlib.h>

// Function to allocate memory for an array
int* allouer_tableau(int Size) {
    int *Arr = (int *)malloc(Size * sizeof(int)); // Allocate memory

    if (Arr == NULL) {
        printf("Memory allocation failed!\n");
        return NULL; // Return NULL on failure
    }

    return Arr; // Return the pointer to the allocated memory
}

// Function to input values into the array
int saisir_valeurs(int *Arr, int Size) {
    printf("Enter your values:\n");
    for (int i = 0; i < Size; i++) {
        while (scanf("%d", &Arr[i]) != 1) {
            printf("Invalid input! Please enter an integer for value %d: ", i);
            while (getchar() != '\n'); // Clear the input buffer
        }
    }
    return 0;
}

// Function to display the array
void afficher_tableau(int *Arr, int Size) {
    printf("Array values:\n");
    for (int i = 0; i < Size; i++) {
        printf("Value %d: %d\n", i, Arr[i]); // Print values
    }
}

// Function to free the allocated memory
void liberer_tableau(int *Arr) {
    free(Arr); // Free the memory
    printf("Memory freed.\n");
}

int tp_21() {
    int Size = 5;
    int *Arr;

    // Allocate memory for the array
    Arr = allouer_tableau(Size);
    if (Arr == NULL) {
        return 1; // Exit if memory allocation fails
    }

    // Input values into the array
    saisir_valeurs(Arr, Size);

    // Display the array
    afficher_tableau(Arr, Size);

    // Free the allocated memory
    liberer_tableau(Arr);

    return 0;
}