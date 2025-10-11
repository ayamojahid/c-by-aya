#ifndef FONCTIONS_H
#define FONCTIONS_H

typedef struct {
    int jour;
    int mois;
    int annee;
} Date;

typedef struct {
    int idAvion ;
    char modele[40];
    int capacite;
    char statut[40];
    struct Date dateEntree;
} Avion;

typedef struct {
    int idAirport;
    char nom[50];
    struct Avion flotte[100]; // tableau des avions
    int nbAvions;             // combien d’avions sont enregistrés
} Aeroport;
#endif
