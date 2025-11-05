#include <stdio.h>
int main(){
    char c=4;
    int a=59,b=458;
    int temp;
    double z=3.14159;
    printf("\ntaille des types :\n");
    printf("char : %zu\n",sizeof(char));
    printf("int : %zu\n",sizeof(int));
    printf("double : %zu\n",sizeof(double));
    printf("\n\nvariables :\n");
    printf("\nadresses\tvaleurs ");
    printf("\nc : %x\t%d\n",&c,c);
    printf("\na : %x\t%d\n",&a,a);
    printf("\nb : %x\t%d\n",&b,b);
    printf("\nz : %x\t%lf\n",&z,z);
    temp=a;
    a=b;
    b=temp;
    printf("\n\nvariables :\n");
    printf("\nadresses\tvaleurs ");
    printf("\na : %x\t%d\n",&a,a);
    printf("\nb : %x\t%d\n",&b,b);

    return 0;
}

