#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "donnees.h"
//
// this function read the file "nonTrie(100_000).csv" and it store the values in structure array
void lireFichier (Valeurs valeurs, int taille)
{
	FILE* fichier = NULL;
// fopen to open the file
	fichier = fopen("nonTrie.csv", "r");
// if the file is found then it launch the function
	if (fichier  != NULL)
	{
		printf("Fichier ouvert\n");
		int temps, poul, i = 0;
		Valeurs tabValeurs[taille];
		while (fscanf(fichier, "%i ; %i", &temps, &poul)!=EOF)
		{
			valeurs.temps = temps;
			valeurs.poul = poul;
			tabValeurs[i] = valeurs;
			i++;
		}
		afficherMenu(tabValeurs, taille);
		fclose(fichier);
	}
// else it display error alert
	else
		printf("fichier introuvable\n");
	return;
}
// this function count all the lines of the file
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
