#include "gestion_stock.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() { 
    Gestion_Stock gestion;// définitions de la structure

    gestion.nbarticles = 0; // définitions  du nombres d'articles a 0

    int repeat = 0;// Variable pour répetition du menu
    int choix = 0; // Variable pour input le choix pour le menu

    int TMPnbarticle = 0;// variable temporaire pour ajouter les artciles

    while (repeat == 0) // répétitions du menu
    {
        printf("1 | Ajouter des articles \n");//affichage du menu
        printf("2 | Afficher les articles \n");
        printf("3 | Rechercher un articles \n");
        printf("4 | Quitter\n");

        printf("Votre choix : ");//input du choix pour menu
        scanf("%d", &choix);

        switch (choix)
        {
        case 1 : // choix 1 : ajouter articles
            printf("Combien d'articles a ajouter ? : ");
            scanf("%d",&TMPnbarticle);// input nombre article à ajouter
            printf("\n");

            for (int i = 0; i < TMPnbarticle; i++)
            {
                ajouterArticles(&gestion);//appel de la fonction ajouterArticles pour le nombres d'articles saisis
            }
        break;
        case 2 : // choix 2 : afficher les articles
            listerArticles(&gestion); // appel de la fonction pour lister les articles
        break;
        case 3 : // choix 3 : Rechercher un article
            rechercherArticles(&gestion); // appel de la fonction pour rechercher les articles
        break;
        case 4 : // choix 4 : quitter le menu
            repeat = 1; // casse de la boucle en cheageant la variable repeat
        break;
        default: // en cas de choix invalide
            printf("\n  Veuillez faire un choix valide ! \n\n"); // message d'erreur
        break;
        }
    }
    printf("    Au revoir o/");
    return 0;
}

/*   Python'kisses  __    ,-.-.  
#      _______    /*_>-<  `. ,'
#  ___/ _____ \__/ /        `
# <____/     \____/       
*/