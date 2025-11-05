#include <stdio.h>
#include <time.h>
#include <math.h>
/* Fonction naïve pour tester si un nombre est premier
paramètre : un entier
retour : 1 si premier, 0 sinon */
int estPremier_naif_1(long long n) {
    if (n <= 1) return 0;  // seuls des entiers strictement > à 1 sont premiers
    /* boucle pour chercher un diviseur*/
    for (long long i = 2; i < n; i++) {
        if (n % i == 0) return 0; // il existe un diviseur → pas premier
    }
    //si on arrive à la fin de la boucle, c'est qu'aucun diviseur n'a été trouvé
    return 1;
}
/* Fonction naive optimisée*/
int estPremier_naif_2(long long n) {
    /* CODE A COMPLETER */
}
/* sous-programme principal qui appelle les deux focntions et compare leur temps d'exécution */
int main() {
    long long n;
    int test1,test2;
    printf("Entrez un nombre : ");
    scanf("%lld", &n);
    // mesure du temps courant
    clock_t debut = clock();
    //appel de la fonction
    test1=estPremier_naif_1(n);
    // mesure du temps courant
    clock_t fin = clock();
    //calcul du temps écoulé en secondes
    double duree_sec = (double)(fin - debut) / CLOCKS_PER_SEC;
    printf("\nversion naive 1 : temps = %f s\n", duree_sec);
    debut = clock();
    test1=estPremier_naif_2(n);
    fin = clock();
    duree_sec = (double)(fin - debut) / CLOCKS_PER_SEC;
    printf("\n\nnversion naive 2 : temps = %f s\n", duree_sec);
    if (test1==1)
        printf("%lld est premier.\n", n);
    else
        printf("%lld n'est pas premier.\n", n);

    return 0;
}
