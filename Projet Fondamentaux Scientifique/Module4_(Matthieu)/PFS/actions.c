#include <stdio.h>
#include <stdlib.h>
#include "donnees.h"
#include "actions.h"
//
void tri(Valeurs* tabValeurs, int Taille)
{
// it display the instructions
	int choice;
	printf("Comment voulez vous trier le fichier ? \n");
	printf("Taper 1 pour trier en fonction du poul\n");
	printf("Taper 2 pour trier en fonction du temps\n");
	scanf("%i",&choice);
// the switch is used to decide what mode it launch it terms of "choice" value
	switch(choice)
	{
		case 1:
		printf("Comment voulez vous trier le fichier ? \n");
		printf("Taper 1 pour trier de maniere Croissante\n");
		printf("Taper 2 pour trier de maniere Decroissante\n");
		scanf("%i",&choice);
		switch (choice)
		{
			case 1:
// case 1.1 : it launch "pCroissant" function (sorted increasing by pulse)
			pCroissant(tabValeurs, Taille);
			break;
			case 2:
// case 1.2 : it launch "pDecroissant" function (sorted descending by pulse)
			pDecroissant(tabValeurs, Taille);
			break;
// if any value matches with any case, a error message is displayed
			default:
			printf("Valeur entree invalide\n");
			return;
		}
		break;
		case 2:
		printf("Comment voulez vous trier le fichier ? \n");
		printf("Taper 1 pour trier de maniere Croissante\n");
		printf("Taper 2 pour trier de maniere Decroissante\n");
		scanf("%i",&choice);
		switch(choice)
		{
			case 1:
// case 2.1 : it launch "pCroissant" function (sorted increasing by time)
			tCroissant(tabValeurs, Taille);
			break;
			case 2:
// case 2.2 : it launch "pDecroissant" function (sorted descending by time)
			tDecroissant(tabValeurs, Taille);
			break;
// if any value matches with any case, a error message is displayed
			default:
			printf("Valeur entree invalide\n");
			return;
			break;
		}
		break;
// if any value matches with any case, a error message is displayed
		default:
		printf("Valeur entree invalide\n");
		return;
	}
	return;
}
// insert sort wich sorts so increasing by pulse
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
// it launch the save of the sort and confirm with a message 
	enregistrerFichier(tabValeurs, Taille, 1);
	printf("fichier des donnes cree\n");
}
// insert sort wich sorts so descending by pulse
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
// it launch the save of the sort and confirm with a message 
	enregistrerFichier(tabValeurs, Taille, 2);
	printf("fichier des donnes cree\n");
}
// insert sort wich sorts so increasing by time
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
// it launch the save of the sort and confirm with a message 
	enregistrerFichier(tabValeurs, Taille, 3);
	printf("fichier des donnes cree\n");
}
// insert sort wich sorts so descending by time
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
// it launch the save of the sort and confirm with a message 
	enregistrerFichier(tabValeurs, Taille, 4);
	printf("fichier des donnes cree\n");
}
// it display the values contents in file
void afficherFichier(Valeurs* tabValeurs, int Taille)
{
	for ( int i = 0; i < Taille; i++)
	{
		printf("%i", tabValeurs[i].temps);
		printf("  ");
		printf("%i\n", tabValeurs[i].poul);
	}
}
// it save the values in file according to the sort
void enregistrerFichier(Valeurs *tabValeurs, int Taille, int a)
{
	int i;
// it save the values in "trieCroissantPoul.csv" file (increasing by pulse)
	if (a==1)
	{
		FILE* fichier = NULL;
		fichier = fopen("trieCroissantPoul.csv", "w");
		for (i = 0; i<Taille; i++)
		{
			fprintf(fichier, "%d", tabValeurs[i].temps);
			fprintf(fichier,";%d\n", tabValeurs[i].poul);
		}
		fclose(fichier);
	}
// it save the values in "trieDecroissantPoul.csv" file (descending by pulse)
	else if (a==2)
	{
		FILE* fichier = NULL;
		fichier = fopen("trieDecroissantPoul.csv", "w");
		for (i = 0; i<Taille; i++)
		{
			fprintf(fichier, "%d", tabValeurs[i].temps);
			fprintf(fichier,";%d\n", tabValeurs[i].poul);
		}
		fclose(fichier);
	}
// it save the values in "trieCroissantTemps.csv" file (increasing by time)
	else if (a==3)
	{
		FILE* fichier = NULL;
		fichier = fopen("trieCroissantTemps.csv", "w");
		for (i = 0; i<Taille; i++)
		{
			fprintf(fichier, "%d", tabValeurs[i].temps);
			fprintf(fichier,";%d\n", tabValeurs[i].poul);
		}
		fclose(fichier);
	}
// it save the values in "trieDeroissantTemps.csv" file (descending by time)
	else if (a==4)
	{
		FILE* fichier = NULL;
		fichier = fopen("trieDeroissantTemps.csv", "w");
		for (i = 0; i<Taille; i++)
		{
			fprintf(fichier, "%d", tabValeurs[i].temps);
			fprintf(fichier,";%d\n", tabValeurs[i].poul);
		}
		fclose(fichier);
	}
	return;
}
// it is a dichotomous which seek a time value and give his pulse value
int rechercheDonnee (Valeurs *tabValeurs, int Taille, int t)
{
// appeal "tCroissant" function to sort the value before the researh
	tCroissant(tabValeurs, Taille);
	int tempsIndiquer, a=0, b=Taille, m=0;
// it is the research code used when you call the seek mode
	if ( t == NULL)
	{
		printf("Indiquer la valeur du temps\n");
		scanf ("%i", &tempsIndiquer);
		do
		{
			m = (a+b)/2;
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
				printf("temps = %d; poul = %d\n", tabValeurs[m-1].temps, tabValeurs[m-1].poul);
				return m-1;
			}
			else if ( a == tempsIndiquer)
			{
				printf("temps = %d; poul = %d\n", tabValeurs[a-1].temps, tabValeurs[a-1].poul);
				return a-1;
			}
			else if ( b == tempsIndiquer)
			{
				printf("temps = %d; poul = %d\n", tabValeurs[b-1].temps, tabValeurs[b-1].poul);
				return b-1;
			}
		}
		while (b-a>1);
	}
