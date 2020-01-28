#include <stdio.h>
#include <stdlib.h>
#include "lDoubleChain.h"


int main()
{
    lDoubleChain * liste = iniDoubleChain();
    printf("Gestion de listes doublement chainees\n\n");

    addLastNumber(liste, 1);
    addBeginNumber(liste, 2);
    addBeginNumber(liste, 3);
    addLastNumber(liste, 4);
    addLastNumber(liste, 5);
    addBeginNumber(liste, 6);


    afficherListe(liste);

    printf("Recuperation de 3 premiers elements et 3 derniers\n");
    for(int i = 0; i < 3; i ++)
        printf("Premier element : %i\n" ,getFirstNumber(liste));

    for(int i = 0; i < 3; i ++)
        printf("Dernier element : %i\n" ,getLastNumber(liste));
    return 0;
}
