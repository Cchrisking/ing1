void initialisation_etudiant(Etudiant* etu, int id, char* nom, double note) {
    etu->id = id;
    etu->note_moyenne = note;
    // Allocation memoire
    etu->nom = malloc(strlen(nom) + 1);  // +1 pour terminaison null '\0'
    if (etu->nom != NULL) {
        strcpy(etu->nom, nom);
    }
}
void list_etudiants(const Etudiant* etudiants, int size){
  for (int i = 0; i < size; i++) {
    printf("Nom: %s\n", etudiants[i]->nom);
    printf("Identifiant: %i\n", etudiants[i]->id);
    printf("Moyenne: %f\n", etudiants[i]->note_moyenne);
  }
}
void saisir_etudiant(Etudiant* etu) {
    int id;
    double note;
    char buffer[100];
    printf("ID: ");
    scanf("%d", &id);
    getchar();
    fgets(buffer, sizeof(buffer), stdin);
    buffer[strcspn(buffer, "\n")] = '\0';
    printf("Note moyenne: ");
    scanf("%lf", &note);
    initialisation_etudiant(etu, id, buffer, note);
}
void ecrire_etudiants_fichier(Etudiant* etudiants, int nombre) {
    FILE* fichier = fopen("file.txt", "w");

    if (fichier == NULL) {
        printf("Erreur d'ouverture du fichier\n");
        return;
    }

    for (int i = 0; i < nombre; i++) {
        fprintf(fichier, "%d;%s;%.2lf",
                etudiants[i].id,
                etudiants[i].nom,
                etudiants[i].note_moyenne);

        if (i < nombre - 1) {
            fprintf(fichier, "\n");  // newline between students
        }
    }

    fclose(fichier);
    printf("Données enregistrées dans file.txt\n");
}
void ecrire_etudiants_fichier_v2(Etudiant* etudiants, int nombre) {
    FILE* fichier = fopen("file.txt", "w");

    if (fichier == NULL) {
        printf("Erreur d'ouverture du fichier\n");
        return;
    }

    for (int i = 0; i < nombre; i++) {
        fprintf(fichier, "%d,%s,%.2lf",
                etudiants[i].id,
                etudiants[i].nom,
                etudiants[i].note_moyenne);

        if (i < nombre - 1) {
            fprintf(fichier, ";");  // separator between students
        }
    }

    fclose(fichier);
}
int lire_etudiants_fichier(Etudiant** etudiants, int* nombre) {
    FILE* fichier = fopen("file.txt", "r");

    // File doesn't exist, create it
    if (fichier == NULL) {
        fichier = fopen("file.txt", "w");
        if (fichier != NULL) {
            fclose(fichier);
            printf("Fichier créé: file.txt\n");
        }
        *nombre = 0;
        *etudiants = NULL;
        return 0;
    }

    // Count lines to know how many students
    int count = 0;
    char buffer[256];
    while (fgets(buffer, sizeof(buffer), fichier) != NULL) {
        if (strlen(buffer) > 1) {  // skip empty lines
            count++;
        }
    }

    // File is empty
    if (count == 0) {
        fclose(fichier);
        *nombre = 0;
        *etudiants = NULL;
        return 0;
    }

    // Allocate array
    *etudiants = malloc(sizeof(Etudiant) * count);
    if (*etudiants == NULL) {
        fclose(fichier);
        return -1;
    }

    // Go back to beginning of file
    rewind(fichier);

    // Read each student
    int i = 0;
    char nom_buffer[100];
    while (fgets(buffer, sizeof(buffer), fichier) != NULL && i < count) {
        int id;
        double note;

        if (sscanf(buffer, "%d;%[^;];%lf", &id, nom_buffer, &note) == 3) {
            (*etudiants)[i].id = id;
            (*etudiants)[i].note_moyenne = note;
            (*etudiants)[i].nom = malloc(strlen(nom_buffer) + 1);
            if ((*etudiants)[i].nom != NULL) {
                strcpy((*etudiants)[i].nom, nom_buffer);
            }
            i++;
        }
    }
    
    *nombre = i;
    fclose(fichier);
    printf("%d étudiants chargés depuis file.txt\n", i);
    return i;
}
