#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "GenerationCode.h"


//Creation de la fonction menu
void menu ()
{
    int c;
    int LED;
printf("=====================================\n");
printf("=| 1. Chenillard                   |=\n");
printf("=| 2. Une LED sur deux             |=\n");
printf("=| 3. Allumage complet             |=\n");
printf("=| 4. Une LED sur trois            |=\n");
printf("=| 5. LED au choix                 |=\n");
printf("=====================================\n");
scanf("%d",&c);
printf("Vous avez choisi le %i \n",c);

if (c == 5){
    printf("Quel LED voulez vous allumer ? Comprise entre [2 et 11]\n ");
    scanf("%d",&LED);
}
 switch (c)
 {
 case 1:
    chenillard();
    break;
 case 2:
    uneledsurdeux();
    break ;
 case 3:
    allumagecomplet();
    break;
 case 4:
    unesurtrois();
    break;
 case 5:
    ledauchoix(LED);
    break;
    default:
        return 0;
 }
}
