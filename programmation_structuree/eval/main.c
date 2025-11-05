#include <stdio.h>
void test() {
    int m=0;
    int n=2;
    int p=7;
    int test=1;
    do{
        if (p % 2 == 0) {
            printf(" %d %d ", p, test);
            p/=2;
        }else{
            printf("%d %d" ,m ,m+n);
            ++p;
        }
        test = ! test;
        ++m;
    }while (test || (m < n));
}
void test2() {
    int a=4;
    int b=10;
    int c=6;
    for (int i=0; i<5; i+=2) {
        if (a%2==1) {
            a+=i;
        }else {
            --a;
        }
    }
    if (a>b) {
        printf("1 ");
    }else {
        if (a+c>b) {
            printf("2 ");
        }else {
            printf("3 ");
        }
    }
    while (a<b) {
        printf("%d ",b-a);
        a+=2;
    }
}
int main(int argc, char *argv[]) {
    int i=19;
    int k =5;
    int l =25;
    printf("1 a \n");
    for (int j=0; j < 10; ++j) {
        i =10;
        k =5;
        l =25;
        while( k > 0) {
            int i = 20;
            i += j;
            k = k-2;
        }
        while (k < 5) {
            int i=30;
            int l=15;
            ++k;
            i = l;
        }
        printf("%i %d\n", j, i);
    }
    printf("2 a avec: p/=2\n");
    test();
    printf("\n3: ");
    test2();
    return 0;
}
