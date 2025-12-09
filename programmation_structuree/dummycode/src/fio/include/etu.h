#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct etudiant{
  int id;
  double note_moyenne;
  char* nom;
}Etudiant;
void initialisation_etudiant(Etudiant* etu,int id, char* nom double note);
void list_etudiants(const Etudiant* etudiants, int size);
void saisir_etudiant(Etudiant* etu);
