#include "Header.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    Gestion_Compte compte;

    compte.nbcomptes = 0;

    int repeat = 0;
    int choix = 0;

    while (repeat == 0)
    {
        printf("1 | Creer un compte \n");//affichage du menu
        printf("2 | Faire un depot \n");
        printf("3 | Faire un retrait \n");
        printf("4 | Quitter\n");
        
        printf("Votre choix : ");//input du choix pour menu
        scanf("%d", &choix);   

        switch (choix)
        {
        case 1:
            AjouterCompte(&compte);
        break;

        case 2 :
            FaireDepot(&compte);
        break;  

        case 3 :
            FaireRetrait(&compte);
        break;  

        case 4:
            repeat = 1;
        break;  

        default:
            printf("Veuillez rentrer un choix correcte");
        break;
        }
    }
    return 0;
}

/*  Python'kisses  __     ,-.-.  
#      _______    /°_>-<  `. ,'
#  ___/ _____ \__/ /        `
# <____/     \____/       
*/