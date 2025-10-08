/*//! Points clés de cette version avancée :
Tableau de structures pour plusieurs objets.
Fonctions pour afficher la classe.
Ajouter un nouvel étudiant facilement.
Rechercher un étudiant par nom.
Trier les étudiants (tri possible par note ou âge). */
#include <stdio.h>
#include <string.h>

typedef struct {
    char nom[30];
    int age;
    float note;
} Etudiant;

void afficherClasse(Etudiant classe[], int n) {
    printf("---- Liste des étudiants ----\n");
    for (int i = 0; i < n; i++) {
        printf("%d) %s - %d ans - Note: %.2f\n",
               i+1, classe[i].nom, classe[i].age, classe[i].note);
    }
}

int main() {
    Etudiant classe[10]; // tableau de 10 étudiants
    int n = 5;  // nombre d'étudiants actuels

    // Initialisation
    classe[0] = (Etudiant){"Aya", 21, 17.5};
    classe[1] = (Etudiant){"Rania", 22, 14.3};
    classe[2] = (Etudiant){"Youssef", 23, 15.8};
    classe[3] = (Etudiant){"Sara", 20, 18.2};
    classe[4] = (Etudiant){"Karim", 24, 13.9};

    afficherClasse(classe, n);

    // Ajouter un étudiant
    classe[n++] = (Etudiant){"Hassan", 23, 15.2};

    printf("\nAprès ajout d'un étudiant :\n");
    afficherClasse(classe, n);

    // Rechercher par nom
    char recherche[30] = "Sara";
    for (int i = 0; i < n; i++) {
        if (strcmp(classe[i].nom, recherche) == 0) {
            printf("\nTrouvé: %s - %d ans - Note: %.2f\n",
                   classe[i].nom, classe[i].age, classe[i].note);
        }
    }

    return 0;
}
