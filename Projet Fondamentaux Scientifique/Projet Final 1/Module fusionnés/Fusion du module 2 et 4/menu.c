#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "actions.h"
//
void afficherMenu(Valeurs *tabValeurs, int taille)
{
    int choice, ouiNon = 1;
//
// this while loop is used to relaunch menu to launch another mode if you want
//
    while ( ouiNon != 0)
    {
        system("cls");
// all this "printf" are used to dispaly the menu
        printf("\n");
        printf("    ----------------------------------------------------- \n");
        printf("   |                                                     |\n");
        printf("   |   1. trier les valeurs                              |\n");
        printf("   |   2. rechercher une valeurs                         |\n");
        printf("   |   3. afficher la moyenne des valeurs                |\n");
        printf("   |   4. afficher le nombre de valeurs                  |\n");
        printf("   |   5. afficher le minimum est le maximum             |\n");
        printf("   |   6. afficher les valeurs                           |\n");
        printf("   |   7. controler les LEDs                             |\n");
        printf("   |   0. quitter le programme                           |\n");
        printf("   |                                                     |\n");
        printf("    ----------------------------------------------------- \n");
        printf("\n  Entrer votre choix\n\n");
        scanf("%i", &choice);
        printf("\n");
// the switch is used to decide what mode it launch it terms of "choice" value
        switch(choice)
        {
        case 1:
// if choice is worth 1, function "tri" is launched
            tri(tabValeurs, taille);
            break;
        case 2:
// if choice is worth 2, function "rechercheDonnee" is launched
            rechercheDonnee(tabValeurs, taille, NULL);
            break;
        case 3:
// if choice is worth 3, function "afficherMoyenne" is launched
            afficherMoyenne(tabValeurs, taille);
            break;
        case 4:
// if choice is worth 4, function "afficherNbDonnees" is launched
            afficherNbDonnees(tabValeurs, taille, 1);
            break;
        case 5:
// if choice is worth 5, function "afficherMinMax" is launched
            afficherMinMax(tabValeurs, taille);
            break;
        case 6:
// if choice is worth 6, function "afficherValeurs" is launched
            afficherValeurs(tabValeurs, taille);
            break;
        case 7:
// if choice is worth 7, function "menuLed" is launched
            menuLed();
            break;
        case 0:
            return;
            break;
        default:
// if any value matches with any case, a error message is displayed
            printf("Aucun mode corespond a votre choix, choississez une autre valeur\n\n");
            break;
        }
// it call at the users if they want reuse the program
        printf("Continuez\n");
        printf("1. Oui\n");
        printf("0. Non\n\n");
        scanf ("%i", &ouiNon);
    }
    return;
}
