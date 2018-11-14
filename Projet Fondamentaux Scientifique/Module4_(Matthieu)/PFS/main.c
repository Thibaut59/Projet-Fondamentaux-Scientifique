#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "donnees.h"
#include "actions.h"

int main()
{
	system("cls");
	system("color 0c");
	int Taille = compterLigne();
	Valeurs valeurs;
	lireFichier(valeurs, Taille);

	return 0;
}
