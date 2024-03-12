#include "Header.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void AjouterCompte(Gestion_Compte *Compte){

    char TMPnom[50];
    float TMPsolde;

    Compte->nbcomptes++;

    printf("Rentrer le nom du titulaire du compte : ");
    scanf("%s", &TMPnom);
    strcpy(Compte->comptes[Compte->nbcomptes].nom,TMPnom);
    
    printf("Rentrer le solde du compte : ");
    scanf("%f", &TMPsolde);
    Compte->comptes[Compte->nbcomptes].solde = TMPsolde;

    Compte->comptes[Compte->nbcomptes].numero = Compte->nbcomptes;

    printf("------------------------------\n\n"); //Affichage de l'article qui viens d'etre saisi
    printf("    Nom du titulaire du compte : %s\n", Compte->comptes[Compte->nbcomptes].nom);
    printf("    Soldes du compte : %f\n", Compte->comptes[Compte->nbcomptes].solde);
    printf("    Numero du compte : %d\n\n", Compte->comptes[Compte->nbcomptes].numero);
    printf("------------------------------\n\n");
    
}

void FaireDepot(Gestion_Compte *Compte) {
    
    int TMPnum;
    float TMPdepot;
    int match;

    if (Compte->nbcomptes == 0)
    {
        printf("\n  Aucune compte enregistre. \n\n");
    }else{
        printf("\nQuel est le numero de compte que vous voulez chercher ? : ");
        scanf("%d", &TMPnum);

        for (int i = 0; i <= Compte->nbcomptes; i++)
        {   
            if (TMPnum == Compte->comptes[i].numero)
            {   
                printf("Compte trouve !\n");
                printf("------------------------------\n\n"); //Affichage de l'article qui viens d'etre saisi
                printf("    Nom du titulaire du compte : %s\n", Compte->comptes[i].nom);
                printf("    Soldes du compte : %f\n", Compte->comptes[i].solde);
                printf("    Numero du compte : %d\n\n", Compte->comptes[i].numero);
                printf("------------------------------\n\n");
                printf("Combien voulez-vous deposer ? : ");
                scanf("%f",&TMPdepot);
                Compte->comptes[i].solde = Compte->comptes[i].solde + TMPdepot;
                printf("  Nouveau solde : %f\n\n", Compte->comptes[i].solde);
                match = 1;
            } 
        }
        if (match == 0){
            printf("\n  Compte non trouve\n\n");
        }
    }
}

void FaireRetrait (Gestion_Compte *Compte) {
    
    int TMPnum;
    float TMPdepot;
    int match;

    if (Compte->nbcomptes == 0)
    {
        printf("\n  Aucune compte enregistre. \n\n");
    }else{
        printf("\nQuel est le numero de compte que vous voulez chercher ? : ");
        scanf("%d", &TMPnum);

        for (int i = 0; i <= Compte->nbcomptes; i++)
        {   
            if (TMPnum == Compte->comptes[i].numero)
            {   
                printf("Compte trouve !\n");
                printf("------------------------------\n\n"); //Affichage de l'article qui viens d'etre saisi
                printf("    Nom du titulaire du compte : %s\n", Compte->comptes[i].nom);
                printf("    Soldes du compte : %f\n", Compte->comptes[i].solde);
                printf("    Numero du compte : %d\n\n", Compte->comptes[i].numero);
                printf("------------------------------\n\n");
                printf("Combien voulez-vous retirer ? : ");
                scanf("%f",&TMPdepot);

                if (Compte->comptes[i].solde - TMPdepot < 0)
                {
                    printf("\n  Pas assez de fond\n\n");
                    match = 1;
                }else{
                    Compte->comptes[i].solde = Compte->comptes[i].solde - TMPdepot;
                    printf("  Nouveau solde : %f\n\n", Compte->comptes[i].solde);
                    match = 1;
                }
            } 
        }
        if (match == 0){
            printf("\n  Compte non trouve\n\n");
        }
    }    
}