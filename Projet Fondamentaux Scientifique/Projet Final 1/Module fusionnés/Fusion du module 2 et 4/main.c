#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "donnees.h"
#include "actions.h"
//
int main()
{
// it remove all text in console
	system("cls");
// it change font color to black and the background color to red	
	system("color 0a");
// it initialize the value of "taille"	
	int taille = compterLigne();
// it create a variable named "valeurs" with "Valeurs" type	
	Valeurs valeurs;
// it launch the function "lireFichier"	
	lireFichier(valeurs, taille);
//
	return 0;
}
