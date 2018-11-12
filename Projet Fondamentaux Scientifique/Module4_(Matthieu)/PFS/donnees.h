#ifndef DONNEES_H
#define DONNEES_H
#define TAILLE 5000

typedef struct Valeurs
{
	int temps, poul;
}Valeurs;

void lireFichier(Valeurs valeurs);
void initialiserValeurs (temps, poul, i);
void afficherTableau (int *tabValeurs);


#endif
