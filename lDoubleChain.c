#include "lDoubleChain.h"
#include <stdio.h>
#include <stdlib.h>

lDoubleChain* iniDoubleChain()
{
    lDoubleChain *liste = malloc(sizeof(*liste));
    liste->length = 0;
    liste->first = NULL;
    liste->last = NULL;
    return liste;
}

int addBeginNumber(lDoubleChain * liste, int nbr)
{
    nbrListe * crtNbr = malloc(sizeof(*crtNbr));

    if(liste == NULL || crtNbr == NULL)
        return 1; //Renvoie une erreur

    crtNbr->nbr = nbr;
    crtNbr->next = liste->first;

    if(liste->first != NULL)
        liste->first->previous = crtNbr;

    if(liste->length == 0)
        liste->last = crtNbr;
    liste->first = crtNbr;
    liste->length++;

    //Quitter la fonction
    return 0;
}

int addLastNumber(lDoubleChain * liste, int nbr)
{
    nbrListe * crtNbr = malloc(sizeof(*crtNbr));

    if(liste == NULL || crtNbr == NULL)
        return 1; //Renvoie une erreur

    crtNbr->nbr = nbr;
    crtNbr->previous = liste->last;

    if(liste->last != NULL)
        liste->last->next = crtNbr;

    if(liste->length == 0)
        liste->first = crtNbr;
    liste->last = crtNbr;
    liste->length++;

    //Quitter la fonction
    return 0;
}

int getFirstNumber(lDoubleChain * liste)
{
    if(liste == NULL)
        exit(EXIT_FAILURE);

    int nbr = 0;

    nbrListe * crtNbr = liste->first;

    if(liste != NULL && liste->first != NULL)
    {
        nbr = crtNbr->nbr;
        liste->first = crtNbr->next;
        free(crtNbr);
        liste->length--;
    }

    return nbr;
}

int getLastNumber(lDoubleChain * liste)
{
    if(liste == NULL)
        exit(EXIT_FAILURE);

    int nbr = 0;

    nbrListe * crtNbr = liste->last;

    if(liste != NULL && liste->last != NULL)
    {
        nbr = crtNbr->nbr;
        liste->last = crtNbr->previous;
        free(crtNbr);
        liste->length--;
    }

    return nbr;
}

void afficherListe(lDoubleChain * liste)
{
    nbrListe * crtNbr = liste->first;
    for(int i = 0; i < liste->length; i++)
    {
        printf("Nombre %i de la liste : %i\n", i, crtNbr->nbr);
        if(crtNbr->next == NULL)
            exit(EXIT_FAILURE);
        crtNbr = crtNbr->next;
    }
}
