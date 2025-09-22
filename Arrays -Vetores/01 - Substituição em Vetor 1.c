#include <stdio.h>

int main(){
    int vetor1[10];

    for(int i = 0; i<10; i++){
        scanf("%d", &vetor1[i]);
    }
    for(int j = 0; j<10; j++){
        if(vetor1[j] <= 0) vetor1[j] = 1;
    }
    for(int h = 0; h <10; h++){
        printf("X[%d] = %d\n", h, vetor1[h]);
    }
}