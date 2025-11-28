#include <stdio.h>
#define BASE 4
const int base;

float adapter_quantite(int nb_philosophes,double quantite_base ) {
    return quantite_base * nb_philosophes/BASE;
}
int main() {
    float farine =800;
    float eau = 5;
    float levure = 20;
    float sel = 10;
    float beurre = 2;
    int nb_philosophes;
    printf("Entrez le nombre de philosophes: ");
    scanf("%d",&nb_philosophes);
    farine = adapter_quantite(nb_philosophes,farine);
    eau = adapter_quantite(nb_philosophes,eau);
    levure = adapter_quantite(nb_philosophes,levure);
    sel = adapter_quantite(nb_philosophes,sel);
    beurre = adapter_quantite(nb_philosophes,beurre);
    printf ("\nRecette de pain pour %d philosophes :\n", nb_philosophes);
    printf ("- %.1f gr de farines\n", farine);
    printf ("- %.1f dl d'eau\n", eau);
    printf ("- %.1f grammes de levure\n", levure);
    printf("- %.1f gramme de sel\n", sel);
    printf ("- %.1f cl de beurre\n", beurre);
    printf("+ de l'epices à volonté");
    /***/
}
