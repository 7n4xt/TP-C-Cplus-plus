#ifndef INCLUDE_TP2
#define INCLUDE_TP2

// Déclarations d'enum et de structures
enum Sexe {incunnue=0, MASCULIN=1, FEMINin=2};
struct Personne {
    int numero;
    char nom[10];
    enum Sexe sexe;
};

// Déclarations de fonctions
int *allouer_tableau(int Size);
int saisir_valeurs(int *Arr, int Size);
void afficher_tableau(int *Arr, int Size);
void liberer_tableau(int *Arr);
int tp_21();

int *allouer_tableauPP(int Size);
int saisir_valeursPP(int *Arr, int Size);
void afficher_tableauPP(int *Arr, int Size);
void liberer_tableauPP(int *Arr);
int tp_22();

struct Personne* creer();
void detruire(struct Personne* p);
void initialiser(struct Personne* p, int numero, const char* nom, enum Sexe sexe);
void afficher(const struct Personne* p);
int tp_23();


#endif