#ifndef ACTIONS_H
#define ACTIONS_H
//
// prototype of the functions "afficherFichier" and "enregistrerFichier"
void afficherFichier(Valeurs* tabValeurs, int taille);
void enregistrerFichier(Valeurs *tabValeurs, int taille, int a);
// prototype of sort functions
void tri(Valeurs* tabValeurs, int taille);
void pCroissant (Valeurs *tabValeurs, int taille);
void pDecroissant (Valeurs *tabValeurs, int taille);
void tCroissant (Valeurs *tabValeurs, int taille);
void tDecroissant (Valeurs *tabValeurs, int taille);
// prototype of "rechercheDonnee" function
int rechercheDonnee(Valeurs *tabValeurs, int taille, int t);
// prototype of "afficherMoyenne"function
void afficherMoyenne(Valeurs *tabValeurs, int taille);
// protoptype of "afficherMinMax" function 
void afficherMinMax (Valeurs *tabValeurs, int taille);
#endif
