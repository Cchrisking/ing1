#define TAILLE_PHYSIQUE 10
/*
struct Point{
float x, y, z;
int rouge, vert, bleu;
char lettre;
};
/*Alias typedef*/
/*
typedef int entier;
typedef char symbole;
typedef struct Point Point3D; //legale
typedef struct Point Point; //legale
*/
typedef struct Point{
  float x, y, z;
  int rouge, vert, bleu;
  char lettre;
}Point3D; // ou Point
/*
basique
*/
struct NombreRationnel_v1{
  int mumerateur;
  int denominateur;
};
/**
*structure anonyme avec 3 variables
*/
struct{
  int mumerateur;
  int denominateur;
}rationel1, rationel2, rationel3;
/*
*typedef definir alias nouveau nom de variables
*
*/
/**
* definition alias separee

struct NombreRationnel_v3{
  int mumerateur;
  int denominateur;
};*/
/*definition d'alias  NombreRationnel3*/
//typedef struct NombreRationnel_v3 NombreRationnel3;
/*
*ananyme avec typedef
*
*/
typedef struct{
  int mumerateur;
  int denominateur;
}NombreRationnel3;
/*
*meilleur version combinee
*/
typedef struct NombreRationnel_v3{
  int mumerateur;
  int denominateur;
}NombreRationnel;
/*==============================================================================
Exercice 1101 — Créer et afficher un point 2D
Pour comprendre la définition et l’utilisation de base d’une structure :
— Définir une structure Point2D contenant deux entiers x et y.
— Lire les coordonnées au clavier, puis afficher le point au format (x, y).
*/
typedef struct{
  int x, y;
}Point2D; // ou Point
// Lecture valeur au clavier
void lecturePoint(Point2D *point);
// Affiche le point au format (x, y)
void affichePoint(Point2D point);
/*==============================================================================
Exercice 1102 — Calculer une distance
A fin d’apprendre à passer des structures en paramètre et à retourner un résultat :
— Reprendre la structure Point2D.
— Écrire une fonction float distance(Point2D a, Point2D b) qui calcule et renvoie la dis-
tance entre deux points.
— Tester la fonction avec des exemples.
*/
float distance(Point2D a, Point2D b);
/*==============================================================================
Exercice 1103 — Gérer un tableau d’étudiants
Pour manipuler un tableau de structures et comprendre la logique de boucle :
— Définir une structure Etudiant avec nom, note1, note2, moyenne.
— Lire les informations de 10 étudiants, calculer leur moyenne, puis les afficher.
— Afficher le meilleur étudiant
*/
typedef struct{
  char* nom;
  float note1;
  float note2;
  float moyenne;
}Etudiant;
void lectureEtudiant(Etudiant *etudiant);
void afficheEtudiant(Etudiant etudiant);
int meilleurEtudiant(Etudiant *etudiants, int taille);
