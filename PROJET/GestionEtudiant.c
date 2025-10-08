/* // TODO PROJET : Gestion des etudiants (CRUD) — C sans fichiers
📝 Objectif :
Creer un programme pour :
!Ajouter un etudiant (Create)
!Afficher tous les etudiants (Read)
!Modifier un etudiant (Update)
!Supprimer un etudiant (Delete) */

#include<stdio.h>
#include<string.h>
typedef struct {
    int id;
    char nom[40];
    char prenom[40];
    int age;
    float note;
} Etudiant;

Etudiant classe[100];
int n = 0;

//!Fonction Ajout D'un Etudiant
 void ajouterEtudiant(){
     printf("\n==========Ajout D'un Etudiant==========\n");
    if(n>=100){
    printf("La classe est pleine!\n");
    return;
    }

classe[n].id = n + 1;  // commence à 1
printf("Veuillez entrer nom d'etudiant %d : " ,n+1);
scanf(" %[^\n]" , classe[n].nom);
printf("Veuillez entrer  prenom d'etudiant %d : " ,n+1);
scanf(" %[^\n]" , classe[n].prenom);
printf("Veuillez entrer  l'age d'etudiant %d : " ,n+1);
if(scanf("%d", &classe[n].age) != 1) { /* gérer l’erreur */ }
printf("Veuillez entrer  note d'etudiant %d : " ,n+1);
if(scanf("%f", &classe[n].note) != 1) { /* gérer l’erreur */ }
n++;
}
//!Fonction Affichage Des Etudiants
void afficherClasse() {
     printf("\n==========Affichage Des Etudiants==========\n");
     printf("%-5s %-15s %-15s %-5s %-6s\n", "ID", "Nom", "Prenom", "Age", "Note");
for (int i = 0; i < n; i++) {
    printf("%-5d %-15s %-15s %-5d %-6.2f\n",
           classe[i].id,
           classe[i].nom,
           classe[i].prenom,
           classe[i].age,
           classe[i].note);
}
}
//!Fonction Rechercher Etudiant Par ID
void rechercherEtudiantParID(){
     printf("\n==========Rechercher Etudiant Par ID==========\n");
     int trouve=0;
    int chercheID;
    printf("Veuillez entrer id a rechercher : ");
    if (scanf("%d", &chercheID) != 1) {
    printf("Erreur : vous devez entrer un nombre.\n");
    while(getchar() != '\n'); // vider le buffer
    return;
}
    for (int i = 0; i < n; i++) {
    if(chercheID==classe[i].id) {
        printf("L'etudiant est trouve \n ");
     printf("%-5s %-15s %-15s %-5s %-6s\n", "ID", "Nom", "Prenom", "Age", "Note");
         printf("%-5d %-15s %-15s %-5d %-6.2f\n",
           classe[i].id, classe[i].nom, classe[i].prenom, classe[i].age, classe[i].note);
    trouve = 1;
    break;
    } 
    } if (!trouve) printf("Ce ID d'etudiant n'existe pas\n");}

//!Fonction Rechercher Etudiant Par NOM
void rechercherEtudiantParNOM(){
     printf("\n==========Rechercher Etudiant Par NOM==========\n");
    char chercheNom[40];
    int trouve = 0;
    printf("Veuillez entrer nom a rechercher : ");
    scanf("%s" , chercheNom);
    for (int i = 0; i < n; i++) {
    if (strcasecmp(classe[i].nom, chercheNom) == 0) {
        printf("L'etudiant est trouve \n ");
     printf("%-5s %-15s %-15s %-5s %-6s\n", "ID", "Nom", "Prenom", "Age", "Note");
        printf("%-5d %-15s %-15s %-5d %-6.2f\n",
               classe[i].id, classe[i].nom, classe[i].prenom, classe[i].age, classe[i].note);
        trouve = 1;
        break;
    }
} if (!trouve) printf("Ce nom d'etudiant n'existe pas\n");
}

//!Fonction pour chercher
int chercheId(int id) {
    for(int i=0 ; i<n ;i++){
        if(classe[i].id==id) 
          return i; }
    return -1; } 

//!Fonction modifier  un Etudiant
void ModifierEtudiant(){
printf("\n==========Modifier un Etudiant==========\n");
int idMod;
printf("Entrez l'ID de l'etudiant a modifier : ");
scanf("%d", &idMod);
int i=chercheId(idMod);
 if (i == -1) {
        printf("Cet ID n'existe pas.\n");
        return;
    }
   // Modification des champs
    printf("Nom actuel : %s\nNouveau nom : ", classe[i].nom);
    scanf(" %[^\n]", classe[i].nom);

    printf("Prenom actuel : %s\nNouveau prenom : ", classe[i].prenom);
    scanf(" %[^\n]", classe[i].prenom);

    printf("Age actuel : %d\nNouvel age : ", classe[i].age);
    scanf("%d", &classe[i].age);

    printf("Note actuelle : %.2f\nNouvelle note : ", classe[i].note);
    scanf("%f", &classe[i].note);

    printf("Etudiant modifié avec succès !\n");
}
//!Fonction Suppression d'un etudiant
void SupprimerEtudiant(){
printf("\n==========Suppression d'un Etudiant==========\n");
int idSup;
printf("Entrez l'ID de l'etudiant a supprimer : ");
scanf("%d", &idSup);
int i=chercheId(idSup);
if(i==-1){
    printf("Cet ID n'existe pas.\n");
    return;
}
for(int j=i ; j<n-1 ;j++){
     classe[j] = classe[j + 1]; 
    }
     n--;
     for (int j = 0; j < n; j++) {
    classe[j].id = j + 1;
}
    printf("Etudiant supprime avec succes !\n");
}

int main() {
int choix;
do{
     printf("\n==========GESTION DES ETUDIANTS==========\n");
     printf("1. Ajouter un etudiant (Create)\n");
     printf("2. Afficher tous les etudiants (Read)\n");
     printf("3. Rechercher par ID\n");
     printf("4. Rechercher par nom\n");
     printf("5. Modifier un etudiant (Update)\n");
     printf("6. Supprimer un etudiant (Delete)\n");
     printf("7. Quitter\n");
     printf("Veuillez entrer votre choix :");
     scanf("%d", &choix);
     switch (choix)
     {
     case 1:  ajouterEtudiant();  break;
     case 2:  afficherClasse(); break;
     case 3:  rechercherEtudiantParID(); break; 
     case 4:  rechercherEtudiantParNOM(); break;
     case 5:  ModifierEtudiant(); break;
     case 6:  SupprimerEtudiant(); break;
     case 7:  printf("Au revoir!\n");  break;
     
     default:  printf("Choix invalide!\n"); break;
     }
} while (choix!=7);
return 0;
}