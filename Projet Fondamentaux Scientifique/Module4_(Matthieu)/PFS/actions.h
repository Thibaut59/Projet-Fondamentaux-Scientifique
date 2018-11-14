#ifndef ACTIONS_H
#define ACTIONS_H
//
// prototype of the functions "afficherFichier" and "enregistrerFichier"
void afficherFichier(Valeurs* tabValeurs, int Taille);
void enregistrerFichier(Valeurs *tabValeurs, int Taille, int a);
// prototype of sort functions
void tri(Valeurs* tabValeurs, int Taille);
void pCroissant (Valeurs *tabValeurs, int Taille);
void pDecroissant (Valeurs *tabValeurs, int Taille);
void tCroissant (Valeurs *tabValeurs, int Taille);
void tDecroissant (Valeurs *tabValeurs, int Taille);
// prototype of "rechercheDonnee" function
int rechercheDonnee(Valeurs *tabValeurs, int Taille, int t);
// prototype of "afficherMoyenne"function
void afficherMoyenne(Valeurs *tabValeurs, int Taille);
// protoptype of "afficherMinMax" function 
void afficherMinMax (Valeurs *tabValeurs, int Taille);
#endif
