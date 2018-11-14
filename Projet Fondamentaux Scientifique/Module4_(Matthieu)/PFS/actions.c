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
        printf("Taper 1 pour trier de maniere Croissante\n");
        printf("Taper 2 pour trier de maniere Decroissante\n");
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
    for (i = 1; i < Taille; i++)
    {
        temp = tabValeurs[i];
        for(j = i; j > 0 && tabValeurs[j-1].poul > temp.poul ; j--)
        {
            tabValeurs[j] = tabValeurs[j-1];

        }
        tabValeurs[j] = temp;
    }
    enregistrerFichier(tabValeurs, Taille, 1);
}

void pDecroissant (Valeurs *tabValeurs, int Taille)
{
    int i, j;
    Valeurs temp;
    for (i = 1; i < Taille; i++)
    {
        temp = tabValeurs[i];
        for(j = i; j > 0 && tabValeurs[j-1].poul < temp.poul ; j--)
        {
            tabValeurs[j] = tabValeurs[j-1];

        }
        tabValeurs[j] = temp;
    }
    enregistrerFichier(tabValeurs, Taille, 2);
}

void tCroissant (Valeurs *tabValeurs, int Taille)
{
    int i, j;
    Valeurs temp;
    for (i = 1; i < Taille; i++)
    {
        temp = tabValeurs[i];
        for(j = i; j > 0 && tabValeurs[j-1].temps > temp.temps ; j--)
        {
            tabValeurs[j] = tabValeurs[j-1];

        }
        tabValeurs[j] = temp;
    }
    enregistrerFichier(tabValeurs, Taille, 3);
}

void tDecroissant (Valeurs *tabValeurs, int Taille)
{
    int i, j;
    Valeurs temp;
    for (i = 1; i < Taille; i++)
    {
        temp = tabValeurs[i];
        for(j = i; j > 0 && tabValeurs[j-1].temps < temp.temps ; j--)
        {
            tabValeurs[j] = tabValeurs[j-1];

        }
        tabValeurs[j] = temp;
    }
    enregistrerFichier(tabValeurs, Taille, 4);
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

void enregistrerFichier(Valeurs *tabValeurs, int Taille, int a)
{
    int i;
    if (a==1)
    {
        FILE* fichier = NULL;
        fichier = fopen("trieCroissantPoul.csv", "w");
        for (i = 0; i<Taille; i++)
        {
            fprintf(fichier, "%d", tabValeurs[i].temps);
            fprintf(fichier,";%d\n", tabValeurs[i].poul);
        }
    }
    else if (a==2)
    {
        FILE* fichier = NULL;
        fichier = fopen("trieDecroissantPoul.csv", "w");
        for (i = 0; i<Taille; i++)
        {
            fprintf(fichier, "%d", tabValeurs[i].temps);
            fprintf(fichier,";%d\n", tabValeurs[i].poul);
        }
    }

    else if (a==3)
    {
        FILE* fichier = NULL;
        fichier = fopen("trieCroissantTemps.csv", "w");
        for (i = 0; i<Taille; i++)
        {
            fprintf(fichier, "%d", tabValeurs[i].temps);
            fprintf(fichier,";%d\n", tabValeurs[i].poul);
        }
    }


    else if (a==4)
    {
        FILE* fichier = NULL;
        fichier = fopen("trieDeroissantTemps.csv", "w");
        for (i = 0; i<Taille; i++)
        {
            fprintf(fichier, "%d", tabValeurs[i].temps);
            fprintf(fichier,";%d\n", tabValeurs[i].poul);
        }
    }

    return;
}

void rechercheDonnee (Valeurs *tabValeurs, int Taille)
{
	tCroissant(tabValeurs, Taille);
    int tempsIndiquer, a=1, b=Taille, m=0;
    printf("Indiquer la valeur du temps\n");
    scanf ("%i", &tempsIndiquer);
    tCroissant(tabValeurs, Taille);
    do
    {
        m = (a+b)/2;
        printf("%i   %i\n", b, m);
        if( m > tempsIndiquer)
        {
            b=m;
        }
        else if ( m < tempsIndiquer)
        {
             a=m;
        }
        else if ( m == tempsIndiquer)
        {
            printf("temps = %d; poul = %d", tabValeurs[m-1].temps, tabValeurs[m-1].poul);
            return;
        }
        else if ( a == tempsIndiquer)
        {
            printf("temps = %d; poul = %d", tabValeurs[a-1].temps, tabValeurs[a-1].poul);
            return;
        }
         else if ( b == tempsIndiquer)
        {
            printf("temps = %d; poul = %d", tabValeurs[b-1].temps, tabValeurs[b-1].poul);
            return;
        }

    }while (b-a>1);
    printf("temps = %d; poul = %d", tabValeurs[m].temps, tabValeurs[m].poul);
}

/*void afficherMoyenne(Valeurs *tabValeurs, int Taille)
{
	tCroissant(tabValeurs, Taille);
	FILE* fichier = NULL;
	fichier = fopen("trieCroissantTemps", "r");
	int t1, t2, i, p, sommme, moyenne;
	printf("Entrer l'intervalle de temps souhaiter :\n");
	printf("temps de debut \n");
	scanf("%i", &t1);
	printf("temps de fin \n");
	scanf("%i", &t2);
	for (i = t1; i<=t2; i++)
	{
		p = tabValeurs[i-1].poul;
		somme = somme + p;
		printf("%i %i\n", i, p);
	}
	moyennne = somme / (t2-t1);
	printf("moyenne = %i", moyenne);
}*/
