int main(int argc, char const *argv[]) {
  int nombre_etudiants;
  Etudiant* etudiants;
  lire_etudiants_fichier(&etudiants, &nombre_etudiants);
  printf("Entrez nombres etudian\n");
  scanf("%d", &nombre_etudiants);
  etudiants = malloc(sizeof(Etudiant)*nombre_etudiants);
  for (int i = 0; i < nombre_etudiants; i++) {
    printf("Etudiant %d:\n", i + 1);
    saisir_etudiant(&etudiants[i]);
  }
  // liberation memoire block nom
for (int i = 0; i < nombre_etudiants; i++) {
    free(etudiants[i].nom);
}
// liberation
free(etudiants);
  return 0;
}
