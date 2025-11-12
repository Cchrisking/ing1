#include <stdio.h>
int main(int argc, char *argv[]) {
  /*  int i=19;
    int k =5;
    int l =25;
    for (int j=0; j < 3; ++j){
        i =12;
        l =25;
        while( k < 0) {
            int i = 20;
            i += j;
            k = k-2;
        }
        do {
            int i=30;
            int l=15;
            ++k;
            i = l;
            printf("%d\n", k);
        }while(k < 5);
        printf("%d\n", i);
    }*/
int m=1;
int n=3;
int p=5;
int test=1;
while (test || (m < n)){
    if (p % 2 == 0){
        printf(" %d %d ", p*p, test);
        // compléter le code manquant
        p*=2;
    }else{
        printf("%d %d" ,m ,m+n);
        p/=2;
    }
    test = !test;
    ++m;
}
printf("\n");
    return 0;
}
