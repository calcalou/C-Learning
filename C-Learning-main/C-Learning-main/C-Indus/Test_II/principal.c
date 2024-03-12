#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "operations_mathematiques.h"

int main() {

    int a = 0;
    int b = 0;

    printf("\nPremier chiffre a calculer : ");
    scanf("%d",&a);
    printf("Deuxieme chiffre a calculer : ");
    scanf("%d",&b);

    int somme = additionner(a, b);
    int difference = soustraire(a, b);
    int multiply = multiplier(a, b);

    printf("\nSomme : %d\n", somme);
    printf("Difference : %d\n", difference);
    printf("Produits : %d\n\n",multiply);

    return 0;
}