#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "donnees.h"
#include "actions.h"

int main()
{
    Valeurs valeurs;
    lireFichier(valeurs);
	afficherMenu();

    return 0;
}
