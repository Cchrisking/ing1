#include "header.h"

int suite[5] = {9,3,7,5,1};

int main(void){
  int i;
  int tab[5] = {1,3,5,7,9};
  //alternatif
  int tab[5] = {2,4,6,8,11};
  printf("----------------------------\n");
  for (i=0 ; i<5 ; i++){
    printf("tab[%d] = %d\n", i, tab[i]);
  }
  printf("tab[%d] = %d\n", i, tab[i]);
  printf("----------------------------\n");
    while (i<5 ){
      printf("tab[%d] = %d\n", i, tab[i]);
      i++;
    }
    printf("tab[%d] = %d\n", i, tab[i]);
    printf("----------------------------\n");
    //// pointer tableau
    int *myptrt = &tab[0];
    for (i=0; i<5; i++){
        *(myptrt + i)+=4;
        }
      for (i=0 ; i<5 ; i++){
        printf("tab[%d] = %d\n", i, tab[i]);
      }
    int matrix[6][6];
    for(int j=0; j<6; j++){
        for (int k =0; k<6; k++){
      // 1. À compléter : initialiser chaque case du tableau à 0
          }
      }
      // 2. À compléter : afficher le tableau sous forme de matrice 6 × 6
      // 3. Lors de l’affichage, remplacer les éléments situés dans les 4 coins par le caractère '*'.
      // 4. Lors de l’affichage, remplacer l’élément de la première ligne,
      //    troisième colonne par le caractère '€' (U+20AC).

}