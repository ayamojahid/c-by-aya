# Projet : Gestion d’un Parc d’Avions dans un Aéroport

## Description
Application console en C pour gérer un aéroport fictif et sa flotte d’avions.  
Fonctionnalités : ajout, modification, suppression, affichage, tri, recherche et statistiques, incluant le calcul du coefficient d’occupation du parc.

---

## Structure du projet

### Structures utilisées
- **Avion**
  - `idAvion` : identifiant unique
  - `modele` : nom du modèle (ex: Boeing 737)
  - `capacite` : nombre maximum de passagers
  - `statut` : "Disponible", "En maintenance", "En vol"
  - `dateEntree` : date d’entrée dans le parc (jour, mois, année)

- **Aeroport**
  - `idAirport` : identifiant unique
  - `nom` : nom de l’aéroport
  - `flotte` : tableau d’avions
  - `nbAvions` : nombre d’avions enregistrés

- **Date**
  - `jour`
  - `mois`
  - `annee`

---

## Fonctions principales

### Gestion des avions
- `AjouteAvion()` : ajoute un ou plusieurs avions
- `AfficheAvion()` : affiche tous les avions
- `ModifierAvion()` : modifie modèle, capacité ou statut
- `SupprimeAvion()` : supprime un avion par ID
- `RechercheParID()` : recherche un avion par ID
- `RechercheParModele()` : recherche un avion par modèle
- `TrierParCapacite()` : tri des avions par capacité
- `TrierParModele()` : tri des avions par nom

### Gestion des aéroports
- `InitialiserAeroport()` : créer un nouvel aéroport
- `AfficherAeroport()` : liste des aéroports
- `AfficherAvionsParAeroport()` : liste des avions d’un aéroport

### Menu
- `MainMenu()` : menu principal
- `MainMenuAvion()` : menu de gestion des avions
- `MainMenuAeroport()` : menu de gestion des aéroports
- `RechercheAvionIdEtModele()` : menu de recherche
- `TrierLesAvionsCapaciteModele()` : menu de tri

### Statistiques
- `Statistique()` :
  - Nombre total d’avions
  - Nombre d’avions par statut
  - Capacité totale de la flotte
  - Avion avec la plus grande et la plus petite capacité
  - Coefficient d’occupation du parc (%% d’avions disponibles)

---

## Exemple d’utilisation

1. Créer un ou plusieurs aéroports.
2. Ajouter des avions dans un ou plusieurs aéroports.
3. Modifier ou supprimer un avion si nécessaire.
4. Afficher les avions ou rechercher par ID / modèle.
5. Trier les avions par capacité ou modèle.
6. Afficher les statistiques et le coefficient d’occupation.

---

## Auteur
Aya Mojahid – Octobre 2025

---

