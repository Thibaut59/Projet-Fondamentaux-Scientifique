#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "actions.h"

void afficherMenu(Valeurs *tabValeurs, int Taille)
{
    int choix;
    printf("|---taper 1 pour trier les valeurs--------------------|\n");
    printf("|---taper 2 pour rechercher une valeurs---------------|\n");
    printf("|---taper 3 pour afficher la moyenne des valeurs------|\n");
    printf("|---taper 4 pour afficher le nombre de valeurs--------|\n");
    printf("|---taper 5 pour afficher le minimum est le maximum---|\n");
    printf("|---taper 6 pour afficher les valeurs-----------------|\n");

    scanf("%i", &choix);

    switch(choix)
    {
        case 1:
        tri(tabValeurs, Taille);
        break;
        case 2:
        rechercheDonnee(tabValeurs, Taille, NULL);
        break;
        case 3:
        afficherMoyenne(tabValeurs, Taille);
        break;
        case 4:
        afficherNbDonnees(tabValeurs, Taille, 1);
        break;
        case 5:
        afficherMinMax(tabValeurs, Taille);
        break;
        case 6:
        afficherValeurs(tabValeurs, Taille);
        break;
        default:
        break;

    }
}
