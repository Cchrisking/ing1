#include <stdio.h>

void afficherChiffresRomains(int n) {
    // Affichage des milliers
    while (n >= 1000) {
        printf("M");
        n -= 1000;
    }
    // Affichage des cinq centaines
    while (n >= 500) {
        printf("D");
        n -= 500;
    }
    // Affichage des centaines
    while (n >= 100) {
        printf("C");
        n -= 100;
    }
    // Affichage des cinquantes
    while (n >= 50) {
        printf("L");
        n -= 50;
    }
    // Affichage des dizaines
    while (n >= 10) {
        printf("X");
        n -= 10;
    }
    // Affichage des cinq
    while (n >= 5) {
        printf("V");
        n -= 5;
    }
    // Affichage des uns
    while (n >= 1) {
        printf("I");
        n -= 1;
    }
    printf("\n");
}

int main() {
    int nombre;
    printf("Entier a convertir : ");
    scanf("%d", &nombre);

    printf("\nChiffres romains (additive) :\n ");
    afficherChiffresRomains(nombre);

    return 0;
}
