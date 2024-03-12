#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

    // Vérification si au moins un argument a été fourni
    if (argc > 1) {
        // Affichage d'un message personnalisé avec le premier argument
        printf("Bonjour, %s!\n", argv[1]);
    } else {
        // Message par défaut si aucun argument n'est fourni
        printf("Bonjour le monde!\n");
    } 

    // Fin du programme
    exit(EXIT_SUCCESS);
}