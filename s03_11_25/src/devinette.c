#include "../include/tableaux.h"
void remplirTableau(int* tab, int inf, int sup){
  for(int i=0; i<N ; i++){
    tab[i]=saisie_utilisateur(inf, sup);
  }
}
void devine(int* tab, int inf, int sup){
  for(int i=0; i<N; i++){
    tab[i]=saisie_utilisateur(inf, sup);
  }
}
int main(int argc, char const *argv[]) {
  int inf, sup;
  printf("Saisissez la valeur de la borne inferieur:\n");
  scanf("%d", &inf);
  printf("\nSaisissez la valeur de la borne inferieur:\n");
  scanf("%d", &sup);
  int tableau[N];
  int tabdevinez[N];
  remplissageAleatoire(tableau, inf, sup);
  affiche_tableau(tableau);
  int start = 0;
  printf("\nAppuyez sur n'importe quelle touche pour continuez:\n");
  scanf("%d", &start);
  if(start != 0){
    system("clear");
    devine(tabdevinez, inf, sup);
  }
  if(comparateurTableau(tableau, tabdevinez)!=N){
    printf("echec");
  }
  printf("\nTableau initiale:\n");
  affiche_tableau(tableau);
  printf("\nVotre saisie:\n");
  affiche_tableau(tabdevinez);
  return 0;
}
