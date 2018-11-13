#include <stdio.h>
#include <stdlib.h>
#include "valeurs.h"
#include "donnees.h"

void triCroissant(Valeurs* tabValeurs, int Taille)
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
	return;
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
