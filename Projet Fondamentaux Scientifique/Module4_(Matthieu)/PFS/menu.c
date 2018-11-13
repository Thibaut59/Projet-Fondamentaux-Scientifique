#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "valeurs.h"
#include "actions.h"

void afficherMenu(Valeurs *tabValeurs, int Taille)
{
    int choix;
    printf("taper 1 pour trier dans l'ordre croissant\n");
    printf("taper 2 pour trier dans l'ordre croissant\n");
    printf("taper 3 pour trier dans l'ordre croissant\n");
    printf("taper 4 pour trier dans l'ordre croissant\n");
    printf("taper 5 pour trier dans l'ordre croissant\n");
    printf("taper 6 pour trier dans l'ordre croissant\n");
    printf("taper 7 pour trier dans l'ordre croissant\n");

    scanf("%i", &choix);

    switch(choix)
    {
    case 1:
        tri(tabValeurs, Taille);
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    case 6:
        break;
    case 7:
        break;
    default:
        break;

    }
}
