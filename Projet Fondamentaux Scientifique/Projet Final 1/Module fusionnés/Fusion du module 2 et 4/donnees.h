#ifndef DONNEES_H
#define DONNEES_H

typedef struct Valeurs
{
	int temps, poul;
}Valeurs;

void lireFichier(Valeurs valeurs, int taille);
int compterLigne();

#endif
