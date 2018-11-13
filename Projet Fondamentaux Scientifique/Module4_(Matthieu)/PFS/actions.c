#include <stdio.h>
#include <stdlib.h>
#include "valeurs.h"
#include "donnees.h"
#include "actions.h"

void tri(Valeurs* tabValeurs, int Taille)
{
	int choix;
	printf("Comment voulez vous trier le fichier ? \n");
	printf("Taper 1 pour trier en fonction du poul\n");
	printf("Taper 2 pour trier en fonction du temps\n");
	scanf("%i",&choix);
	switch(choix)
	{
		case 1:
		printf("Comment voulez vous trier le fichier ? \n");
		printf("Taper 1 pour trier de manière Croissante\n");
		printf("Taper 2 pour trier de manière Decroissante\n");
		scanf("%i",&choix);
		switch (choix)
		{
			case 1:
				pCroissant(tabValeurs, Taille);
			break;
			case 2:
				pDecroissant(tabValeurs, Taille);
			break;
		}
		break;
		case 2:
		printf("Comment voulez vous trier le fichier ? \n");
		printf("Taper 1 pour trier de manière Croissante\n");
		printf("Taper 2 pour trier de manière Decroissante\n");
		scanf("%i",&choix);
		switch(choix)
		{
			case 1:
				tCroissant(tabValeurs, Taille);
			break;
			case 2:
				tDecroissant(tabValeurs, Taille);
			break;
		}
		break;
	}
	return;
}

void pCroissant (Valeurs *tabValeurs, int Taille)
{
	int i, j;
	Valeurs temp;
	for (i = 1; i < Taille; i++){
		temp = tabValeurs[i];
		for(j = i; j > 0 && tabValeurs[j-1].poul > temp.poul ; j--){
			tabValeurs[j] = tabValeurs[j-1];

		}
		tabValeurs[j] = temp;
	}
	afficherFichier(tabValeurs, Taille);
}

void pDecroissant (Valeurs *tabValeurs, int Taille)
{
	int i, j;
	Valeurs temp;
	for (i = 1; i < Taille; i++){
		temp = tabValeurs[i];
		for(j = i; j > 0 && tabValeurs[j-1].poul < temp.poul ; j--){
			tabValeurs[j] = tabValeurs[j-1];

		}
		tabValeurs[j] = temp;
	}
	afficherFichier(tabValeurs, Taille);
}

void tCroissant (Valeurs *tabValeurs, int Taille)
{
	int i, j;
	Valeurs temp;
	for (i = 1; i < Taille; i++){
		temp = tabValeurs[i];
		for(j = i; j > 0 && tabValeurs[j-1].temps > temp.temps ; j--){
			tabValeurs[j] = tabValeurs[j-1];

		}
		tabValeurs[j] = temp;
	}
	afficherFichier(tabValeurs, Taille);
}

void tDecroissant (Valeurs *tabValeurs, int Taille)
{
	int i, j;
	Valeurs temp;
	for (i = 1; i < Taille; i++){
		temp = tabValeurs[i];
		for(j = i; j > 0 && tabValeurs[j-1].temps < temp.temps ; j--){
			tabValeurs[j] = tabValeurs[j-1];

		}
		tabValeurs[j] = temp;
	}
	afficherFichier(tabValeurs, Taille);
}

void afficherFichier(Valeurs* tabValeurs, int Taille)
{
	for ( int i = 0; i < Taille; i++)
	{
		printf("%i", tabValeurs[i].temps);
		printf("  ");
		printf("%i\n", tabValeurs[i].poul);

	}

}
