#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "actions.h"

void afficherMenu(Valeurs *tabValeurs, int Taille)
{
    int choix, ouiNon = 1;

    while ( ouiNon != 0){
    system("cls");
    printf("\n");
    printf("    ----------------------------------------------------- \n");
    printf("   |                                                     |\n");
    printf("   |   1. trier les valeurs                              |\n");
    printf("   |   2. rechercher une valeurs                         |\n");
    printf("   |   3. afficher la moyenne des valeurs                |\n");
    printf("   |   4. afficher le nombre de valeurs                  |\n");
    printf("   |   5. afficher le minimum est le maximum             |\n");
    printf("   |   6. afficher les valeurs                           |\n");
    printf("   |   0. quitter le programme                           |\n");
    printf("   |                                                     |\n");
    printf("    ----------------------------------------------------- \n");
    printf("\n------------------------------------------------------------------------------------------------------------------------\n");
    printf("\n  Entrer votre choix\n");
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
    printf("Continuez\n");
    printf("1. Oui\n");
    printf("0. Non\n");
    scanf ("%i", &ouiNon);
    }
}
