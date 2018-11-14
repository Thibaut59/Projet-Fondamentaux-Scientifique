#include <stdio.h>
#include <stdlib.h>
#include "menu.h"  
#include "donnees.h"
#include "actions.h"
//
int main()
{
	system("cls");// it remove all text in console 
	system("color 0c");// it change font color to black and the background color to red 
	int Taille = compterLigne();// it initialize the value of "Taille"
	Valeurs valeurs;// it create a variable named "valeurs" with "Valeurs" type
	lireFichier(valeurs, Taille);// it launch the function "lireFichier"
//
	return 0;
}
