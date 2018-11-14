#ifndef ACTIONS_H
#define ACTIONS_H

void afficherFichier(Valeurs* tabValeurs, int Taille);
void enregistrerFichier(Valeurs *tabValeurs, int Taille, int a);

void tri(Valeurs* tabValeurs, int Taille);
void pCroissant (Valeurs *tabValeurs, int Taille);
void pDecroissant (Valeurs *tabValeurs, int Taille);
void tCroissant (Valeurs *tabValeurs, int Taille);
void tDecroissant (Valeurs *tabValeurs, int Taille);

int rechercheDonnee(Valeurs *tabValeurs, int Taille, int t);

void afficherMoyenne(Valeurs *tabValeurs, int Taille);

void afficherMinMax (Valeurs *tabValeurs, int Taille);
#endif
