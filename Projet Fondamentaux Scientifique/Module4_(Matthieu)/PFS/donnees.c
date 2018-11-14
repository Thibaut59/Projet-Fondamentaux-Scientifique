#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "donnees.h"
#include "menu.h"

void lireFichier (Valeurs valeurs, int Taille)
{

	FILE* fichier = NULL;
	fichier = fopen("nonTrie.csv", "r");

	if (fichier  != NULL)
	{
		printf("Fichier ouvert\n");
		int temps, poul, i = 0;
		Valeurs tabValeurs[Taille];
		while (fscanf(fichier, "%i ; %i", &temps, &poul)!=EOF)
		{
			valeurs.temps = temps;
			valeurs.poul = poul;
			tabValeurs[i] = valeurs;
			i++;
		}
		afficherMenu(tabValeurs, Taille);
		fclose(fichier);
	}

	else
		printf("fichier introuvable\n");

	return;
}

int compterLigne ()
{
    FILE* fichier = NULL;
	fichier = fopen("nonTrie.csv", "r");
	int compteur = 0;
	char ligne[20] = "";
	while ((fgets(ligne, 20,fichier)) != NULL)
	{
		compteur++;
	}
	fclose(fichier);
	return compteur;
}
