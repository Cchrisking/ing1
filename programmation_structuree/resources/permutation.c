#include <stdio.h>
void permut(int x,int y){
    printf("\navant permutation :");
    printf("\n\tvariable x (parametre) du sous-programme permut : adresse=%x\tvaleur=%d",&x,x);
    printf("\n\tvariable y (parametre) du sous-programme permut : adresse=%x\tvaleur=%d",&y,y);
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("\napres permutation :");
    printf("\n\tvariable x (parametre) du sous-programme permut : adresse=%x\tvaleur=%d",&x,x);
    printf("\n\tvariable y (parametre) du sous-programme permut : adresse=%x\tvaleur=%d",&y,y);

}
int main(){
    int x,y;
    x=3;
    y=16;
    printf("variable x du sous-programme principal : adresse=%x\tvaleur=%d",&x,x);
    printf("\nvariable y du sous-programme principal : adresse=%x\tvaleur=%d",&y,y);
    //appel du sous-programme permut
    printf("\n\nAppel de permut :");
    permut(x,y);
    printf("\n\nFin de l'appel de permut, retour au sous-programme principal :\n");
    printf("variable x du sous-programme principal : adresse=%x\tvaleur=%d",&x,x);
    printf("\nvariable y du sous-programme principal : adresse=%x\tvaleur=%d\n\n",&y,y);

    return 0;
}
