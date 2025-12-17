Point3D demanderPoint3D(void){
  Point3D p;
  printf("Veuillez entrer les coordonnées d'un point à 3 dimensions :\n");
  scanf("%d %d %d", &p.x, &p.y, &p.z);
  return p;
}
void afficherPoint3D(Point3D p){
  printf("x=%d y=%d z=%d\n", p.x, p.y, p.z);
}
int incrementerEtAfficher(int n) {
  n = n + 1;
  printf("%d\n", n); // affiche 4
return n;
}
void modifierTableau(int monTableau[MAX]) {
  monTableau[0] = 33;
  printf("%d\n", monTableau[0]);
}
int remplissageTableau(int tableauDEntiers[]) {
int n = 0;
printf("Combien d'entiers voulez-vous ajouter ?\n");
scanf("%d", &n);
if (n > NB_ELEM_MAXI) {
printf("Erreur : Le tableau est limité à %d éléments.", NB_ELEM_MAXI);
return -1;
}
printf("Entrez les éléments un à un :\n");
for (int i = 0; i < n; i++) {
scanf("%d", &tableauDEntiers[i]); // On modifie directement le tableau original
}
return n; // On peut utiliser le return pour la taille logique
}
void afficherTableau(int tableau[], int taille) { /* ... */ }
