#include <stdio.h>

int main() {
    // --------------------------
    // 1️⃣ Pointeurs simples
    // --------------------------
    int myAge0 = 43; // variable entiere

    printf("Valeur de myAge0: %d\n", myAge0);
    printf("Adresse de myAge0: %p\n\n", &myAge0);

    int myAge = 43;
    int* ptr = &myAge; // ptr contient l'adresse de myAge

    printf("Valeur de myAge: %d\n", myAge);
    printf("Adresse de myAge: %p\n", &myAge);
    printf("Adresse de myAge via ptr: %p\n\n", ptr);


    // --------------------------
    // 2️⃣ Tableaux et affichage de leurs valeurs
    // --------------------------
    int myNumbers[4] = {25, 50, 75, 100};

    printf("Contenu du tableau myNumbers:\n");
    for (int i = 0; i < 4; i++) {
        printf("myNumbers[%d] = %d\n", i, myNumbers[i]);
    }
    printf("\n");

    // Affichage des adresses des elements
    int myNumbers1[4] = {25, 50, 75, 100};
    printf("Adresses des elements de myNumbers1:\n");
    for (int j = 0; j < 4; j++) {
        printf("&myNumbers1[%d] = %p\n", j, &myNumbers1[j]);
    }
    printf("\n");


    // --------------------------
    // 3️⃣ Pointeur vers un tableau
    // --------------------------
    int myNumbers0[4] = {25, 50, 75, 100};
    printf("Premier element via pointeur: %d\n", *myNumbers0);

    int myNumbers4[4] = {25, 50, 75, 100};
    printf("Deuxieme element via pointeur: %d\n", *(myNumbers4 + 1));
    printf("Troisieme element via pointeur: %d\n", *(myNumbers4 + 2));
    printf("Quatrieme element via pointeur: %d\n", *(myNumbers4 + 3));
    

    #include <stdio.h>


    int myNumber[4] = {25, 50, 75, 100};
    int *pt = myNumber; // pointeur sur le premier element
    int i;

    // Afficher toutes les valeurs en une seule ligne
    printf("Valeurs du tableau: ");
    for (i = 0; i < 4; i++) {
        printf("%d ", *(pt + i));
    }
    printf("\n");

    // Modifier les deux premiers elements via pointeur
    *pt = 13;
    *(pt + 1) = 17;

    // Afficher toutes les valeurs apres modification
    printf("Valeurs apres modification: ");
    for (i = 0; i < 4; i++) {
        printf("%d ", *(pt + i));
    }
    printf("\n");

    return 0;
}

