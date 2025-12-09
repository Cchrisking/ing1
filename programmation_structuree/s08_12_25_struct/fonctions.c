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
