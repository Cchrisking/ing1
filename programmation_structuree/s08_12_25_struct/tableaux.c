nt main(void) {
int monTableau[TAILLE_PHYSIQUE];
printf("%d", monTableau[0]);
printf("%d", monTableau[1]);
printf("%d", monTableau[TAILLE_PHYSIQUE-1]);
int indice = 3;
printf("%d", monTableau[indice]);
for (i = 0; i < NB_ELEM_MAX; i++) {
monTableau[i] = i * i; //initialisation
printf("%d ", monTableau[i]); // affichage
int nbValeurs = 0; // taille logique initiale du tableau, nombre de nombres décimaux réellement stockés dans le tableau
printf("Combien de valeurs souhaitez-vous ajouter ?\n"); // on demande la taille logique
scanf("%d", &nbValeurs);
if (nbValeurs > NB_ELEM_MAX) {
printf("Désolé, mais nous ne pouvons stocker que %d valeurs.", NB_ELEM_MAX);
return 1; // met fin au programme (au main)
}
for (i = 0; i < nbValeurs; i++) { // on remplit les cases de la taille logique
printf("Veuillez saisir la valeur n°%d\n", i+1);
scanf("%f", &monTableau[i]);
}
for (i = 0; i < nbValeurs-1; i++) { // tous les éléments, sauf le dernier (-1), sont suivis d'une virgule
printf("%f, ", monTableau[i]);
}
printf("%f.", monTableau[nbValeurs-1]); // le dernier, lui, est suivi d'un point
}
