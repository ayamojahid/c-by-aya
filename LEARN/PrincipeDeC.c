#include <stdio.h>  // Inclut les fonctions d'entrée/sortie : printf, scanf

int main() {

    // -----------------------------
    // 1️⃣ Déclaration des variables
    // -----------------------------
    int age;       // Variable pour stocker l'âge de l'utilisateur
    int nombre;    // Variable pour stocker un nombre que l'utilisateur va saisir
    char reponse;  // Variable pour stocker la réponse O/N
    int compteur;  // Variable utilisée pour les boucles (compter)

    // -----------------------------
    // 2️⃣ Saisie utilisateur avec scanf
    // -----------------------------
    printf("Entrez votre age : ");   // Affiche un message pour demander l'âge
    scanf("%d", &age);               // Lit un entier et le stocke dans 'age'
                                      // %d = format entier, &age = adresse mémoire
    printf("Votre age est : %d\n", age); // Affiche l'âge saisi

    // -----------------------------
    // 3️⃣ Conditions simples
    // -----------------------------
    if(age >= 18) {                  // Si l'âge est supérieur ou égal à 18
        printf("Tu es majeur.\n");  // Exécute ce bloc
    } else {                         // Sinon
        printf("Tu es mineur.\n");  // Exécute ce bloc
    }

    // -----------------------------
    // 4️⃣ Conditions avec opérateurs logiques
    // -----------------------------
    if(age >= 13 && age <= 19) {    // && = ET logique, les 2 conditions doivent être vraies
        printf("Tu es adolescent.\n"); // Affiche si âge entre 13 et 19 inclus
    }

    if(age < 13 || age > 60) {      // || = OU logique, au moins une condition vraie
        printf("Tu es soit un enfant, soit un senior.\n"); // Affiche si âge < 13 ou > 60
    }

    // -----------------------------
    // 5️⃣ Boucle for (incrémentation)
    // -----------------------------
    printf("\nBoucle for : compter de 1 à 5\n");
    for(int i = 1; i <= 5; i++) {   // i++ = i = i + 1
        printf("i = %d\n", i);      // Affiche la valeur de i à chaque tour
    }

    // -----------------------------
    // 6️⃣ Boucle while (décrémentation)
    // -----------------------------
    compteur = 5;                   // Initialisation du compteur à 5
    printf("\nBoucle while : compter de 5 à 1\n");
    while(compteur > 0) {           // Tant que compteur > 0
        printf("compteur = %d\n", compteur); 
        compteur--;                 // Décrémentation : compteur = compteur - 1
    }

    // -----------------------------
    // 7️⃣ Boucle do-while (au moins 1 fois)
    // -----------------------------
    compteur = 0;                    // Réinitialisation du compteur
    printf("\nBoucle do-while : compter de 0 à 2\n");
    do {
        printf("compteur = %d\n", compteur);
        compteur++;                 // Incrémentation : compteur = compteur + 1
    } while(compteur <= 2);         // Vérifie la condition après l'exécution

    // -----------------------------
    // 8️⃣ Saisie multiple et somme avec incrémentation
    // -----------------------------
    int somme = 0;                   // Variable pour stocker la somme des nombres

    printf("\nCombien de nombres veux-tu additionner ? ");
    scanf("%d", &nombre);            // Lit combien de nombres l'utilisateur veut entrer

    for(int i = 1; i <= nombre; i++) {
        int n;                       // Variable temporaire pour chaque nombre
        printf("Entrez le nombre %d : ", i);
        scanf("%d", &n);             // Lit le nombre
        somme += n;                  // Ajoute n à la somme (somme = somme + n)
    }
    printf("La somme totale est : %d\n", somme);

    // -----------------------------
    // 9️⃣ Exemple avec choix O/N
    // -----------------------------
    printf("\nVeux-tu continuer ? (O/N) ");
    scanf(" %c", &reponse);          // Lit un caractère, espace avant %c pour ignorer '\n'

    if(reponse == 'O' || reponse == 'o') {  // || = OU, accepte 'O' ou 'o'
        printf("Tu as choisi de continuer !\n");
    } else {
        printf("Tu as choisi d'arrêter.\n");
    }

    // -----------------------------
    // Fin du programme
    // -----------------------------
    printf("\nMerci d'avoir utilisé ce programme !\n");

    return 0;  // Indique que le programme s'est terminé correctement
}
