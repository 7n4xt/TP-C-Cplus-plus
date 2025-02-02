#include <stdio.h>
#include <stdlib.h>

int *Pint;

int main()
{

    return 0;
}

int *allouer_tableau(int taille)
{

    int tableau = (int *)malloc(5 * sizeof(taille));
    Pint = tableau;

    if (Pint == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1; // Exit the program
    }
    return 0;
}

void saisir_valeurs(int *tableau, int taille)
{
    allouer_tableau(5);

    int *Pint[4];

    printf("Enter the first integer value you want to save :\n");
    scanf("%d", Pint[0]);

    printf("Enter the second integer value you want to save :\n");
    scanf("%d", Pint[1]);

    printf("Enter the third integer value you want to save :\n");
    scanf("%d", Pint[2]);

    printf("Enter the fourth integer value you want to save :\n");
    scanf("%d", Pint[3]);

    printf("Enter the fifth integer value you want to save :\n");
    scanf("%d", Pint[4]);
}