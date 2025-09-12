#include <stdio.h>

int main(){
    int vetor[10];

    scanf("%d", &vetor[0]);

    for(int i = 1; i<10; i++){
        vetor[i] = vetor [i-1] *2;
    }
    for(int j = 0; j<10; j++){
        printf("N[%d] = %d\n", j, vetor[j]);
    }

    return 0;
}