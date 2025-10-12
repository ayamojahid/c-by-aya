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
#include <time.h>

// ----- STRUCTURES -----
typedef struct
{
    int jour;
    int mois;
    int annee;
} Date;

typedef struct
{
    int idAvion;
    char modele[40];
    int capacite;
    char statut[40];
    Date dateEntree;
} Avion;

typedef struct
{
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
void InitialiserAeroport(void);
void AfficherAeroport(void);
void AfficherAvionsParAeroport(void);

// Menus
void MainMenu(void);
void MainMenuAvion(void);
void MainMenuAeroport();
;
void RechercheAvionIdEtModele(void);
void TrierLesAvionsCapaciteModele(void);
void Statistique(void);

// ----- VARIABLES GLOBALES -----
Avion avions[100];
int nbAvions = 0;
Aeroport aeroports[10]; // max 10 aéroports
int nbAeroports = 0;

// ----- MAIN -----
int main(void)
{
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
        printf("1. Gestion de l'aeroport\n");
        printf("2. Gestion des avions\n");
        printf("3. Statistiques \n");
        printf("0. Quitter\n");
        printf("Veuillez entrer votre choix: ");
        scanf("%d", &choix);

        switch (choix)
        {
        case 1:
            MainMenuAeroport();
            break;
        case 2:
            MainMenuAvion();
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

//! Menu des aeroport
void MainMenuAeroport(void)
{
    int choix;
    do
    {
        printf("\n=== GESTION DES AEROPORTS ===\n");
        printf("1. Initialiser un aeroport\n");
        printf("2. Afficher les aeroports\n");
        printf("3. Afficher les avions d'un aeroport\n");
        printf("0. Retour au menu principal\n");
        printf("Entrez votre choix : ");
        scanf("%d", &choix);

        switch (choix)
        {
        case 1:
            InitialiserAeroport();
            break;
        case 2:
            AfficherAeroport();
            break;
        case 3:
            AfficherAvionsParAeroport();
            break;
        case 0:
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

//! initalisation de aeroport
void InitialiserAeroport(void)
{
    if (nbAeroports >= 10)
    {
        printf(" Nombre maximum d'aeroports atteint !\n");
        return;
    }
    Aeroport a;
    a.idAirport = nbAeroports + 1;
    printf("\n=== INITIALISER UN NOUVEL AEROPORT ===\n");
    printf("Entrez le nom de l'aeroport : ");
    scanf(" %[^\n]s", a.nom);
    a.nbAvions = 0; // au début, aucun avion
    aeroports[nbAeroports] = a;
    nbAeroports++;
    printf(" Aeroport '%s' cree avec succes (ID: %d)\n", a.nom, a.idAirport);
}

//! Affichage des aeroport
void AfficherAeroport(void)
{
    if (nbAeroports == 0)
    {
        printf("\n Aucun aeroport enregistre.\n");
        return;
    }

    printf("\n=== LISTE DES AEROPORTS ===\n");
    for (int i = 0; i < nbAeroports; i++)
    {
        printf("ID: %d | Nom: %s | Nombre d'avions: %d\n",
               aeroports[i].idAirport, aeroports[i].nom, aeroports[i].nbAvions);
    }
}

//! Fonction ajouter une avion ou plusieur


void AjouteAvion(void)
{
    int idAeroportChoisi;
    Avion a; // avion temporaire

    a.idAvion = nbAvions + 1;

    printf("\n===== AJOUTER UN AVION =====\n");

    printf("Veuillez entrer le modele d'avion : ");
    scanf(" %[^\n]s", a.modele);

    printf("Veuillez entrer la capacite de l'avion : ");
    scanf("%d", &a.capacite);

    printf("Veuillez entrer le statut de l'avion : ");
    scanf(" %[^\n]s", a.statut);

    // 🕒 Date automatique
    time_t t = time(NULL);
    struct tm *now = localtime(&t);
    a.dateEntree.jour = now->tm_mday;
    a.dateEntree.mois = now->tm_mon + 1;
    a.dateEntree.annee = now->tm_year + 1900;


    printf("\nChoisissez l'ID de l'aeroport ou ajouter cet avion : ");
    scanf("%d", &idAeroportChoisi);

    //  Copier dans le tableau principal
    avions[nbAvions] = a;

    //  Ajouter aussi à la flotte de cet aéroport
    aeroports[idAeroportChoisi - 1].flotte[aeroports[idAeroportChoisi - 1].nbAvions] = a;
    aeroports[idAeroportChoisi - 1].nbAvions++;

    nbAvions++;

    printf("\n Avion ajoute avec succes a l'aeroport %s !\n",
           aeroports[idAeroportChoisi - 1].nom);
}

//! Fonction afficher une avion ou plusieur
void AfficheAvion(void)
{
    printf("\n====== AFFICHAGES DES AVIONS ======\n");
       if (nbAvions == 0) {
        printf("\nAucun avion enregistré.\n");
        return;
    }
    for (int i = 0; i < nbAvions; i++)
    {
        printf("ID: %d | Modele: %s | Capacite: %d | Statut: %s | Date entree: %02d/%02d/%04d\n",
               avions[i].idAvion,
               avions[i].modele,
               avions[i].capacite,
               avions[i].statut,
               avions[i].dateEntree.jour,
               avions[i].dateEntree.mois,
               avions[i].dateEntree.annee);
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
        }
    }
    if (!trouve)
    {
        printf("ID invalide ");
    }
}

//! Recherche avion par modele
void RechercheParModele(void)
{
    printf("\n========== RECHERCHE AVION PAR MODELE ==========\n");
    char modeleSearch[30];
    int trouve = 0;
    printf("Veuillez entrer le modele a rechercher: ");
    scanf(" %[^\n]", modeleSearch);
    for (int i = 0; i < nbAvions; i++)
    {
        if (strcasecmp(modeleSearch, avions[i].modele) == 0)
        {
            printf("\nModele trouve\n");
            printf("ID: %d | Modele: %s | Capacite: %d | Statut: %s\n",
                   avions[i].idAvion, avions[i].modele,
                   avions[i].capacite, avions[i].statut);
            trouve = 1;
            break;
        }
    }
    if (!trouve)
    {
        printf("ID invalide ");
    }
}

//! Trier avion par capacite
void TrierParCapacite(void)
{
    printf("\n========== TRIER LES AVIONS PAR CAPACITE ==========\n");
    Avion temp;
    for (int i = 0; i < nbAvions - 1; i++)
    {
        for (int j = 0; j < nbAvions - 1 - i; j++)
        {
            if (avions[j].capacite > avions[j + 1].capacite)
            {
                // Échange complet des structures Avion
                temp = avions[j];
                avions[j] = avions[j + 1];
                avions[j + 1] = temp;
            }
        }
    }
    printf("Tri par capacite termine \n");
}

//! Trier avion par modele
void TrierParModele(void)
{
    printf("\n========== TRIER LES AVIONS PAR MODELE ==========\n");
    Avion temp;
    for (int i = 0; i < nbAvions - 1; i++)
    {
        for (int j = 0; j < nbAvions - 1 - i; j++)
        {
            if (strcasecmp(avions[j].modele, avions[j + 1].modele) > 0)
            {
                temp = avions[j];
                avions[j] = avions[j + 1];
                avions[j + 1] = temp;
            }
        }
    }
    printf("\nTri par modele termine \n");
}

//! Afficher les avions d’un aéroport choisi
void AfficherAvionsParAeroport(void)
{
    if (nbAeroports == 0)
    {
        printf("\nAucun aeroport enregistre.\n");
        return;
    }

    printf("\n=== LISTE DES AEROPORTS ===\n");
    for (int i = 0; i < nbAeroports; i++)
    {
        printf("%d. %s (%d avions)\n",
               aeroports[i].idAirport, aeroports[i].nom, aeroports[i].nbAvions);
    }

    int choix;
    printf("\nEntrez l'ID de l'aeroport pour voir ses avions : ");
    scanf("%d", &choix);

    // Vérification de l’ID
    if (choix < 1 || choix > nbAeroports)
    {
        printf("ID invalide.\n");
        return;
    }

    Aeroport *a = &aeroports[choix - 1];

    printf("\n=== AVIONS DANS L'AEROPORT : %s ===\n", a->nom);

    if (a->nbAvions == 0)
    {
        printf("Aucun avion enregistre dans cet aeroport.\n");
        return;
    }

    for (int i = 0; i < a->nbAvions; i++)
    {
        Avion av = a->flotte[i];
        printf("ID: %d | Modele: %s | Capacite: %d | Statut: %s\n",
               av.idAvion, av.modele, av.capacite, av.statut);
    }
}

void Statistique(void) {
    if (nbAvions == 0) {
        printf("\nAucun avion dans le parc.\n");
        return;
    }

    int dispo = 0;       // Nombre d’avions disponibles
    int maintenance = 0; // Nombre d’avions en maintenance
    int enVol = 0;       // Nombre d’avions en vol
    int capaciteTotale = 0;

    Avion maxCapacite = avions[0];
    Avion minCapacite = avions[0];

    for (int i = 0; i < nbAvions; i++) {
        // Compter par statut
        if (strcasecmp(avions[i].statut, "Disponible") == 0) dispo++;
        else if (strcasecmp(avions[i].statut, "En maintenance") == 0) maintenance++;
        else if (strcasecmp(avions[i].statut, "En vol") == 0) enVol++;

        capaciteTotale += avions[i].capacite;

        // Vérifier capacité max/min
        if (avions[i].capacite > maxCapacite.capacite) maxCapacite = avions[i];
        if (avions[i].capacite < minCapacite.capacite) minCapacite = avions[i];
    }

    // Affichage
    printf("\n=== STATISTIQUES DU PARC ===\n");
    printf("Nombre total d'avions : %d\n", nbAvions);
    printf("Avions disponibles : %d\n", dispo);
    printf("Avions en maintenance : %d\n", maintenance);
    printf("Avions en vol : %d\n", enVol);
    printf("Capacite totale de la flotte : %d\n", capaciteTotale);
    printf("Avion avec la plus grande capacite : %s (%d)\n", maxCapacite.modele, maxCapacite.capacite);
    printf("Avion avec la plus petite capacite : %s (%d)\n", minCapacite.modele, minCapacite.capacite);

    // Calcul du coefficient d’occupation
    float coefficient = ((float)dispo / nbAvions) * 100.0;
    printf("Coefficient d'occupation du parc (%% d'avions disponibles) : %.2f%%\n", coefficient);
}

