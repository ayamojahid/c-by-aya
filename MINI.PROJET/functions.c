// TODO Projet : Gestion d’un Parc d’Avions dans un Aéroport
/*
-----------------------------------------------------------
Projet : Gestion d’un Parc d’Avions dans un Aéroport
-----------------------------------------------------------
Description :
Ce programme permet de gérer un aéroport fictif et son parc d’avions.
L’utilisateur peut :
  - Ajouter, modifier, supprimer et afficher les avions.
  - Gérer les informations de l’aéroport.
  - Rechercher et trier les avions.
  - Calculer le coefficient d’occupation du parc (fonction bonus).

Langage : C
Auteur : Aya
Date : Octobre 2025
-----------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ----- STRUCTURES -----
typedef struct {
    int jour;
    int mois;
    int annee;
} Date;

typedef struct {
    int idAvion;
    char modele[40];
    int capacite;
    char statut[40];
    Date dateEntree;
} Avion;

typedef struct {
    int idAirport;
    char nom[50];
    Avion flotte[100];
    int nbAvions;
} Aeroport;

// ----- PROTOTYPES -----

// Avion
void AjouteAvion(void);
void AfficheAvion(void);
void ModifierAvion(void);
void SupprimeAvion(void);
void RechercheParID(void);
void RechercheParModele(void);
void TrierParCapacite(void);
void TrierParModele(void);

// Aeroport
void InitialiserAeroport(Aeroport *aeroport, int id, const char *nom);


// Menus
void MainMenu(void);
void MainMenuAvion(void);
void MenuAeroport(Aeroport *aeroport);
void RechercheAvionIdEtModele(void);
void TrierLesAvionsCapaciteModele(void);
void Statistique(void);

// ----- VARIABLES GLOBALES -----
Avion avions[100];
int nbAvions = 0;
Aeroport aeroports[10]; // max 10 aéroports
int nbAeroports = 0;

// ----- MAIN -----
int main(void) {
    MainMenu();
    return 0;
}

//! Menu principale
void MainMenu(void)
{
    int choix;
    do
    {
        printf("  \n=== MENU PRINCIPAL ===\n");
        printf("1. Gestion des avions\n");
        printf("2. Gestion de l'aeroport\n");
        printf("3. Statistiques / Bonus\n");
        printf("0. Quitter\n");
        printf("Veuillez entrer votre choix: ");
        scanf("%d", &choix);

        switch (choix)
        {
        case 1:
            MainMenuAvion();
            break;
        case 2:
            MainMenuAeroport();
            break;
        case 3:
            Statistique();
            break;
        case 0:
            printf("Au revoir\n");
            break;
        default:
            printf("Choix invalide.\n");
        }
    } while (choix != 0);
}

//! Menu de Gestion des avions
void MainMenuAvion(void)
{
    int choix;
    do
    {
        printf("\n=== GESTION DES AVIONS ===\n");
        printf("1. Ajouter un avion (ou plusieurs) \n");
        printf("2. Afficher la liste des avions\n");
        printf("3. Modifier un avion (modele, capacite, statut)\n");
        printf("4. Supprimer un avion\n");
        printf("5. Rechercher un avion (par id ou par modele)\n");
        printf("6. Trier les avions (par capacite, par modele alphabetique)\n");
        printf("7 Quitter\n");
        printf("0. Retour au menu principal\n");
        printf("Veuillez entrer votre choix: ");
        scanf("%d", &choix);

        switch (choix)
        {
        case 1:
            AjouteAvion();
            break;
        case 2:
            AfficheAvion();
            break;
        case 3:
            ModifierAvion();
            break;
        case 4:
            SupprimeAvion();
            break;
        case 5:
            RechercheAvionIdEtModele();
            break;
        case 6:
            TrierLesAvionsCapaciteModele();
            break;
        case 7:
            printf("Au revoir\n");
            break;
        case 0:
            break;
        default:
            printf("Choix invalide.\n");
        }
    } while (choix != 0);
}

//! Menu de rechercher une avion par ID ou modele
void RechercheAvionIdEtModele(void)
{
    int choix;
    do
    {
        printf("\n=== RECHERCHE AVION PAR ID OU MODELE ===\n");
        printf("1. Recherche par ID\n");
        printf("2. Recherche par modele\n");
        printf("0. Retour au menu des avion\n");
        printf("Veuillez entrer votre choix: ");
        scanf("%d", &choix);
        switch (choix)
        {
        case 1:
            RechercheParID();
            break;
        case 2:
            RechercheParModele();
            break;
        case 0:
            break;
        default:
            printf("Choix invalide.\n");
        }
    } while (choix != 0);
}

//! Menu de Trier avions par capacite ou modele
void TrierLesAvionsCapaciteModele(void)
{
    int choix;
    do
    {
        printf("\n=== TRIER AVION PAR CAPACITER OU MODELE ===\n");
        printf("1. Trier par capacite\n");
        printf("2. Trier par modele\n");
        printf("0. Retour au menu des avion\n");
        printf("Veuillez entrer votre choix: ");
        scanf("%d", &choix);
        switch (choix)
        {
        case 1:
            TrierParCapacite();
            break;
        case 2:
            TrierParModele();
            break;
        case 0:
            break;
        default:
            printf("Choix invalide.\n");
        }
    } while (choix != 0);
}

//! Fonction ajouter une avion ou plusieur
void AjouteAvion(void)
{
    printf("\n=====AJOUTER UNE AVION OU PLUSIEURS=====\n");
    printf("Veuillez entrer le modele d'avion : ");
    scanf(" %[^\n]s", avions[nbAvions].modele);
    printf("\nVeuillez entrer la capacite  d'avion : ");
    scanf("%d", &avions[nbAvions].capacite);
    printf("\nVeuillez entrer statut d'avion : ");
    scanf(" %[^\n]s", avions[nbAvions].statut);
    printf("\nAjout avec succes\n");
    avions[nbAvions].idAvion = nbAvions + 1;
    nbAvions++;
}
//! Fonction afficher une avion ou plusieur
void AfficheAvion(void)
{
        printf("\n====== AFFICHAGES DES AVIONS ======\n");
    for (int i = 0; i < nbAvions; i++)
    {
        printf("ID: %d | Modele: %s | Capacite: %d | Statut: %s\n",
               avions[i].idAvion, avions[i].modele, avions[i].capacite, avions[i].statut);
    }
}

//! Fonction modifier une avion
void ModifierAvion(void)
{
        printf("\n====== MODIFICATION D'UNE AVION ======\n");
    int choixID;
    printf("Veuillez entrer id pour modifier :");
    scanf("%d", &choixID);
    for (int i = 0; i < nbAvions; i++)
    {
        if (avions[i].idAvion == choixID)
        {
            printf("Veuillez entrer nouveau modele: ");
            scanf(" %[^\n]s", avions[i].modele);
            printf("Veuillez entrer nouvelle capacite: ");
            scanf("%d", &avions[i].capacite);
            printf("Veuillez entrer nouvelle statue: ");
            scanf(" %[^\n]s", avions[i].statut);
            printf("\nModifier avec succes\n");
            break;
        }
        else
        {
            printf("Aucun id existe\n");
        }
    }
}

//! Fonction supprimer une avion
void SupprimeAvion(void)
{
    printf("\n========== SUPPRESSION D'UNE AVION ==========\n");
    int IdSupprime;
    printf("Veuillez entrer l'ID de l'avion a supprimer : ");
    scanf("%d", &IdSupprime);
    int trouve = 0; // indicateur pour savoir si on a trouvé l'avion
    for (int i = 0; i < nbAvions; i++)
    {
        if (avions[i].idAvion == IdSupprime)
        {
            // Décaler les avions suivants
            for (int j = i; j < nbAvions - 1; j++)
            {
                avions[j] = avions[j + 1];
            }
            nbAvions--; // réduire le nombre d'avions
            // Réattribuer les IDs pour rester consécutifs
            for (int k = 0; k < nbAvions; k++)
            {
                avions[k].idAvion = k + 1;
            }
            printf("\nID supprime avec succes.\n");
            trouve = 1;
            break;
        }
    }
    if (!trouve)
    {
        printf("ID non valide.\n");
    }
}

//! Recherche avion par ID
void RechercheParID(void)
{
    printf("\n========== RECHERCHE AVION PAR ID ==========\n");
    int idSearch;
    int trouve = 0;
    printf("Veuillez entre ID a rechercher: ");
    scanf("%d", &idSearch);
    for (int i = 0; i < nbAvions; i++)
    {
        if (avions[i].idAvion == idSearch)
        {
        printf("\nID trouve\n");
        printf("ID: %d | Modele: %s | Capacite: %d | Statut: %s\n",
               avions[i].idAvion, avions[i].modele,
               avions[i].capacite, avions[i].statut);
        trouve = 1;
        break;
    }}
    if (!trouve)
    {
        printf("ID invalide ");
    }
}

//!Recherche avion par modele
void RechercheParModele(void) {
    printf("\n========== RECHERCHE AVION PAR MODELE ==========\n");
    char modeleSearch[30];
    int trouve=0;
    printf("Veuillez entrer le modele a rechercher: ");
    scanf(" %[^\n]" , modeleSearch);
    for(int i=0 ; i<nbAvions ; i++) {
        if(strcasecmp(modeleSearch,avions[i].modele)==0) {
        printf("\nModele trouve\n");
        printf("ID: %d | Modele: %s | Capacite: %d | Statut: %s\n",
               avions[i].idAvion, avions[i].modele,
               avions[i].capacite, avions[i].statut);
               trouve=1;
               break;
        }}
        if(!trouve) {
            printf("ID invalide ");
         }
        }

//!Trier avion par capacite
void TrierParCapacite(void) {
    printf("\n========== TRIER LES AVIONS PAR CAPACITE ==========\n");
    Avion temp;
    for (int i = 0; i < nbAvions - 1; i++) {
        for (int j = 0; j < nbAvions - 1 - i; j++) {
            if (avions[j].capacite > avions[j + 1].capacite) {
                // Échange complet des structures Avion
                temp = avions[j];
                avions[j] = avions[j + 1];
                avions[j + 1] = temp;
            }
        }
    }
    printf("Tri par capacite termine \n");
}

//!Trier avion par modele
void TrierParModele(void) {
    printf("\n========== TRIER LES AVIONS PAR MODELE ==========\n");
    Avion temp;
    for(int i=0 ; i<nbAvions-1 ;i++) {
        for (int j=0 ; j<nbAvions-1-i ; j++) {
         if(strcasecmp(avions[j].modele,avions[j+1].modele)>0) {
            temp=avions[j];
            avions[j]=avions[j+1];
            avions[j+1]=temp;
         }
        }
    }
        printf("\nTri par modele termine \n");
}


//!Menu de l'aeoroport
void MenuAeroport(Aeroport *aeroport) {
    int choix;
    char nomTmp[50];
    do {
        printf("\n=== MENU AEROPORT ===\n");
        printf("1. Initialiser l'aéroport\n");
        printf("2. Afficher les informations de l'aéroport\n");
        printf("0. Retour au menu principal\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                printf("Nom de l'aéroport : ");
                scanf(" %[^\n]", nomTmp);
                InitialiserAeroport(aeroport, 1, nomTmp); // ID automatique simple
                printf("Aéroport initialisé ✅\n");
                break;
            case 2:
                AfficheAeroport(*aeroport);
                break;
            case 0:
                printf("Retour au menu principal\n");
                break;
            default:
                printf("Choix invalide.\n");
        }

    } while (choix != 0);
}

// ----- Fonctions -----
void InitialiserAeroport(Aeroport *aeroport, int id, const char *nom) {
    aeroport->idAirport = id;
    strncpy(aeroport->nom, nom, 50);
    aeroport->nbAvions = 0; // flotte vide au départ
}

void AfficheAeroport(Aeroport aeroport) {
    printf("\n=== Informations de l'aéroport ===\n");
    printf("ID : %d\n", aeroport.idAirport);
    printf("Nom : %s\n", aeroport.nom);
    printf("Nombre d'avions : %d\n", aeroport.nbAvions);

    if (aeroport.nbAvions > 0) {
        printf("\n--- Flotte d'avions ---\n");
        for (int i = 0; i < aeroport.nbAvions; i++) {
            printf("ID: %d | Modele: %s | Capacite: %d | Statut: %s\n",
                   aeroport.flotte[i].idAvion,
                   aeroport.flotte[i].modele,
                   aeroport.flotte[i].capacite,
                   aeroport.flotte[i].statut);
        }
    } else {
        printf("Aucun avion dans la flotte.\n");
    }
}

void Statistique(void) {}
/* 
void MainMenuAeroport(void) {
    int choix;
    Aeroport aeroport;       // Déclaration d'un aéroport
    aeroport.nbAvions = 0;   // Initialisation du nombre d'avions

    do {
        printf("\n=== MENU GESTION DE L'AEROPORT ===\n");
        printf("1. Initialiser l'aeroport (nom et ID)\n");
        printf("2. Afficher les informations de l'aeroport et sa flotte\n");
        printf("3. Ajouter un avion à la flotte\n");
        printf("4. Modifier un avion de la flotte\n");
        printf("5. Supprimer un avion de la flotte\n");
        printf("6. Rechercher un avion dans la flotte (par ID ou modele)\n");
        printf("0. Retour au menu principal\n");
        printf("Veuillez entrer votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                InitialiserAeroport(&aeroport);
                break;
            case 2:
                AfficheAeroport(aeroport);
                break;
            case 3:
                AjouterAvionAeroport(&aeroport);
                break;
            case 4:
                ModifierAvionAeroport(&aeroport);
                break;
            case 5:
                SupprimeAvionAeroport(&aeroport);
                break;
            case 6:
                RechercheAvionAeroport(aeroport);
                break;
            case 0:
                printf("Retour au menu principal\n");
                break;
            default:
                printf("Choix invalide, veuillez reessayer.\n");
        }

    } while (choix != 0);
}

void InitialiserAeroport(Aeroport *aeroport) {
    printf("\n=== Initialisation de l'aeroport ===\n");
    aeroport->idAirport = 1; // ou générer automatiquement si tu veux plusieurs aéroports
    printf("Veuillez entrer le nom de l'aeroport : ");
    scanf(" %[^\n]", aeroport->nom);
    aeroport->nbAvions = 0;
    printf("Aeroport %s initialise avec succes \n", aeroport->nom);
}

void AfficheAeroport(Aeroport aeroport) {
    printf("\n=== Informations de l'aeroport ===\n");
    printf("ID Aeroport : %d\n", aeroport.idAirport);
    printf("Nom : %s\n", aeroport.nom);
    printf("Nombre d'avions : %d\n", aeroport.nbAvions);

    if (aeroport.nbAvions > 0) {
        printf("\n--- Flotte d'avions ---\n");
        for (int i = 0; i < aeroport.nbAvions; i++) {
            printf("ID: %d | Modele: %s | Capacite: %d | Statut: %s\n",
                   aeroport.flotte[i].idAvion,
                   aeroport.flotte[i].modele,
                   aeroport.flotte[i].capacite,
                   aeroport.flotte[i].statut);
        }
    } else {
        printf("Aucun avion dans la flotte.\n");
    }
}

void AjouterAvionAeroport(Aeroport *aeroport) {
    if (aeroport->nbAvions >= 100) {
        printf("La flotte est pleine !\n");
        return;
    }

    printf("\n=== Ajouter un avion ===\n");
    printf("Modele : ");
    scanf(" %[^\n]", aeroport->flotte[aeroport->nbAvions].modele);

    printf("Capacite : ");
    scanf("%d", &aeroport->flotte[aeroport->nbAvions].capacite);

    printf("Statut : ");
    scanf(" %[^\n]", aeroport->flotte[aeroport->nbAvions].statut);

    aeroport->flotte[aeroport->nbAvions].idAvion = aeroport->nbAvions + 1;
    aeroport->nbAvions++;

    printf("Avion ajouté avec succès ✅\n");
}

void ModifierAvionAeroport(Aeroport *aeroport) {
    int id;
    printf("\n=== Modifier un avion ===\n");
    printf("ID de l'avion à modifier : ");
    scanf("%d", &id);

    int trouve = 0;
    for (int i = 0; i < aeroport->nbAvions; i++) {
        if (aeroport->flotte[i].idAvion == id) {
            printf("Nouveau modele : ");
            scanf(" %[^\n]", aeroport->flotte[i].modele);

            printf("Nouvelle capacite : ");
            scanf("%d", &aeroport->flotte[i].capacite);

            printf("Nouveau statut : ");
            scanf(" %[^\n]", aeroport->flotte[i].statut);

            printf("Modification effectuée ✅\n");
            trouve = 1;
            break;
        }
    }
    if (!trouve) {
        printf("Aucun avion avec cet ID.\n");
    }
}

void SupprimeAvionAeroport(Aeroport *aeroport) {
    int id;
    printf("\n=== Supprimer un avion ===\n");
    printf("ID de l'avion à supprimer : ");
    scanf("%d", &id);

    int trouve = 0;
    for (int i = 0; i < aeroport->nbAvions; i++) {
        if (aeroport->flotte[i].idAvion == id) {
            // Décaler les avions suivants
            for (int j = i; j < aeroport->nbAvions - 1; j++) {
                aeroport->flotte[j] = aeroport->flotte[j + 1];
            }
            aeroport->nbAvions--;

            // Réattribuer les IDs pour rester consécutifs
            for (int k = 0; k < aeroport->nbAvions; k++) {
                aeroport->flotte[k].idAvion = k + 1;
            }

            printf("Avion supprimé ✅\n");
            trouve = 1;
            break;
        }
    }
    if (!trouve) {
        printf("Aucun avion avec cet ID.\n");
    }
}

void RechercheAvionAeroport(Aeroport aeroport) {
    int choix;
    printf("\n=== Recherche d'un avion dans la flotte ===\n");
    printf("1. Par ID\n");
    printf("2. Par modele\n");
    printf("Veuillez entrer votre choix : ");
    scanf("%d", &choix);

    if (choix == 1) {
        int id;
        printf("ID de l'avion : ");
        scanf("%d", &id);
        int trouve = 0;
        for (int i = 0; i < aeroport.nbAvions; i++) {
            if (aeroport.flotte[i].idAvion == id) {
                printf("ID: %d | Modele: %s | Capacite: %d | Statut: %s\n",
                       aeroport.flotte[i].idAvion,
                       aeroport.flotte[i].modele,
                       aeroport.flotte[i].capacite,
                       aeroport.flotte[i].statut);
                trouve = 1;
                break;
            }
        }
        if (!trouve) printf("Aucun avion avec cet ID.\n");
    } else if (choix == 2) {
        char modele[50];
        printf("Modele de l'avion : ");
        scanf(" %[^\n]", modele);
        int trouve = 0;
        for (int i = 0; i < aeroport.nbAvions; i++) {
            if (strcasecmp(aeroport.flotte[i].modele, modele) == 0) {
                printf("ID: %d | Modele: %s | Capacite: %d | Statut: %s\n",
                       aeroport.flotte[i].idAvion,
                       aeroport.flotte[i].modele,
                       aeroport.flotte[i].capacite,
                       aeroport.flotte[i].statut);
                trouve = 1;
            }
        }
        if (!trouve) printf("Aucun avion avec ce modele.\n");
    } else {
        printf("Choix invalide.\n");
    }
}
 */