// it is the custom research code used by "afficherMoyenne" function
	else
	{
		tempsIndiquer = t;
		do
		{
			m = (a+b)/2;
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
				return m-1;
			}
			else if ( a == tempsIndiquer)
			{
				return a-1;
			}
			else if ( b == tempsIndiquer)
			{
				return b-1;
			}

		}
		while (b-a>1);
	}
	return 0;
}
// this function is used to calcul the average between two bounds
void afficherMoyenne(Valeurs *tabValeurs, int Taille)
{
	int t1, t2, moyenne, index1, somme = 0;
	printf("Entrer l'intervalle de temps souhaiter :\n");
	printf("temps de debut \n");
	scanf("%i", &t1);
	printf("temps de fin \n");
	scanf("%i", &t2);
// initialization of "index1". it used "rechercheDonnee" to find index of "t1" value
	index1 = rechercheDonnee(tabValeurs, Taille, t1);
	while (tabValeurs[index1].temps<=t2)
	{
		somme = somme + tabValeurs[index1].poul;
		index1++;
	}
	moyenne = somme / (t2-t1+1);
	printf("moyenne = %i", moyenne);
}
// it display how many values it has in the file
void afficherNbDonnees ()
{
	int nb = compterLigne();
	printf("Il y a %i valeurs au total", nb);
}
// it display what is the minimum and the maximum of pluse value
void afficherMinMax (Valeurs *tabValeurs, int Taille)
{
	int poulMin, poulMax;
	pCroissant(tabValeurs, Taille);
	poulMin = tabValeurs[0].poul ;
	pDecroissant(tabValeurs, Taille);
	poulMax = tabValeurs[0].poul ;
	printf("Le poul minimum est : %i\nLe poul maximum est : %i\n", poulMin, poulMax);
}
// it display all value content in the file
void afficherValeurs (Valeurs *tabValeurs, int Taille)
{
	int i = 0, j = (Taille)/5, k = (2*Taille)/5, l = (3*Taille)/5, m= (4*Taille)/5;
	int c = 221;

	while (i<=(Taille-1)/5)
	{
		printf("%c %i ; %i %c", c, tabValeurs[i].temps, tabValeurs[i].poul, c);
		printf("%i ; %i %c", tabValeurs[j].temps, tabValeurs[j].poul, c);
		printf("%i ; %i %c", tabValeurs[k].temps, tabValeurs[k].poul, c);
		printf("%i ; %i %c", tabValeurs[l].temps, tabValeurs[l].poul, c);
		printf("%i ; %i %c\n", tabValeurs[m].temps, tabValeurs[m].poul, c);
		i++, j++, k++, l++, m++;
	}
	printf("%c", c);
}
