#include <stdio.h>

int main(){
    int vetor[20];
    int numero_troca;

    for(int i = 0; i<20; i++){
        scanf("%d", &vetor[i]);
    }

    for(int j = 0; j<=9; j++){
        numero_troca = vetor[j];
        vetor[j] = vetor[19 - j];
        vetor[19 - j] = numero_troca;
     }
    for(int h = 0; h<20; h++){
        printf("N[%d] = %d\n", h, vetor[h]);
    }

    return 0;
}