#include "util.h"
#include <stdio.h>
#include <string.h>

void lireChaine(char* buffer, int taille) {
    fgets(buffer, taille, stdin);
    buffer[strcspn(buffer, "\n")] = 0; // Supprime le retour à la ligne
}