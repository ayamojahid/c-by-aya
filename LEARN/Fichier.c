//! fichier dans C
#include <stdio.h>

int main() {
    FILE *fichier;          // Pointeur pour manipuler le fichier
    char ligne[200];        // Variable pour stocker chaque ligne lue

    // Étape 1 : ouvrir le fichier en lecture
    fichier = fopen("data.txt", "r");

    // Vérifier si le fichier s'est bien ouvert
    if (fichier == NULL) {
        printf(" Erreur : impossible d'ouvrir le fichier data.txt\n");
        return 1;
    }

    // Étape 2 : lire le fichier ligne par ligne
    printf(" Contenu du fichier data.txt :\n\n");
    while (fgets(ligne, sizeof(ligne), fichier) != NULL) {
        printf("%s", ligne);   // Afficher la ligne lue
    }

    // Étape 3 : fermer le fichier
    fclose(fichier);

    printf("\n Lecture terminee avec succes !\n");
    return 0;
}