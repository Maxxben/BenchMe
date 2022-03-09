#include <stdio.h>
#include "fonctions.h"

int main(int argc, char **argv) {

    char *fichier = argv[1];
    
    printf("\n* Traitement en cours... *\n");
    traitement(fichier);
    printf("\n* Traitement terminé *\n");

}