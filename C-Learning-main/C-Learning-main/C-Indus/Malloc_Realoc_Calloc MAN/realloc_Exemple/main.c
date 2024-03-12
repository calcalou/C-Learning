#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n;

    // Demande à l'utilisateur la taille initiale du tableau
    printf("Entrez la taille initiale du tableau : ");
    scanf("%d", &n);

    // Alloue de la mémoire pour le tableau
    ptr = (int*)malloc(n * sizeof(int));

    // Vérifie si l'allocation de mémoire a réussi
    if (ptr == NULL) {
        printf("Echec de l'allocation de memoire !");
        exit(1); // Quitte le programme avec un code d'erreur
    }

    // Demande à l'utilisateur d'entrer les éléments du tableau
    printf("Entrez les elements du tableau :\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }

    // Affiche les éléments du tableau
    printf("Les elements du tableau sont :\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // Demande à l'utilisateur la nouvelle taille du tableau
    int newSize;
    printf("Entrez la nouvelle taille du tableau : ");
    scanf("%d", &newSize);

    // Redimensionne le tableau en utilisant realloc()
    ptr = (int*)realloc(ptr, newSize * sizeof(int));

    // Vérifie si la réallocation de mémoire a réussi
    if (ptr == NULL) {
        printf("Echec de la reallocation de memoire !");
        exit(1); // Quitte le programme avec un code d'erreur
    }

    // Affiche les éléments du tableau après la réallocation
    printf("Les elements du tableau après la reallocation sont :\n");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", ptr[i]);
    }

    // Libère la mémoire allouée
    free(ptr);

    return 0;
}
