#include "../include/tableaux.h"
int saisie_utilisateur(int borneInf, int borneSup){
  int saisie;
  do{
    printf("Saisissez une valeur entre %d et %d\n", borneInf, borneSup);
    scanf("%d\n", &saisie);
  }while (saisie<borneInf || saisie>borneSup);
  return saisie;
}
void remplissageAleatoire(int *tableau, int inf, int sup){
  srand(time(NULL));
  for(int i=0; i<N; i++){
    tableau[i] = inf+rand()%sup;
  }
}
void affiche_tableau(int *tableau){
  for (int i = 0; i<N; i++){
    printf("%d\n", tableau[i]);
  }
  printf("\n");
}
void minMaxTableau(int *min, int *max, int* tableau){
*min = tableau [0];
*max = tableau [0];
for (int i = 0; i < N; i++) {
  if (tableau[i]<*min) {
    *min=tableau[i];
  }
  if (tableau[i]> *max) {
    *max=tableau[i];
  }
}
}
int rechercheValeur(int valeur, int tableau[]){
  int booleen=0;
  for(int i = 0; i<N; i++){
    if(tableau[i]==valeur){
      return 1;
      //booleen ++;
    }
  }
  return 0;
}
int comparateurTableau(int *tab1, int *tab2){
  int nbdifference =0;
  for(int i=0; i<N; i++){
    if(tab1[i]!=tab2[i]){
      nbdifference++;
    }
  }
  return nbdifference;
}
