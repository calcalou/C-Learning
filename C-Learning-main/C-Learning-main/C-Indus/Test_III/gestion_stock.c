#include "gestion_stock.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ajouterArticles(Gestion_Stock *Gestion) {
    char TMPnom[50];// variable temporaire nom
    float TMPprix;// variable temporaire prix
    int TMPQTT;// variable temporaire quantité

    printf("Entrez le nom de l'article %d : ",Gestion->nbarticles + 1); //input nom article dans la variable temporaire
    scanf("%s", TMPnom);
    strcpy(Gestion->articles[Gestion->nbarticles].nom, TMPnom); // application dans le tableau de structure a l'aide de la variable temporaire

    printf("Entrez le prix de l'article %d : ",Gestion->nbarticles + 1); //input prix article dans la variable temporaire
    scanf("%f",&TMPprix);
    Gestion->articles[Gestion->nbarticles].prix = TMPprix; // application dans le tableau de structure a l'aide de la variable temporaire

    printf("Entrez la quantite de l'article %d : ",Gestion->nbarticles + 1); //input quantité article dans la variable temporaire
    scanf("%d",&TMPQTT);
    Gestion->articles[Gestion->nbarticles].qunatite = TMPQTT; // application dans le tableau de structure a l'aide de la variable temporaire
    
    printf("------------------------------\n\n"); //Affichage de l'article qui viens d'etre saisi
    printf("Articles %d :\n",Gestion->nbarticles + 1);
    printf("    Nom de l'article %d : %s\n",Gestion->nbarticles + 1, Gestion->articles[Gestion->nbarticles].nom);
    printf("    Prix de l'article %d : %f\n",Gestion->nbarticles + 1, Gestion->articles[Gestion->nbarticles].prix);
    printf("    Quantite de l'article %d : %d\n\n",Gestion->nbarticles + 1, Gestion->articles[Gestion->nbarticles].qunatite);
    printf("------------------------------\n\n");
    Gestion->nbarticles++; // incrémentation du nombre d'article
}

void listerArticles(Gestion_Stock *Gestion){
    if (Gestion->nbarticles == 0) // vérifivation si le nombre d'article est pas null
    {
        printf("\n  Aucune articles enregistre. \n\n");// message d'erreur
    }else{
        printf("\n------Nombre articles totals : %d------\n\n",Gestion->nbarticles);// affichage de la liste des articles
        for (int i = 0; i < Gestion->nbarticles; i++) //boucle pour afficher chaque articles de la structure
        {
            printf(" Nom de l'article %d : %s\n",i + 1, Gestion->articles[i].nom);// affichage de l'article en question en fonction de la variable 'i'
            printf(" Prix de l'article %d : %f\n",i + 1, Gestion->articles[i].prix);
            printf(" Quantite de l'article %d : %d\n\n",i + 1, Gestion->articles[i].qunatite);
            printf("------------------------------\n\n");
        }
    }
}

void rechercherArticles(Gestion_Stock *Gestion){
    
    char TMPnom[20]; //variable temporaire nom pour rechercher le nom d'article
    int charComp; //variable pour le résultat du strcmp()
    int correspondence = 0; //variable pour compter le nombre de correspondance

    if (Gestion->nbarticles == 0){// vérification si le nombre d'article est pas null
        printf("\n  Aucune articles enregistre. \n\n");// message d'erreur
    }else{
        printf("\nQuel est le nom de l'article voulez-vous chercher ? : ");// input temporaire pour rechercher le nom
        scanf("%s",&TMPnom);
        printf("\n------------------------------\n\n");// affichage de la liste des articles trouvé
        for (int i = 0; i < Gestion->nbarticles; i++)// boucle incrémental pour comparer chaque article avec la chaine temporaire
        {
            charComp = strcmp(TMPnom, Gestion->articles[i].nom);// vérification de la chaine actuel de la structure en fonction de 'i' avec TMPnom
            if (charComp == 0)// si strcmp() return 0 soit cahine de caractere pareil
            {
                printf(" Nom de l'article %d : %s\n",i + 1, Gestion->articles[i].nom); // affichage de l'article égale a la chaine de caractère
                printf(" Prix de l'article %d : %f\n",i + 1, Gestion->articles[i].prix);
                printf(" Quantite de l'article %d : %d\n\n",i + 1, Gestion->articles[i].qunatite);
                printf("------------------------------\n\n");
                correspondence++;// incrémentaille de la variable de correspondance pour chaque chaine égale
            }
        }
        if (correspondence == 0){ // si aucune correspondance avec les chaines de caractère
            printf("Aucune correspondence trouve...\n\n");// message d'erreur
        }else{
            printf("%d correspondance trouve\n\n",correspondence); // affichafe du nombre de correspondance
        }
    }
}