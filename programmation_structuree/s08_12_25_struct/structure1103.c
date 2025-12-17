#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "structures.h"
void lectureEtudiant(Etudiant *etudiant){
  char bufferNom[50];
  printf("saisir nom etudiant\n");
  fgets(bufferNom, 50, stdin);
  bufferNom[strcspn(bufferNom, "\n")] = '\0';
  strcpy(etudiant->nom, bufferNom);
  printf("saisir note1\n");
  scanf("%f", &etudiant->note1);
  printf("saisir note2\n");
  scanf("%f", &etudiant->note2);
  etudiant->moyenne = (etudiant->note1+etudiant->note2)/2;
}
void afficheEtudiant(Etudiant etudiant){
  printf("Nom: %s\n", etudiant.nom);
  printf("Note1: %f\n", etudiant.note1);
  printf("Note2: %f\n", etudiant.note2);
  printf("Moyenne: %f\n", etudiant.moyenne);
}
int meilleurEtudiant(Etudiant *etudiants, int taille){
  int meilleur = 0;
  for (int i = 0; i < taille; i++) {
    if((etudiants+i)->moyenne > (etudiants+meilleur)->moyenne){
      meilleur = i;
    }
  }
  return meilleur;
}
char s[5] = "abc";
A. strlen(s) vaut 5
B. s[3] == '\0'
C. s[4] == '\0'
int main(int argc, char const *argv[]) {
  Etudiant etudiants[10];
  for (int i = 0; i < 10; i++) {
    lectureEtudiant(&etudiants[i]);
  }
  int meilleurEtu = meilleurEtudiant(etudiants,  10);
  printf("Meilleur etudiant: \n");
  afficheEtudiant(etudiants[meilleurEtu]);
  return 0;
}
