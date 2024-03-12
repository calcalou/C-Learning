#ifndef GESTION_COMPTE_H
#define GESTION_COMPTE_H

#define MAX_COMPTE 100
 
typedef struct // définitions de la structure Articles
{
    char nom[50];
    int numero;
    float solde;

} Compte;


typedef struct // définitions d'un autre structure en fonction de la première
{             
    Compte comptes[MAX_COMPTE];// cahque case du tabeau 'articles' comprend chaque éléments de la structure 'Articles'
    int nbcomptes;

} Gestion_Compte;

//définitions des fonctions :

void AjouterCompte(Gestion_Compte *Compte);
void FaireDepot(Gestion_Compte *Compte);
void FaireRetrait(Gestion_Compte *Compte);

#endif