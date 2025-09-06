#include <stdio.h>

int main(){ 
    //Iniciar as variáveis
    int A = 0, B = 0, C = 0, D = 0;

    //Ler os valores
    scanf("%d %d %d %d", &A, &B, &C, &D);

    //Aplicar a lógica
    if(B > C && D> A && (C+D)>(A+B) && C>0 && D>0 && (A %2) == 0) printf("Valores aceitos\n");
    else printf("Valores nao aceitos\n");

    return 0;
}