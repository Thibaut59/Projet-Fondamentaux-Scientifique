#include <stdio.h>
#include <stdlib.h>
#include "donnees.h"
#include <string.h>

void lireFichier (Valeurs valeurs)
{

	FILE* fichier = NULL;
	fichier = fopen("nonTrie.csv", "r");

	if (fichier  != NULL)
	{
		printf("Fichier ouvert");
		int temps, poul, i = 0;
		while (fscanf(fichier, "%i ; %i", &temps, &poul)!=EOF)
		{
			printf("%i %i\n", temps, poul);

			i++;
		}
	}
	else
		printf("fichier introuvable\n");
}

