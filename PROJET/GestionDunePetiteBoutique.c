#include<stdio.h>
#include <string.h>
int main() {
    // Tableau de 20 noms de produits
    char noms[20][30] = {  // 20 noms, chacun peut contenir jusqu'à 30 lettres
        "Pain", "Lait", "Fromage", "Beurre", "Eau",
        "Jus", "Coffe", "The", "Sucre", "Sel",
        "Riz", "Pates", "Tomates", "Oignons", "Pommes",
        "Poulet", "Poisson", "Chocolat", "Yaourt", "Farine"
    };

    // Tableau des prix correspondants
    float prix[20] = {
        5, 5, 10, 8, 3,
        6, 12, 10, 4, 2,
        15, 10, 7, 5, 6,
        30, 40, 8, 6, 10
    };

    // Tableau des stocks disponibles
    int stock[20] = {
        40, 60, 40, 50, 100,
        30, 25, 45, 70, 90,
        80, 50, 60, 55, 45,
        20, 15, 35, 40, 70
    };
    int choix=0;
    float total = 0;
    do{
        printf ("1. Voir les produits\n");
        printf("2. Acheter un produit\n");
        printf("3. Voir le total\n");
        printf("4. Quitter\n");
        printf("veuillez entrer votre choix : ");
        scanf("%d" , &choix);
        

        if(choix==1) {
            printf("\n>> Vous avez choisi : Voir les produits\n");
            printf("\n===== LISTE DES PRODUITS =====\n");
           printf("\n%-15s | %-8s | %-6s\n", "Nom", "Prix (DH)", "Stock");
          printf("------------------------------------------------\n");
         for (int i = 0; i < 20; i++) {
    printf("%-15s | %-8.2f | %-6d\n", noms[i], prix[i], stock[i]);
         }

        }
        if(choix==2) {
            printf("\n===== ACHETER UN PRODUIT=====\n");
            char produit[30];
            int trouve = 0;
            int quantite;
            printf("Veuillez entrer le nom de produit a acheter : ");
            scanf("%s" , produit);
            for(int i=0 ;i<20 ; i++){
                if(strcasecmp(produit , noms[i])==0) {
                    trouve=1;
                    printf("\nCombien voulez-vous acheter ? ");
                    scanf("%d" , &quantite);
                    if(quantite<=stock[i]) {
                        stock[i]=stock[i]-quantite;
                        float prixACHAT;
                        prixACHAT=quantite*prix[i];
                        total=total+prixACHAT;
                        total = total + prixACHAT;
printf("Achat réussi ! Vous avez acheté %d %s pour %.2f DH\n", quantite, noms[i], prixACHAT);
                        break;
                    }
                    else {
                        printf("Stock insuffisant pour %s\n", noms[i]);
                        break;
                    }
                    
                }
            }
            if(!trouve){
          printf("Produit introuvable !\n");
            }


        }
         else if (choix == 3) {
            printf("\n>>> Total des achats : %.2f DH\n", total);
        }
    }while (choix != 4); // Tant que l'utilisateur ne choisit pas 4, on continue
    printf("\nMerci pour votre visite !\n");
    return 0;
    }
   
    
