#include "../include/tableaux.h"
int main(int argc, char const *argv[]) {
  printf("Hello world\n");
  int tableau[N]={0,2,6,3,4,5,9,7};
  int tableauy[N];
  affiche_tableau(tableau);
  /*for(int i=0; i<N; i++){
    tableau[i]=saisie_utilisateur(1, 12);
  }
  affiche_tableau(tableau);
  */
  remplissageAleatoire(tableau, 1, 15);
  remplissageAleatoire(tableauy, 1, 15);
  printf("Tab1: \n");
  affiche_tableau(tableau);
  printf("Tab2: \n");
  affiche_tableau(tableauy);
  int min, max;
  minMaxTableau(&min, &max, tableau);
  printf("Min: %d\nMax: %d\n", min, max);
  int carbon =6;
  if (rechercheValeur(carbon, tableau)){
    printf("Element carbon de valeur %d existe dans le tableau\n", carbon);
  }else{
    printf("Eelement n'existe pas \n");
  }

  int nberror = comparateurTableau(tableau, tableauy);
  printf("Nombre de case different: %d\n", nberror);
  system("clear");
  printf("Screen cleaned\n");
  return 0;
}
