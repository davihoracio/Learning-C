#include <stdio.h>

int main(){
    double vetor[100];

    scanf("%lf", &vetor[0]);

    for(int i=1; i <100; i++){
        vetor[i] = vetor[i-1]/2;
    }

    for(int j = 0; j<100; j++){
        printf("N[%d] = %.4lf\n", j, vetor[j]);
    }
}