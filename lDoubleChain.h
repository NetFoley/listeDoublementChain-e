#ifndef LDOUBLECHAIN_H_INCLUDED
#define LDOUBLECHAIN_H_INCLUDED


typedef struct nbrListe{
    int nbr;
    struct nbrListe* next;
    struct nbrListe* previous;
}nbrListe;

typedef struct lDoubleChain{
    int length;
    nbrListe* first;
    nbrListe* last;
}lDoubleChain;



lDoubleChain* iniDoubleChain();
int addBeginNumber(lDoubleChain * liste, int nbr);
int addLastNumber(lDoubleChain * liste, int nbr);
int getLastNumber(lDoubleChain * liste);
int getFirstNumber(lDoubleChain * liste);
void afficherListe(lDoubleChain * liste);

#endif // LDOUBLECHAIN_H_INCLUDED
