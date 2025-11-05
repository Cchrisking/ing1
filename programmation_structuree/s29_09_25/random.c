#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* sous-programme qui affiche la table de multiplication */
void afficherTableMulti(){
    int i,j;
    printf("   ");
    for(j=0;j<=9;j++){
        printf("|%3d",j);
    }
    printf("|\n");
    for(j=0;j<=10;j++){
           printf("----");
    }
     printf("\n");
     for(i=0;i<=9;i++){
         printf("%3d",i);
         for(j=0;j<=9;j++){
             printf("|%3d",i*j);
         }
         printf("|\n");
         for(j=0;j<=10;j++){
             printf("----");
         }
         printf("\n");
     }
}
/* sous-programme qui affiche les n premiers multiples d'un entier x
entrées : deux entiers n et x */
void afficherMultiples(int n,int x){
    int i;
    for(i=1;i<=n;i++){
        printf("%d*%d=%d\n",i,x,i*x);
    }

}
/* sous-programme qui propose une multiplication avec des opérandes pseudo-aléatoires entre 0 et 9,
 lit le résultat saisi par l'utilisateur et teste s'il est correct
 retour : 1 (résultat correct) ou 0 (résultat incorrect)
 */
int testerMulti(){
    int ok;
    int x,y,res;
    //tirage de deux entiers pseudo-aléatoires entre 0 et 9
    x=rand()%10;
    y=rand()%10;
    //IHM : affichage de la multiplication
    printf("\n%d*%d=",x,y);
    //IHM : lecture du résultat saisi
    scanf("%d",&res);
    //test du résultat saisi
    if(res==x*y) ok=1;
    else ok=0;
    //retour
    return ok;
}
/* sous-programme qui propose 10 multiplications et compte le nombre d'erreurs
retour : nombre d'erreurs*/
int entrainerMulti(){
    int i;
    int nErreurs=0;
    int test;
    //boucle pour recommencer 10 fois
    for(i=0;i<10;i++){
        //appel du sous-programme pour proposer une multiplication
        test=testerMulti();
        //si la valeur retournée est 0, on augmente le nombre d'erreurs de 1
        if(test==0) nErreurs++;
    }
    return nErreurs;
}
/* sous-programme qui affiche le menu puis mlit et retourne le choix de l'utilisateur */
char menu(){
    // déclaration des variables locales
    char choix;
    //appel de sous-programme pour initialiser le générateur de nombre pseudo-aléatoires
    srand(time(NULL));
    // IHM : affichage du menu
    printf("\n");
    printf("1. Afficher la table de multiplication\n");
    printf("2. Afficher les n premiers multiples d'un entier x\n");
    printf("3. S'entrainer aux multiplications\n");
    printf("4. Quitter\n");
    // IHM : lecture du choix de l'utilisateur
    scanf("%hdd",&choix);
    //retour du choix à l'appelant
    return choix;
}
/* sous-programme principal */
int main(){
    //IHM : affichage d'un message de présentation
    printf("***** Programme d'entrainement aux multiplications *****\n\n");
    // déclaration des variables locales
    char choix;
    int n,x;
    int nErreurs;
    // boucle : le programme tourne en boucle tant que l'utilisateur n'a pas choisi l'option "Quitter"
    do{
        //appel de la fonction menu et récupération de la valeur retournée
        //qui est stockée dans la variable choix
        choix=menu();
        //tests : selon le choix, le programme exécutera des instructions différentes
        if(choix==1) afficherTableMulti();
        else{
            if(choix==2){
                printf("\nsaisir n :");
                scanf("%d",&n);
                printf("\nsaisir x :");
                scanf("%d",&x);
                afficherMultiples(n,x);
            }
            else{
                if(choix==3){
                    nErreurs=entrainerMulti();
                    printf("\nVous avez fait %d erreur(s)\n",nErreurs);
                    if(nErreurs>=5){
                        printf("\n\n\tIl faut revoir la table !\n\n");
                        afficherTableMulti();
                    }
                }
                else printf("\nchoix invalide !");
            }
        }
    }while(choix!=4);
    return 0;
}
