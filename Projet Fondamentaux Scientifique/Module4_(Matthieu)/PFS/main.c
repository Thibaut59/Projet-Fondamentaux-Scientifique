#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "donnees.h"
#include "actions.h"

int main()
{
	int Taille = compterLigne();
	Valeurs valeurs;
	lireFichier(valeurs, Taille);

	return 0;
}
